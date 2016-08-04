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

/* This file is designed for use with ISim build 0x2f00eba5 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/skopro2/counter.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0138754619_3212880686_p_0(char *t0)
{
    char t16[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    int t17;
    unsigned int t18;
    unsigned int t19;
    char *t21;
    char *t22;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;

LAB0:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t11 = *((unsigned char *)t2);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 1860);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(23, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t5 = t1;
    memset(t5, (unsigned char)2, 5U);
    t6 = (t0 + 1904);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(24, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t2 = t1;
    memset(t2, (unsigned char)2, 5U);
    t5 = (t0 + 1108U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 5U);
    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t5 = (t0 + 1108U);
    t7 = *((char **)t5);
    t5 = (t0 + 3008U);
    t8 = xsi_get_transient_memory(5U);
    memset(t8, 0, 5U);
    t9 = t8;
    t17 = (0 - 4);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t10 = (t9 + t19);
    *((unsigned char *)t10) = (unsigned char)3;
    t21 = (t20 + 0U);
    t22 = (t21 + 0U);
    *((int *)t22) = 0;
    t22 = (t21 + 4U);
    *((int *)t22) = 0;
    t22 = (t21 + 8U);
    *((int *)t22) = 1;
    t23 = (0 - 0);
    t24 = (t23 * 1);
    t24 = (t24 + 1);
    t22 = (t21 + 12U);
    *((unsigned int *)t22) = t24;
    t22 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t16, t7, t5, t8, t20);
    t25 = (t0 + 1108U);
    t26 = *((char **)t25);
    t25 = (t26 + 0);
    t27 = (t16 + 12U);
    t24 = *((unsigned int *)t27);
    t28 = (1U * t24);
    memcpy(t25, t22, t28);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1108U);
    t2 = *((char **)t1);
    t1 = (t0 + 1904);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB7:    t5 = (t0 + 868U);
    t6 = *((char **)t5);
    t14 = *((unsigned char *)t6);
    t15 = (t14 == (unsigned char)3);
    t3 = t15;
    goto LAB9;

LAB10:    t1 = (t0 + 660U);
    t13 = xsi_signal_has_event(t1);
    t4 = t13;
    goto LAB12;

}


extern void work_a_0138754619_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0138754619_3212880686_p_0};
	xsi_register_didat("work_a_0138754619_3212880686", "isim/main_isim_beh.exe.sim/work/a_0138754619_3212880686.didat");
	xsi_register_executes(pe);
}
