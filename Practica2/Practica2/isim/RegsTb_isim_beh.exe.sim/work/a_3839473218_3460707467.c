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
static const char *ng0 = "C:/Users/javix/Documents/Practicas EC/PracticasEstructuras/Practica2/Practica2/Regs.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_3839473218_3460707467_p_0(char *t0)
{
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 3720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 7740);
    *((int *)t1) = 0;
    t5 = (t0 + 7744);
    *((int *)t5) = 31;
    t6 = 0;
    t7 = 31;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(56, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    memset(t9, (unsigned char)2, 32U);
    t10 = (t0 + 7740);
    t11 = *((int *)t10);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    t14 = (32U * t13);
    t15 = (0U + t14);
    t16 = (t0 + 3816);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_delta(t16, t15, 32U, 0LL);

LAB7:    t1 = (t0 + 7740);
    t6 = *((int *)t1);
    t2 = (t0 + 7744);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 7740);
    *((int *)t5) = t6;
    goto LAB5;

LAB10:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t2 = (t0 + 6584U);
    t8 = (t0 + 7748);
    t10 = (t21 + 0U);
    t16 = (t10 + 0U);
    *((int *)t16) = 0;
    t16 = (t10 + 4U);
    *((int *)t16) = 4;
    t16 = (t10 + 8U);
    *((int *)t16) = 1;
    t6 = (4 - 0);
    t13 = (t6 * 1);
    t13 = (t13 + 1);
    t16 = (t10 + 12U);
    *((unsigned int *)t16) = t13;
    t4 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t5, t2, t8, t21);
    if (t4 != 0)
        goto LAB12;

LAB14:
LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(61, ng0);
    t16 = (t0 + 1352U);
    t17 = *((char **)t16);
    t16 = (t0 + 1512U);
    t18 = *((char **)t16);
    t16 = (t0 + 6584U);
    t7 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t18, t16);
    t11 = (t7 - 0);
    t13 = (t11 * 1);
    t14 = (32U * t13);
    t15 = (0U + t14);
    t19 = (t0 + 3816);
    t20 = (t19 + 56U);
    t22 = *((char **)t20);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t17, 32U);
    xsi_driver_first_trans_delta(t19, t15, 32U, 0LL);
    goto LAB13;

}

static void work_a_3839473218_3460707467_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(69, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 6600U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 0);
    t6 = (t5 * 1);
    xsi_vhdl_check_range_of_index(0, 31, 1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3880);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3736);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3839473218_3460707467_init()
{
	static char *pe[] = {(void *)work_a_3839473218_3460707467_p_0,(void *)work_a_3839473218_3460707467_p_1};
	xsi_register_didat("work_a_3839473218_3460707467", "isim/RegsTb_isim_beh.exe.sim/work/a_3839473218_3460707467.didat");
	xsi_register_executes(pe);
}
