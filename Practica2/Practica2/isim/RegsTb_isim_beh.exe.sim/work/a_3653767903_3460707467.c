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
static const char *ng0 = "C:/Users/javix/Documents/Practicas EC/PracticasEstructuras/Practica2/RegsTb.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;
extern char *STD_STANDARD;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_2271993008_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3653767903_3460707467_p_0(char *t0)
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

LAB0:    t1 = (t0 + 3512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);

LAB4:    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (!(t4));
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(67, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 4192);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3320);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4192);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2528U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3320);
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

static void work_a_3653767903_3460707467_p_1(char *t0)
{
    char t14[16];
    char t23[16];
    char t28[16];
    char t30[16];
    char t36[16];
    char t38[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    int t10;
    int t11;
    int t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned int t19;
    int t20;
    int t21;
    unsigned int t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    char *t35;
    char *t37;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;

LAB0:    t1 = (t0 + 3760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(78, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t3 = t2;
    memset(t3, (unsigned char)2, 32U);
    t4 = (t0 + 4384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 4448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 4448);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (t10 - 1);
    t2 = (t0 + 7469);
    *((int *)t2) = 0;
    t4 = (t0 + 7473);
    *((int *)t4) = t11;
    t12 = 0;
    t13 = t11;

LAB8:    if (t12 <= t13)
        goto LAB9;

LAB11:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (t10 - 1);
    t2 = (t0 + 7526);
    *((int *)t2) = t11;
    t4 = (t0 + 7530);
    *((int *)t4) = 0;
    t12 = t11;
    t13 = 0;

LAB25:    if (t12 >= t13)
        goto LAB26;

LAB28:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(88, ng0);
    t5 = (t0 + 7469);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, *((int *)t5), 5);
    t7 = (t0 + 4320);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 7469);
    t12 = *((int *)t2);
    t3 = (t0 + 7473);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB11;

LAB24:    t10 = (t12 + 1);
    t12 = t10;
    t4 = (t0 + 7469);
    *((int *)t4) = t12;
    goto LAB8;

LAB12:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7477);
    t18 = 1;
    if (32U == 32U)
        goto LAB18;

LAB19:    t18 = 0;

LAB20:    if (t18 == 0)
        goto LAB16;

LAB17:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t7 = (t0 + 7509);
    xsi_report(t7, 17U, (unsigned char)3);
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

LAB26:    xsi_set_current_line(103, ng0);
    t5 = (t0 + 7526);
    t20 = *((int *)t5);
    t21 = (t20 + 16);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, t21, 32);
    t7 = (t0 + 4384);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 7526);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, *((int *)t2), 5);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(110, ng0);

LAB31:    t2 = (t0 + 4080);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:    t2 = (t0 + 7526);
    t12 = *((int *)t2);
    t3 = (t0 + 7530);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB28;

LAB37:    t10 = (t12 + -1);
    t12 = t10;
    t4 = (t0 + 7526);
    *((int *)t4) = t12;
    goto LAB25;

LAB29:    t4 = (t0 + 4080);
    *((int *)t4) = 0;
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 7534);
    t4 = (t0 + 4384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(115, ng0);

LAB35:    t2 = (t0 + 4096);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    t3 = (t0 + 1632U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB29;
    else
        goto LAB31;

LAB32:    goto LAB30;

LAB33:    t4 = (t0 + 4096);
    *((int *)t4) = 0;
    goto LAB27;

LAB34:    t3 = (t0 + 1632U);
    t18 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB33;
    else
        goto LAB35;

LAB36:    goto LAB34;

LAB38:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (t10 - 1);
    t2 = (t0 + 7566);
    *((int *)t2) = 1;
    t4 = (t0 + 7570);
    *((int *)t4) = t11;
    t12 = 1;
    t13 = t11;

LAB42:    if (t12 <= t13)
        goto LAB43;

LAB45:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t10 = *((int *)t3);
    t11 = (t10 - 1);
    t2 = (t0 + 7652);
    *((int *)t2) = 1;
    t4 = (t0 + 7656);
    *((int *)t4) = t11;
    t12 = 1;
    t13 = t11;

LAB71:    if (t12 <= t13)
        goto LAB72;

LAB74:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 7812);
    xsi_report(t2, 69U, 0);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(167, ng0);

LAB98:    *((char **)t1) = &&LAB99;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB43:    xsi_set_current_line(126, ng0);
    t5 = (t0 + 7566);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, *((int *)t5), 5);
    t7 = (t0 + 4320);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB44:    t2 = (t0 + 7566);
    t12 = *((int *)t2);
    t3 = (t0 + 7570);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB45;

LAB70:    t10 = (t12 + 1);
    t12 = t10;
    t4 = (t0 + 7566);
    *((int *)t4) = t12;
    goto LAB42;

LAB46:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7566);
    t10 = *((int *)t2);
    t11 = (t10 + 16);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, t11, 32);
    t5 = (t14 + 12U);
    t19 = *((unsigned int *)t5);
    t19 = (t19 * 1U);
    t18 = 1;
    if (32U == t19)
        goto LAB52;

LAB53:    t18 = 0;

LAB54:    if (t18 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(135, ng0);
    t2 = xsi_get_transient_memory(5U);
    memset(t2, 0, 5U);
    t3 = t2;
    memset(t3, (unsigned char)2, 5U);
    t4 = (t0 + 4320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t8 = (t0 + 7574);
    t16 = ((STD_STANDARD) + 384);
    t17 = (t0 + 1032U);
    t24 = *((char **)t17);
    t17 = (t0 + 7328U);
    t20 = ieee_p_1242562249_sub_2271993008_1035706684(IEEE_P_1242562249, t24, t17);
    t25 = xsi_int_to_mem(t20);
    t26 = xsi_string_variable_get_image(t23, t16, t25);
    t29 = ((STD_STANDARD) + 1008);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 1;
    t32 = (t31 + 4U);
    *((int *)t32) = 28;
    t32 = (t31 + 8U);
    *((int *)t32) = 1;
    t21 = (28 - 1);
    t33 = (t21 * 1);
    t33 = (t33 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t33;
    t27 = xsi_base_array_concat(t27, t28, t29, (char)97, t8, t30, (char)97, t26, t23, (char)101);
    t32 = (t0 + 7602);
    t37 = ((STD_STANDARD) + 1008);
    t39 = (t38 + 0U);
    t40 = (t39 + 0U);
    *((int *)t40) = 1;
    t40 = (t39 + 4U);
    *((int *)t40) = 1;
    t40 = (t39 + 8U);
    *((int *)t40) = 1;
    t41 = (1 - 1);
    t33 = (t41 * 1);
    t33 = (t33 + 1);
    t40 = (t39 + 12U);
    *((unsigned int *)t40) = t33;
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t27, t28, (char)97, t32, t38, (char)101);
    t40 = (t23 + 12U);
    t33 = *((unsigned int *)t40);
    t42 = (28U + t33);
    t43 = (t42 + 1U);
    xsi_report(t35, t43, (unsigned char)3);
    goto LAB51;

LAB52:    t22 = 0;

LAB55:    if (t22 < 32U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t6 = (t3 + t22);
    t7 = (t4 + t22);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB53;

LAB57:    t22 = (t22 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 0, 32);
    t4 = (t14 + 12U);
    t19 = *((unsigned int *)t4);
    t19 = (t19 * 1U);
    t18 = 1;
    if (32U == t19)
        goto LAB64;

LAB65:    t18 = 0;

LAB66:    if (t18 == 0)
        goto LAB62;

LAB63:    goto LAB44;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t7 = (t0 + 7603);
    xsi_report(t7, 49U, (unsigned char)3);
    goto LAB63;

LAB64:    t22 = 0;

LAB67:    if (t22 < 32U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t5 = (t3 + t22);
    t6 = (t2 + t22);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB65;

LAB69:    t22 = (t22 + 1);
    goto LAB67;

LAB72:    xsi_set_current_line(148, ng0);
    t5 = (t0 + 7652);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, *((int *)t5), 5);
    t7 = (t0 + 4320);
    t8 = (t7 + 56U);
    t15 = *((char **)t8);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 5U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 7652);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, *((int *)t2), 5);
    t4 = (t0 + 4256);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t3, 5U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB77:    *((char **)t1) = &&LAB78;
    goto LAB1;

LAB73:    t2 = (t0 + 7652);
    t12 = *((int *)t2);
    t3 = (t0 + 7656);
    t13 = *((int *)t3);
    if (t12 == t13)
        goto LAB74;

LAB95:    t10 = (t12 + 1);
    t12 = t10;
    t4 = (t0 + 7652);
    *((int *)t4) = t12;
    goto LAB71;

LAB75:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 7660);
    t4 = (t0 + 4384);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(156, ng0);

LAB81:    t2 = (t0 + 4112);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB82;
    goto LAB1;

LAB76:    goto LAB75;

LAB78:    goto LAB76;

LAB79:    t4 = (t0 + 4112);
    *((int *)t4) = 0;
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3568);
    xsi_process_wait(t2, t9);

LAB85:    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB80:    t3 = (t0 + 1632U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB79;
    else
        goto LAB81;

LAB82:    goto LAB80;

LAB83:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7692);
    t18 = 1;
    if (32U == 32U)
        goto LAB89;

LAB90:    t18 = 0;

LAB91:    if (t18 == 0)
        goto LAB87;

LAB88:    goto LAB73;

LAB84:    goto LAB83;

LAB86:    goto LAB84;

LAB87:    t7 = (t0 + 7724);
    xsi_report(t7, 88U, (unsigned char)3);
    goto LAB88;

LAB89:    t19 = 0;

LAB92:    if (t19 < 32U)
        goto LAB93;
    else
        goto LAB91;

LAB93:    t5 = (t3 + t19);
    t6 = (t2 + t19);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB90;

LAB94:    t19 = (t19 + 1);
    goto LAB92;

LAB96:    goto LAB2;

LAB97:    goto LAB96;

LAB99:    goto LAB97;

}


extern void work_a_3653767903_3460707467_init()
{
	static char *pe[] = {(void *)work_a_3653767903_3460707467_p_0,(void *)work_a_3653767903_3460707467_p_1};
	xsi_register_didat("work_a_3653767903_3460707467", "isim/RegsTb_isim_beh.exe.sim/work/a_3653767903_3460707467.didat");
	xsi_register_executes(pe);
}
