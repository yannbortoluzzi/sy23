/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/uvs/Bureau/spi/spi_master.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_4011453388_3665547200_p_0(char *t0)
{
    char t31[16];
    char t33[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    int t24;
    unsigned char t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    static char *nl0[] = {&&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 6584);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6664);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 6792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t2 = t1;
    memset(t2, (unsigned char)2, 15U);
    t5 = (t0 + 6856);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 15U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 3432U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(79, ng0);
    t7 = (t0 + 6664);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(80, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 6792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 6984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB10;

LAB12:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 6664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t19 = (t16 * -1);
    t20 = (1 * t19);
    t21 = (0U + t20);
    t1 = (t0 + 6728);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, t21, 1, 0LL);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t3 = (t15 == t16);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 7176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB23:    goto LAB10;

LAB13:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 6664);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 < 1);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 7048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);

LAB17:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t3 = (t15 == 0);
    if (t3 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(96, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 7112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 7176);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t15;
    xsi_driver_first_trans_fast(t1);

LAB20:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7240);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 7368);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 7432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(103, ng0);
    t15 = (15 * 2);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t16 = ieee_std_logic_arith_conv_integer_ulogic(IEEE_P_3499444699, t3);
    t17 = (t15 + t16);
    t18 = (t17 - 1);
    t1 = (t0 + 7496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t18;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t1 = (t0 + 7048);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t16;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 7112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 7176);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 1;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 7176);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 7304);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (15 * 2);
    t17 = (t16 + 1);
    t3 = (t15 == t17);
    if (t3 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (t15 + 1);
    t1 = (t0 + 7432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t16;
    xsi_driver_first_trans_fast(t1);

LAB26:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (15 * 2);
    t4 = (t15 <= t16);
    if (t4 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t10 = *((unsigned char *)t2);
    t11 = (t10 == (unsigned char)2);
    if (t11 == 1)
        goto LAB40;

LAB41:    t4 = (unsigned char)0;

LAB42:    if (t4 == 1)
        goto LAB37;

LAB38:    t3 = (unsigned char)0;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB48;

LAB49:    t3 = (unsigned char)0;

LAB50:    if (t3 != 0)
        goto LAB45;

LAB47:
LAB46:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t1 = (t0 + 4872U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t4 = (t15 == t16);
    if (t4 == 1)
        goto LAB56;

LAB57:    t3 = (unsigned char)0;

LAB58:    if (t3 != 0)
        goto LAB53;

LAB55:
LAB54:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB59;

LAB61:
LAB60:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (15 * 2);
    t17 = (t16 + 1);
    t4 = (t15 == t17);
    if (t4 == 1)
        goto LAB65;

LAB66:    t3 = (unsigned char)0;

LAB67:    if (t3 != 0)
        goto LAB62;

LAB64:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB63:    goto LAB23;

LAB25:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 7432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(125, ng0);
    t7 = (t0 + 2632U);
    t8 = *((char **)t7);
    t12 = *((unsigned char *)t8);
    t22 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t12);
    t7 = (t0 + 7240);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t22;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB29;

LAB31:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 3592U);
    t6 = *((char **)t1);
    t17 = *((int *)t6);
    t18 = (t17 - 0);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(0, 0, -1, t17);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t1 = (t5 + t21);
    t10 = *((unsigned char *)t1);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB33;

LAB34:    xsi_set_current_line(130, ng0);
    t9 = (t0 + 4552U);
    t13 = *((char **)t9);
    t26 = (15 - 2);
    t27 = (14 - t26);
    t28 = (t27 * 1U);
    t29 = (0 + t28);
    t9 = (t13 + t29);
    t14 = (t0 + 2472U);
    t23 = *((char **)t14);
    t30 = *((unsigned char *)t23);
    t32 = ((IEEE_P_2592010699) + 4000);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 13;
    t35 = (t34 + 4U);
    *((int *)t35) = 0;
    t35 = (t34 + 8U);
    *((int *)t35) = -1;
    t36 = (0 - 13);
    t37 = (t36 * -1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t14 = xsi_base_array_concat(t14, t31, t32, (char)97, t9, t33, (char)99, t30, (char)101);
    t37 = (14U + 1U);
    t38 = (15U != t37);
    if (t38 == 1)
        goto LAB43;

LAB44:    t35 = (t0 + 7560);
    t39 = (t35 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    memcpy(t42, t14, 15U);
    xsi_driver_first_trans_fast(t35);
    goto LAB35;

LAB37:    t1 = (t0 + 2792U);
    t7 = *((char **)t1);
    t1 = (t0 + 3592U);
    t8 = *((char **)t1);
    t18 = *((int *)t8);
    t24 = (t18 - 0);
    t19 = (t24 * -1);
    xsi_vhdl_check_range_of_index(0, 0, -1, t18);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t1 = (t7 + t21);
    t22 = *((unsigned char *)t1);
    t25 = (t22 == (unsigned char)2);
    t3 = t25;
    goto LAB39;

LAB40:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 4872U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t17 = (t16 + 1);
    t12 = (t15 < t17);
    t4 = t12;
    goto LAB42;

LAB43:    xsi_size_not_matching(15U, t37, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 4712U);
    t7 = *((char **)t1);
    t17 = (15 - 1);
    t18 = (t17 - 14);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t1 = (t7 + t21);
    t12 = *((unsigned char *)t1);
    t8 = (t0 + 6792);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    *((unsigned char *)t23) = t12;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t15 = (15 - 2);
    t19 = (14 - t15);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t33 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 13;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t16 = (0 - 13);
    t27 = (t16 * -1);
    t27 = (t27 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t27;
    t5 = xsi_base_array_concat(t5, t31, t6, (char)97, t1, t33, (char)99, (unsigned char)2, (char)101);
    t27 = (14U + 1U);
    t3 = (15U != t27);
    if (t3 == 1)
        goto LAB51;

LAB52:    t8 = (t0 + 7368);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t23 = *((char **)t14);
    memcpy(t23, t5, 15U);
    xsi_driver_first_trans_fast(t8);
    goto LAB46;

LAB48:    t1 = (t0 + 4072U);
    t5 = *((char **)t1);
    t15 = *((int *)t5);
    t1 = (t0 + 4872U);
    t6 = *((char **)t1);
    t16 = *((int *)t6);
    t11 = (t15 < t16);
    t3 = t11;
    goto LAB50;

LAB51:    xsi_size_not_matching(15U, t27, 0);
    goto LAB52;

LAB53:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t1 = (t0 + 7368);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t7, 15U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t15 = *((int *)t2);
    t16 = (15 * 2);
    t17 = (t15 - t16);
    t18 = (t17 + 1);
    t1 = (t0 + 7432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t18;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 6984);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB54;

LAB56:    t1 = (t0 + 1832U);
    t6 = *((char **)t1);
    t10 = *((unsigned char *)t6);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB58;

LAB59:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 6984);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 6664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 6856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB60;

LAB62:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 6664);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(156, ng0);
    t1 = xsi_get_transient_memory(1U);
    memset(t1, 0, 1U);
    t2 = t1;
    memset(t2, (unsigned char)3, 1U);
    t5 = (t0 + 6728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 1U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 6792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(158, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t1 = (t0 + 6856);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 6920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB65:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB67;

}


extern void work_a_4011453388_3665547200_init()
{
	static char *pe[] = {(void *)work_a_4011453388_3665547200_p_0};
	xsi_register_didat("work_a_4011453388_3665547200", "isim/spytest_isim_beh.exe.sim/work/a_4011453388_3665547200.didat");
	xsi_register_executes(pe);
}
