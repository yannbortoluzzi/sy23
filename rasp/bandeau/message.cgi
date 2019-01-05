#!/bin/bash

echo "Content-type: text/html"
echo ""
echo '<html>'
echo '<head>'
echo '<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">'
echo '<script></script>history.go(-1);</script>'
echo '<title>GOOD JOB</title>'
echo '</head>'
echo '<body bgcolor="pink">'
echo '<h2 align="center">Message bien envoyé</h2>'
echo '</html>'


if [ "$REQUEST_METHOD" = "POST" ]; then
 read QUERY_STRING;
fi
MSG= 'echo "$QUERY_STRING"  | sed -n 's/^.*message=\([^&]*\).*$/\1/p'';
FX = 'echo "$QUERY_STRING" | sed -n 's/^.*effet=\([^&]*\).*$/\1/p' | sed "s/%20/ /g"';
echo "$QUERY_STRING";
echo "$MSG";
echo "$FX";
echo "[00\V01\X$FX<$MSG>]";

