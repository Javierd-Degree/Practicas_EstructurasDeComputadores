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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/javix/Documents/Practicas EC/PracticasEstructuras/Practica3/RegsMIPSTb.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0032219448_3460707467_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);

LAB4:    t2 = (t0 + 2472U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(74, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4720);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4720);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3008U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3800);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_0032219448_3460707467_p_1(char *t0)
{
    char t9[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t10;
    int t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    int64 t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;

LAB0:    t1 = (t0 + 4240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(91, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(92, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 2, 5);
    t3 = (t0 + 4976);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t2, 5U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(93, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    memset(t3, (unsigned char)3, 32U);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);

LAB6:    t2 = (t0 + 4560);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 4560);
    *((int *)t4) = 0;
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 - 1);
    t2 = (t0 + 8631);
    *((int *)t2) = 0;
    t4 = (t0 + 8635);
    *((int *)t4) = t12;
    t13 = 0;
    t14 = t12;

LAB8:    if (t13 <= t14)
        goto LAB9;

LAB11:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(113, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(114, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB5:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(101, ng0);
    t5 = (t0 + 8631);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t5), 5);
    t7 = (t0 + 4848);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 8631);
    t13 = *((int *)t2);
    t3 = (t0 + 8635);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB11;

LAB24:    t11 = (t13 + 1);
    t13 = t11;
    t4 = (t0 + 8631);
    *((int *)t4) = t13;
    goto LAB8;

LAB12:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8639);
    t10 = 1;
    if (32U == 32U)
        goto LAB18;

LAB19:    t10 = 0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t7 = (t0 + 8671);
    xsi_report(t7, 38U, (unsigned char)3);
    goto LAB17;

LAB18:    t19 = 0;

LAB21:    if (t19 < 32U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB19;

LAB23:    t19 = (t19 + 1);
    goto LAB21;

LAB25:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5104);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 - 1);
    t2 = (t0 + 8709);
    *((int *)t2) = 0;
    t4 = (t0 + 8713);
    *((int *)t4) = t12;
    t13 = 0;
    t14 = t12;

LAB29:    if (t13 <= t14)
        goto LAB30;

LAB32:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 - 1);
    t2 = (t0 + 8766);
    *((int *)t2) = 0;
    t4 = (t0 + 8770);
    *((int *)t4) = t12;
    t13 = 0;
    t14 = t12;

LAB46:    if (t13 <= t14)
        goto LAB47;

LAB49:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB57:    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB30:    xsi_set_current_line(123, ng0);
    t5 = (t0 + 8709);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t5), 5);
    t7 = (t0 + 4848);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB31:    t2 = (t0 + 8709);
    t13 = *((int *)t2);
    t3 = (t0 + 8713);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB32;

LAB45:    t11 = (t13 + 1);
    t13 = t11;
    t4 = (t0 + 8709);
    *((int *)t4) = t13;
    goto LAB29;

LAB33:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8717);
    t10 = 1;
    if (32U == 32U)
        goto LAB39;

LAB40:    t10 = 0;

LAB41:    if (t10 == 0)
        goto LAB37;

LAB38:    goto LAB31;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    t7 = (t0 + 8749);
    xsi_report(t7, 17U, (unsigned char)3);
    goto LAB38;

LAB39:    t19 = 0;

LAB42:    if (t19 < 32U)
        goto LAB43;
    else
        goto LAB41;

LAB43:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB40;

LAB44:    t19 = (t19 + 1);
    goto LAB42;

LAB47:    xsi_set_current_line(137, ng0);
    t5 = (t0 + 8766);
    t20 = *((int *)t5);
    t21 = (t20 + 16);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t21, 32);
    t7 = (t0 + 5040);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 8766);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t2), 5);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);

LAB52:    t2 = (t0 + 4576);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB48:    t2 = (t0 + 8766);
    t13 = *((int *)t2);
    t3 = (t0 + 8770);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB49;

LAB54:    t11 = (t13 + 1);
    t13 = t11;
    t4 = (t0 + 8766);
    *((int *)t4) = t13;
    goto LAB46;

LAB50:    t4 = (t0 + 4576);
    *((int *)t4) = 0;
    goto LAB48;

LAB51:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB50;
    else
        goto LAB52;

LAB53:    goto LAB51;

LAB55:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 - 1);
    t2 = (t0 + 8774);
    *((int *)t2) = 1;
    t4 = (t0 + 8778);
    *((int *)t4) = t12;
    t13 = 1;
    t14 = t12;

LAB59:    if (t13 <= t14)
        goto LAB60;

LAB62:    xsi_set_current_line(176, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(177, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(178, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB56:    goto LAB55;

LAB58:    goto LAB56;

LAB60:    xsi_set_current_line(157, ng0);
    t5 = (t0 + 8774);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t5), 5);
    t7 = (t0 + 4848);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 8774);
    t11 = *((int *)t2);
    t12 = (32 - t11);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t12, 5);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(162, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB65:    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB61:    t2 = (t0 + 8774);
    t13 = *((int *)t2);
    t3 = (t0 + 8778);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB62;

LAB83:    t11 = (t13 + 1);
    t13 = t11;
    t4 = (t0 + 8774);
    *((int *)t4) = t13;
    goto LAB59;

LAB63:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8774);
    t11 = *((int *)t2);
    t12 = (t11 + 16);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t12, 32);
    t5 = (t9 + 12U);
    t19 = *((unsigned int *)t5);
    t19 = (t19 * 1U);
    t10 = 1;
    if (32U == t19)
        goto LAB69;

LAB70:    t10 = 0;

LAB71:    if (t10 == 0)
        goto LAB67;

LAB68:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 8774);
    t11 = *((int *)t2);
    t12 = (32 - t11);
    t20 = (t12 + 16);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t20, 32);
    t5 = (t9 + 12U);
    t19 = *((unsigned int *)t5);
    t19 = (t19 * 1U);
    t10 = 1;
    if (32U == t19)
        goto LAB77;

LAB78:    t10 = 0;

LAB79:    if (t10 == 0)
        goto LAB75;

LAB76:    goto LAB61;

LAB64:    goto LAB63;

LAB66:    goto LAB64;

LAB67:    t8 = (t0 + 8782);
    xsi_report(t8, 26U, (unsigned char)3);
    goto LAB68;

LAB69:    t22 = 0;

LAB72:    if (t22 < 32U)
        goto LAB73;
    else
        goto LAB71;

LAB73:    t6 = (t3 + t22);
    t7 = (t4 + t22);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB70;

LAB74:    t22 = (t22 + 1);
    goto LAB72;

LAB75:    t8 = (t0 + 8808);
    xsi_report(t8, 26U, (unsigned char)3);
    goto LAB76;

LAB77:    t22 = 0;

LAB80:    if (t22 < 32U)
        goto LAB81;
    else
        goto LAB79;

LAB81:    t6 = (t3 + t22);
    t7 = (t4 + t22);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB78;

LAB82:    t22 = (t22 + 1);
    goto LAB80;

LAB84:    xsi_set_current_line(181, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 32);
    t4 = (t9 + 12U);
    t19 = *((unsigned int *)t4);
    t19 = (t19 * 1U);
    t10 = 1;
    if (32U == t19)
        goto LAB90;

LAB91:    t10 = 0;

LAB92:    if (t10 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(186, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 32);
    t4 = (t9 + 12U);
    t19 = *((unsigned int *)t4);
    t19 = (t19 * 1U);
    t10 = 1;
    if (32U == t19)
        goto LAB98;

LAB99:    t10 = 0;

LAB100:    if (t10 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(193, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t11 = *((int *)t3);
    t12 = (t11 - 1);
    t2 = (t0 + 8932);
    *((int *)t2) = 1;
    t4 = (t0 + 8936);
    *((int *)t4) = t12;
    t13 = 1;
    t14 = t12;

LAB104:    if (t13 <= t14)
        goto LAB105;

LAB107:    xsi_set_current_line(218, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(219, ng0);
    t2 = (t0 + 9204);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(220, ng0);
    t2 = (t0 + 9236);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(221, ng0);
    t2 = (t0 + 9241);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(222, ng0);

LAB139:    t2 = (t0 + 4608);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t7 = (t0 + 8834);
    xsi_report(t7, 49U, (unsigned char)3);
    goto LAB89;

LAB90:    t22 = 0;

LAB93:    if (t22 < 32U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t5 = (t3 + t22);
    t6 = (t2 + t22);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB91;

LAB95:    t22 = (t22 + 1);
    goto LAB93;

LAB96:    t7 = (t0 + 8883);
    xsi_report(t7, 49U, (unsigned char)3);
    goto LAB97;

LAB98:    t22 = 0;

LAB101:    if (t22 < 32U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t5 = (t3 + t22);
    t6 = (t2 + t22);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB99;

LAB103:    t22 = (t22 + 1);
    goto LAB101;

LAB105:    xsi_set_current_line(195, ng0);
    t5 = (t0 + 8932);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t5), 5);
    t7 = (t0 + 4848);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(196, ng0);
    t2 = (t0 + 8932);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t2), 5);
    t4 = (t0 + 4912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(197, ng0);
    t2 = (t0 + 8932);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, *((int *)t2), 5);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(198, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB106:    t2 = (t0 + 8932);
    t13 = *((int *)t2);
    t3 = (t0 + 8936);
    t14 = *((int *)t3);
    if (t13 == t14)
        goto LAB107;

LAB136:    t11 = (t13 + 1);
    t13 = t11;
    t4 = (t0 + 8932);
    *((int *)t4) = t13;
    goto LAB104;

LAB108:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 8940);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(203, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(204, ng0);

LAB114:    t2 = (t0 + 4592);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    t4 = (t0 + 4592);
    *((int *)t4) = 0;
    xsi_set_current_line(205, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB118:    *((char **)t1) = &&LAB119;
    goto LAB1;

LAB113:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB112;
    else
        goto LAB114;

LAB115:    goto LAB113;

LAB116:    xsi_set_current_line(207, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 8972);
    t10 = 1;
    if (32U == 32U)
        goto LAB122;

LAB123:    t10 = 0;

LAB124:    if (t10 == 0)
        goto LAB120;

LAB121:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 9088);
    t10 = 1;
    if (32U == 32U)
        goto LAB130;

LAB131:    t10 = 0;

LAB132:    if (t10 == 0)
        goto LAB128;

LAB129:    goto LAB106;

LAB117:    goto LAB116;

LAB119:    goto LAB117;

LAB120:    t7 = (t0 + 9004);
    xsi_report(t7, 84U, (unsigned char)3);
    goto LAB121;

LAB122:    t19 = 0;

LAB125:    if (t19 < 32U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB123;

LAB127:    t19 = (t19 + 1);
    goto LAB125;

LAB128:    t7 = (t0 + 9120);
    xsi_report(t7, 84U, (unsigned char)3);
    goto LAB129;

LAB130:    t19 = 0;

LAB133:    if (t19 < 32U)
        goto LAB134;
    else
        goto LAB132;

LAB134:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB131;

LAB135:    t19 = (t19 + 1);
    goto LAB133;

LAB137:    t4 = (t0 + 4608);
    *((int *)t4) = 0;
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB143:    *((char **)t1) = &&LAB144;
    goto LAB1;

LAB138:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB137;
    else
        goto LAB139;

LAB140:    goto LAB138;

LAB141:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 9246);
    t10 = 1;
    if (32U == 32U)
        goto LAB147;

LAB148:    t10 = 0;

LAB149:    if (t10 == 0)
        goto LAB145;

LAB146:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 9325);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 9357);
    t4 = (t0 + 4976);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 9362);
    t4 = (t0 + 4848);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(233, ng0);

LAB155:    t2 = (t0 + 4624);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB142:    goto LAB141;

LAB144:    goto LAB142;

LAB145:    t7 = (t0 + 9278);
    xsi_report(t7, 47U, (unsigned char)3);
    goto LAB146;

LAB147:    t19 = 0;

LAB150:    if (t19 < 32U)
        goto LAB151;
    else
        goto LAB149;

LAB151:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB148;

LAB152:    t19 = (t19 + 1);
    goto LAB150;

LAB153:    t4 = (t0 + 4624);
    *((int *)t4) = 0;
    xsi_set_current_line(234, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB159:    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB154:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB153;
    else
        goto LAB155;

LAB156:    goto LAB154;

LAB157:    xsi_set_current_line(235, ng0);
    t2 = (t0 + 4784);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 9367);
    t4 = (t0 + 5040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(237, ng0);

LAB163:    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB164;
    goto LAB1;

LAB158:    goto LAB157;

LAB160:    goto LAB158;

LAB161:    t4 = (t0 + 4640);
    *((int *)t4) = 0;
    xsi_set_current_line(238, ng0);
    t2 = (t0 + 2888U);
    t3 = *((char **)t2);
    t18 = *((int64 *)t3);
    t2 = (t0 + 4048);
    xsi_process_wait(t2, t18);

LAB167:    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB162:    t3 = (t0 + 1952U);
    t10 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t10 == 1)
        goto LAB161;
    else
        goto LAB163;

LAB164:    goto LAB162;

LAB165:    xsi_set_current_line(239, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 9399);
    t10 = 1;
    if (32U == 32U)
        goto LAB171;

LAB172:    t10 = 0;

LAB173:    if (t10 == 0)
        goto LAB169;

LAB170:    xsi_set_current_line(246, ng0);
    t2 = (t0 + 9473);
    xsi_report(t2, 71U, (unsigned char)0);
    xsi_set_current_line(247, ng0);
    t2 = (t0 + 5168);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(248, ng0);

LAB179:    *((char **)t1) = &&LAB180;
    goto LAB1;

LAB166:    goto LAB165;

LAB168:    goto LAB166;

LAB169:    t7 = (t0 + 9431);
    xsi_report(t7, 42U, (unsigned char)3);
    goto LAB170;

LAB171:    t19 = 0;

LAB174:    if (t19 < 32U)
        goto LAB175;
    else
        goto LAB173;

LAB175:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB172;

LAB176:    t19 = (t19 + 1);
    goto LAB174;

LAB177:    goto LAB2;

LAB178:    goto LAB177;

LAB180:    goto LAB178;

}


extern void work_a_0032219448_3460707467_init()
{
	static char *pe[] = {(void *)work_a_0032219448_3460707467_p_0,(void *)work_a_0032219448_3460707467_p_1};
	xsi_register_didat("work_a_0032219448_3460707467", "isim/RegsMIPSTb_isim_beh.exe.sim/work/a_0032219448_3460707467.didat");
	xsi_register_executes(pe);
}
