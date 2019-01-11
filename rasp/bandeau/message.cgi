#!/bin/bash
echo "Content-type: text/html"
echo ""
echo '<html>'
echo '<head>'
echo '<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">'
echo '<script>history.go(-1);</script>'
echo '</head>'
echo '<body bgcolor="pink">'
echo '<h2 align="center">Message bien envoyé</h2>'
echo '</html>'

if [ "$REQUEST_METHOD" = "POST" ]; then
 read QUERY_STRING;
fi

MSG=$(echo "$QUERY_STRING"| sed -re 's/message=//g'| sed -re's/&effet=/\n/g'); //on sépare en 2 ligne; 1ere ligne message; 2eme fx
FX=$(echo "$MSG"|sed -n '2p');//on récupere les fx
MSG=$(echo "$MSG"|sed -n '1p'|sed -re 's/\+/ /g');// on remplace les + par des espaces
echo "[00\V01\X$FX<$MSG>]"> /dev/ttyAMA0;
