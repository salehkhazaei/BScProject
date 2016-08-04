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
static const char *ng0 = "E:/skopro2/memory.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_1077320103_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned char t29;
    char *t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 844U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 1952);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t4 = (t0 + 960U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3336);
    *((int *)t2) = 3;
    t4 = (t0 + 3340);
    *((int *)t4) = 0;
    t12 = 3;
    t13 = 0;

LAB16:    if (t12 >= t13)
        goto LAB17;

LAB19:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 3328);
    *((int *)t4) = 3;
    t11 = (t0 + 3332);
    *((int *)t11) = 0;
    t12 = 3;
    t13 = 0;

LAB11:    if (t12 >= t13)
        goto LAB12;

LAB14:    goto LAB9;

LAB12:    xsi_set_current_line(28, ng0);
    t14 = (t0 + 1200U);
    t15 = *((char **)t14);
    t14 = (t0 + 592U);
    t16 = *((char **)t14);
    t14 = (t0 + 3160U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t16, t14);
    t18 = (t17 - 0);
    t19 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t17);
    t20 = (t19 * 4U);
    t21 = (t0 + 3328);
    t22 = *((int *)t21);
    t23 = (t22 - 3);
    t24 = (t23 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t21));
    t25 = (t20 + t24);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t28 = (t15 + t27);
    t29 = *((unsigned char *)t28);
    t30 = (t0 + 3328);
    t31 = *((int *)t30);
    t32 = (t31 - 3);
    t33 = (t32 * -1);
    t34 = (1 * t33);
    t35 = (0U + t34);
    t36 = (t0 + 1996);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 40U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t29;
    xsi_driver_first_trans_delta(t36, t35, 1, 0LL);

LAB13:    t2 = (t0 + 3328);
    t12 = *((int *)t2);
    t4 = (t0 + 3332);
    t13 = *((int *)t4);
    if (t12 == t13)
        goto LAB14;

LAB15:    t17 = (t12 + -1);
    t12 = t17;
    t5 = (t0 + 3328);
    *((int *)t5) = t12;
    goto LAB11;

LAB17:    xsi_set_current_line(32, ng0);
    t5 = (t0 + 684U);
    t8 = *((char **)t5);
    t5 = (t0 + 3336);
    t17 = *((int *)t5);
    t18 = (t17 - 3);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t24 = (0 + t20);
    t11 = (t8 + t24);
    t1 = *((unsigned char *)t11);
    t14 = (t0 + 1200U);
    t15 = *((char **)t14);
    t14 = (t0 + 592U);
    t16 = *((char **)t14);
    t14 = (t0 + 3160U);
    t22 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t16, t14);
    t23 = (t22 - 0);
    t25 = (t23 * 1);
    xsi_vhdl_check_range_of_index(0, 15, 1, t22);
    t26 = (t25 * 4U);
    t21 = (t0 + 3336);
    t31 = *((int *)t21);
    t32 = (t31 - 3);
    t27 = (t32 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t21));
    t33 = (t26 + t27);
    t34 = (1U * t33);
    t35 = (0 + t34);
    t28 = (t15 + t35);
    *((unsigned char *)t28) = t1;

LAB18:    t2 = (t0 + 3336);
    t12 = *((int *)t2);
    t4 = (t0 + 3340);
    t13 = *((int *)t4);
    if (t12 == t13)
        goto LAB19;

LAB20:    t17 = (t12 + -1);
    t12 = t17;
    t5 = (t0 + 3336);
    *((int *)t5) = t12;
    goto LAB16;

}


extern void work_a_1077320103_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1077320103_3212880686_p_0};
	xsi_register_didat("work_a_1077320103_3212880686", "isim/main_isim_beh.exe.sim/work/a_1077320103_3212880686.didat");
	xsi_register_executes(pe);
}
