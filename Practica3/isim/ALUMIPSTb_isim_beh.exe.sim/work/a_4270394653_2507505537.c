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
static const char *ng0 = "C:/Users/javix/Documents/Practicas EC/PracticasEstructuras/Practica3/ALUMIPS.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1306069469_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_4270394653_2507505537_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(33, ng0);

LAB3:    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 6976U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 6992U);
    t6 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (32U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 4344);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 4216);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(32U, t9, 0);
    goto LAB6;

}

static void work_a_4270394653_2507505537_p_1(char *t0)
{
    char t17[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    unsigned char t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7211);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB9:    t5 = (t0 + 7214);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 7217);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 7220);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 7223);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (31 - 31);
    t24 = (t4 * -1);
    t25 = (1U * t24);
    t32 = (0 + t25);
    t1 = (t2 + t32);
    t33 = *((unsigned char *)t1);
    t34 = (t33 == (unsigned char)3);
    if (t34 == 1)
        goto LAB26;

LAB27:    t26 = (unsigned char)0;

LAB28:    if (t26 != 0)
        goto LAB23;

LAB25:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = (31 - 31);
    t24 = (t4 * -1);
    t25 = (1U * t24);
    t32 = (0 + t25);
    t1 = (t2 + t32);
    t33 = *((unsigned char *)t1);
    t34 = (t33 == (unsigned char)2);
    if (t34 == 1)
        goto LAB31;

LAB32:    t26 = (unsigned char)0;

LAB33:    if (t26 != 0)
        goto LAB29;

LAB30:    xsi_set_current_line(52, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t3 = (t0 + 1992U);
    t5 = *((char **)t3);
    t4 = (31 - 31);
    t24 = (t4 * -1);
    t25 = (1U * t24);
    t32 = (0 + t25);
    t3 = (t5 + t32);
    t26 = *((unsigned char *)t3);
    t7 = (0 - 31);
    t35 = (t7 * -1);
    t36 = (1U * t35);
    t6 = (t2 + t36);
    *((unsigned char *)t6) = t26;
    t8 = (t0 + 4408);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t1, 32U);
    xsi_driver_first_trans_fast(t8);

LAB24:
LAB2:    t1 = (t0 + 4232);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(37, ng0);
    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t18 = (t0 + 6976U);
    t20 = (t0 + 1192U);
    t21 = *((char **)t20);
    t20 = (t0 + 6992U);
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t17, t19, t18, t21, t20);
    t23 = (t17 + 12U);
    t24 = *((unsigned int *)t23);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB15;

LAB16:    t27 = (t0 + 4408);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t22, 32U);
    xsi_driver_first_trans_fast(t27);
    goto LAB2;

LAB4:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4408);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 32U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6992U);
    t6 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t17, t2, t1, t5, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 4408);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6992U);
    t6 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t17, t2, t1, t5, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB19;

LAB20:    t9 = (t0 + 4408);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB7:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6976U);
    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t3 = (t0 + 6992U);
    t6 = ieee_p_2592010699_sub_1306069469_503743352(IEEE_P_2592010699, t17, t2, t1, t5, t3);
    t8 = (t17 + 12U);
    t24 = *((unsigned int *)t8);
    t25 = (1U * t24);
    t26 = (32U != t25);
    if (t26 == 1)
        goto LAB21;

LAB22:    t9 = (t0 + 4408);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB14:;
LAB15:    xsi_size_not_matching(32U, t25, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(32U, t25, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(32U, t25, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(32U, t25, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(46, ng0);
    t6 = xsi_get_transient_memory(32U);
    memset(t6, 0, 32U);
    t8 = t6;
    memset(t8, (unsigned char)2, 32U);
    t10 = (0 - 31);
    t40 = (t10 * -1);
    t41 = (1U * t40);
    t9 = (t8 + t41);
    *((unsigned char *)t9) = (unsigned char)3;
    t11 = (t0 + 4408);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t18 = *((char **)t15);
    memcpy(t18, t6, 32U);
    xsi_driver_first_trans_fast(t11);
    goto LAB24;

LAB26:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t7 = (31 - 31);
    t35 = (t7 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t3 = (t5 + t37);
    t38 = *((unsigned char *)t3);
    t39 = (t38 == (unsigned char)2);
    t26 = t39;
    goto LAB28;

LAB29:    xsi_set_current_line(49, ng0);
    t6 = xsi_get_transient_memory(32U);
    memset(t6, 0, 32U);
    t8 = t6;
    memset(t8, (unsigned char)2, 32U);
    t9 = (t0 + 4408);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    t14 = (t12 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t9);
    goto LAB24;

LAB31:    t3 = (t0 + 1192U);
    t5 = *((char **)t3);
    t7 = (31 - 31);
    t35 = (t7 * -1);
    t36 = (1U * t35);
    t37 = (0 + t36);
    t3 = (t5 + t37);
    t38 = *((unsigned char *)t3);
    t39 = (t38 == (unsigned char)3);
    t26 = t39;
    goto LAB33;

}

static void work_a_4270394653_2507505537_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7040U);
    t3 = (t0 + 7226);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 31;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (31 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 4472);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 4248);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 4472);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_4270394653_2507505537_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4536);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4264);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4270394653_2507505537_init()
{
	static char *pe[] = {(void *)work_a_4270394653_2507505537_p_0,(void *)work_a_4270394653_2507505537_p_1,(void *)work_a_4270394653_2507505537_p_2,(void *)work_a_4270394653_2507505537_p_3};
	xsi_register_didat("work_a_4270394653_2507505537", "isim/ALUMIPSTb_isim_beh.exe.sim/work/a_4270394653_2507505537.didat");
	xsi_register_executes(pe);
}
