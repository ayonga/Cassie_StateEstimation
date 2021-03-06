/*
 * Automatically Generated from Mathematica.
 * Sun 29 Jul 2018 03:58:22 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "Jp_VectorNav_to_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static __inline__        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t8;
  double t467;
  double t709;
  double t874;
  double t1038;
  double t1083;
  double t1129;
  double t1382;
  double t1548;
  double t1562;
  double t1591;
  double t1657;
  double t1457;
  double t1487;
  double t1542;
  double t1797;
  double t1828;
  double t1829;
  double t1987;
  double t1997;
  double t2008;
  double t2016;
  double t1958;
  double t1960;
  double t1968;
  double t2208;
  double t2215;
  double t2232;
  double t2346;
  double t2365;
  double t2368;
  double t2398;
  double t2292;
  double t2316;
  double t2325;
  double t2436;
  double t2442;
  double t2457;
  double t2620;
  double t2637;
  double t2642;
  double t2667;
  double t2533;
  double t2540;
  double t2604;
  double t2702;
  double t2704;
  double t2722;
  double t503;
  double t558;
  double t597;
  double t774;
  double t820;
  double t1106;
  double t1183;
  double t1327;
  double t1410;
  double t1425;
  double t1439;
  double t1625;
  double t1658;
  double t1673;
  double t1854;
  double t1887;
  double t1922;
  double t2853;
  double t2875;
  double t2878;
  double t2891;
  double t2896;
  double t2915;
  double t2013;
  double t2034;
  double t2054;
  double t2241;
  double t2259;
  double t2267;
  double t2936;
  double t2942;
  double t2962;
  double t3007;
  double t3008;
  double t3015;
  double t2371;
  double t2416;
  double t2427;
  double t2483;
  double t2487;
  double t2502;
  double t3045;
  double t3050;
  double t3052;
  double t3064;
  double t3068;
  double t3070;
  double t2663;
  double t2669;
  double t2675;
  double t2728;
  double t2736;
  double t2740;
  double t3077;
  double t3081;
  double t3082;
  double t3106;
  double t3107;
  double t3111;
  double t3183;
  double t3187;
  double t3197;
  double t3213;
  double t3214;
  double t3223;
  double t3253;
  double t3266;
  double t3270;
  double t3273;
  double t3289;
  double t3294;
  double t3300;
  double t3304;
  double t3314;
  double t3319;
  double t3320;
  double t3328;
  double t3465;
  double t3467;
  double t3477;
  double t3492;
  double t3504;
  double t3531;
  double t3547;
  double t3556;
  double t3562;
  double t3578;
  double t3586;
  double t3596;
  double t3603;
  double t3604;
  double t3605;
  double t3642;
  double t3670;
  double t3673;
  double t3401;
  double t3405;
  double t3409;
  double t3776;
  double t3783;
  double t3784;
  double t3786;
  double t3790;
  double t3795;
  double t3804;
  double t3813;
  double t3818;
  double t3839;
  double t3843;
  double t3847;
  double t3871;
  double t3884;
  double t3890;
  double t3895;
  double t3897;
  double t3912;
  double t4091;
  double t4093;
  double t4099;
  double t4128;
  double t4129;
  double t4135;
  double t4140;
  double t4141;
  double t4143;
  double t4159;
  double t4166;
  double t4170;
  double t4182;
  double t4186;
  double t4187;
  double t4174;
  double t4175;
  double t4177;
  double t4050;
  double t4053;
  double t4058;
  double t4272;
  double t4277;
  double t4278;
  double t4293;
  double t4294;
  double t4299;
  double t4302;
  double t4335;
  double t4343;
  double t4344;
  double t4349;
  double t4356;
  double t4362;
  double t4366;
  double t4411;
  double t4426;
  double t4429;
  double t4378;
  double t4391;
  double t4392;
  double t4246;
  double t4247;
  double t4507;
  double t4508;
  double t4509;
  double t4524;
  double t4537;
  double t4543;
  double t4558;
  double t4564;
  double t4581;
  double t4582;
  double t4583;
  double t4592;
  double t4599;
  double t4600;
  double t4642;
  double t4643;
  double t4648;
  double t4603;
  double t4605;
  double t4608;
  double t4106;
  double t4137;
  double t4144;
  double t4171;
  double t4180;
  double t4193;
  double t4197;
  double t4203;
  double t4204;
  double t4223;
  double t4225;
  double t4236;
  double t4237;
  double t4241;
  double t4706;
  double t4724;
  double t4732;
  double t4737;
  double t4741;
  double t4758;
  double t4760;
  double t4772;
  double t4775;
  double t4784;
  double t4785;
  double t4794;
  double t4814;
  double t4815;
  double t4818;
  double t4800;
  double t4801;
  double t4811;
  double t4925;
  double t4927;
  double t4929;
  double t4945;
  double t4947;
  double t4965;
  double t4967;
  double t4970;
  double t4975;
  double t4977;
  double t4983;
  double t4987;
  double t4995;
  double t5070;
  double t5071;
  double t5075;
  double t5014;
  double t5020;
  double t5055;
  double t5160;
  double t5161;
  double t5166;
  double t5201;
  double t5202;
  double t5214;
  double t5215;
  double t5244;
  double t5245;
  double t5249;
  double t5233;
  double t5234;
  double t5235;
  double t5137;
  double t5153;
  double t5172;
  double t5191;
  double t5197;
  double t5325;
  double t5332;
  double t5352;
  double t5359;
  double t5361;
  double t5337;
  double t5344;
  double t5440;
  double t5453;
  double t5461;
  double t5469;
  double t5484;
  double t5492;
  double t5493;
  double t5505;
  double t5507;
  double t5513;
  double t5498;
  double t5499;
  double t5501;
  double t5559;
  double t5560;
  double t5563;
  double t5606;
  double t5611;
  double t5594;
  double t5600;
  double t5553;
  double t5554;
  double t5564;
  double t5565;
  double t5571;
  double t5666;
  double t5668;
  double t3137;
  double t5705;
  double t5706;
  double t5711;
  double t5726;
  double t5728;
  double t5714;
  double t5721;
  double t5773;
  double t5776;
  double t5778;
  double t5631;
  double t5644;
  double t5769;
  double t5770;
  double t5782;
  double t5786;
  double t5788;
  double t5672;
  double t3138;
  double t3141;
  double t5830;
  double t5832;
  double t5834;
  double t5740;
  double t5756;
  t8 = Sin(var1[7]);
  t467 = Cos(var1[8]);
  t709 = Sin(var1[8]);
  t874 = Cos(var1[9]);
  t1038 = -1.*t874;
  t1083 = 1. + t1038;
  t1129 = Sin(var1[9]);
  t1382 = Cos(var1[7]);
  t1548 = Cos(var1[10]);
  t1562 = -1.*t1548;
  t1591 = 1. + t1562;
  t1657 = Sin(var1[10]);
  t1457 = -1.*t874*t8*t709;
  t1487 = -1.*t1382*t1129;
  t1542 = t1457 + t1487;
  t1797 = -1.*t1382*t874;
  t1828 = t8*t709*t1129;
  t1829 = t1797 + t1828;
  t1987 = Cos(var1[11]);
  t1997 = -1.*t1987;
  t2008 = 1. + t1997;
  t2016 = Sin(var1[11]);
  t1958 = t1548*t1542;
  t1960 = t1829*t1657;
  t1968 = t1958 + t1960;
  t2208 = t1548*t1829;
  t2215 = -1.*t1542*t1657;
  t2232 = t2208 + t2215;
  t2346 = Cos(var1[12]);
  t2365 = -1.*t2346;
  t2368 = 1. + t2365;
  t2398 = Sin(var1[12]);
  t2292 = t1987*t1968;
  t2316 = t2232*t2016;
  t2325 = t2292 + t2316;
  t2436 = t1987*t2232;
  t2442 = -1.*t1968*t2016;
  t2457 = t2436 + t2442;
  t2620 = Cos(var1[13]);
  t2637 = -1.*t2620;
  t2642 = 1. + t2637;
  t2667 = Sin(var1[13]);
  t2533 = t2346*t2325;
  t2540 = t2457*t2398;
  t2604 = t2533 + t2540;
  t2702 = t2346*t2457;
  t2704 = -1.*t2325*t2398;
  t2722 = t2702 + t2704;
  t503 = -1.*t467;
  t558 = 1. + t503;
  t597 = -0.135*t558;
  t774 = 0.049*t709;
  t820 = 0. + t597 + t774;
  t1106 = -0.049*t1083;
  t1183 = -0.09*t1129;
  t1327 = 0. + t1106 + t1183;
  t1410 = -0.09*t1083;
  t1425 = 0.049*t1129;
  t1439 = 0. + t1410 + t1425;
  t1625 = -0.049*t1591;
  t1658 = -0.21*t1657;
  t1673 = 0. + t1625 + t1658;
  t1854 = -0.21*t1591;
  t1887 = 0.049*t1657;
  t1922 = 0. + t1854 + t1887;
  t2853 = t1382*t874*t709;
  t2875 = -1.*t8*t1129;
  t2878 = t2853 + t2875;
  t2891 = -1.*t874*t8;
  t2896 = -1.*t1382*t709*t1129;
  t2915 = t2891 + t2896;
  t2013 = -0.0016*t2008;
  t2034 = -0.2707*t2016;
  t2054 = 0. + t2013 + t2034;
  t2241 = -0.2707*t2008;
  t2259 = 0.0016*t2016;
  t2267 = 0. + t2241 + t2259;
  t2936 = t1548*t2878;
  t2942 = t2915*t1657;
  t2962 = t2936 + t2942;
  t3007 = t1548*t2915;
  t3008 = -1.*t2878*t1657;
  t3015 = t3007 + t3008;
  t2371 = 0.0184*t2368;
  t2416 = -0.7055*t2398;
  t2427 = 0. + t2371 + t2416;
  t2483 = -0.7055*t2368;
  t2487 = -0.0184*t2398;
  t2502 = 0. + t2483 + t2487;
  t3045 = t1987*t2962;
  t3050 = t3015*t2016;
  t3052 = t3045 + t3050;
  t3064 = t1987*t3015;
  t3068 = -1.*t2962*t2016;
  t3070 = t3064 + t3068;
  t2663 = -0.0216*t2642;
  t2669 = -1.1135*t2667;
  t2675 = 0. + t2663 + t2669;
  t2728 = -1.1135*t2642;
  t2736 = 0.0216*t2667;
  t2740 = 0. + t2728 + t2736;
  t3077 = t2346*t3052;
  t3081 = t3070*t2398;
  t3082 = t3077 + t3081;
  t3106 = t2346*t3070;
  t3107 = -1.*t3052*t2398;
  t3111 = t3106 + t3107;
  t3183 = -1.*t874*t1548*t709;
  t3187 = t709*t1129*t1657;
  t3197 = t3183 + t3187;
  t3213 = t1548*t709*t1129;
  t3214 = t874*t709*t1657;
  t3223 = t3213 + t3214;
  t3253 = t1987*t3197;
  t3266 = t3223*t2016;
  t3270 = t3253 + t3266;
  t3273 = t1987*t3223;
  t3289 = -1.*t3197*t2016;
  t3294 = t3273 + t3289;
  t3300 = t2346*t3270;
  t3304 = t3294*t2398;
  t3314 = t3300 + t3304;
  t3319 = t2346*t3294;
  t3320 = -1.*t3270*t2398;
  t3328 = t3319 + t3320;
  t3465 = t1382*t467*t874*t1548;
  t3467 = -1.*t1382*t467*t1129*t1657;
  t3477 = t3465 + t3467;
  t3492 = -1.*t1382*t467*t1548*t1129;
  t3504 = -1.*t1382*t467*t874*t1657;
  t3531 = t3492 + t3504;
  t3547 = t1987*t3477;
  t3556 = t3531*t2016;
  t3562 = t3547 + t3556;
  t3578 = t1987*t3531;
  t3586 = -1.*t3477*t2016;
  t3596 = t3578 + t3586;
  t3603 = t2346*t3562;
  t3604 = t3596*t2398;
  t3605 = t3603 + t3604;
  t3642 = t2346*t3596;
  t3670 = -1.*t3562*t2398;
  t3673 = t3642 + t3670;
  t3401 = 0.049*t467;
  t3405 = -0.135*t709;
  t3409 = t3401 + t3405;
  t3776 = t467*t874*t1548*t8;
  t3783 = -1.*t467*t8*t1129*t1657;
  t3784 = t3776 + t3783;
  t3786 = -1.*t467*t1548*t8*t1129;
  t3790 = -1.*t467*t874*t8*t1657;
  t3795 = t3786 + t3790;
  t3804 = t1987*t3784;
  t3813 = t3795*t2016;
  t3818 = t3804 + t3813;
  t3839 = t1987*t3795;
  t3843 = -1.*t3784*t2016;
  t3847 = t3839 + t3843;
  t3871 = t2346*t3818;
  t3884 = t3847*t2398;
  t3890 = t3871 + t3884;
  t3895 = t2346*t3847;
  t3897 = -1.*t3818*t2398;
  t3912 = t3895 + t3897;
  t4091 = -1.*t467*t1548*t1129;
  t4093 = -1.*t467*t874*t1657;
  t4099 = t4091 + t4093;
  t4128 = -1.*t467*t874*t1548;
  t4129 = t467*t1129*t1657;
  t4135 = t4128 + t4129;
  t4140 = t1987*t4099;
  t4141 = t4135*t2016;
  t4143 = t4140 + t4141;
  t4159 = t1987*t4135;
  t4166 = -1.*t4099*t2016;
  t4170 = t4159 + t4166;
  t4182 = t2346*t4170;
  t4186 = -1.*t4143*t2398;
  t4187 = t4182 + t4186;
  t4174 = t2346*t4143;
  t4175 = t4170*t2398;
  t4177 = t4174 + t4175;
  t4050 = -0.09*t874;
  t4053 = -0.049*t1129;
  t4058 = t4050 + t4053;
  t4272 = -1.*t1382*t874*t709;
  t4277 = t8*t1129;
  t4278 = t4272 + t4277;
  t4293 = t4278*t1657;
  t4294 = t3007 + t4293;
  t4299 = t1548*t4278;
  t4302 = -1.*t2915*t1657;
  t4335 = t4299 + t4302;
  t4343 = t1987*t4294;
  t4344 = t4335*t2016;
  t4349 = t4343 + t4344;
  t4356 = t1987*t4335;
  t4362 = -1.*t4294*t2016;
  t4366 = t4356 + t4362;
  t4411 = t2346*t4366;
  t4426 = -1.*t4349*t2398;
  t4429 = t4411 + t4426;
  t4378 = t2346*t4349;
  t4391 = t4366*t2398;
  t4392 = t4378 + t4391;
  t4246 = 0.049*t874;
  t4247 = t4246 + t1183;
  t4507 = t1382*t874;
  t4508 = -1.*t8*t709*t1129;
  t4509 = t4507 + t4508;
  t4524 = t1548*t4509;
  t4537 = t1542*t1657;
  t4543 = t4524 + t4537;
  t4558 = -1.*t4509*t1657;
  t4564 = t1958 + t4558;
  t4581 = t1987*t4543;
  t4582 = t4564*t2016;
  t4583 = t4581 + t4582;
  t4592 = t1987*t4564;
  t4599 = -1.*t4543*t2016;
  t4600 = t4592 + t4599;
  t4642 = t2346*t4600;
  t4643 = -1.*t4583*t2398;
  t4648 = t4642 + t4643;
  t4603 = t2346*t4583;
  t4605 = t4600*t2398;
  t4608 = t4603 + t4605;
  t4106 = t4099*t2054;
  t4137 = t4135*t2267;
  t4144 = t4143*t2427;
  t4171 = t4170*t2502;
  t4180 = t4177*t2675;
  t4193 = t4187*t2740;
  t4197 = t2620*t4187;
  t4203 = -1.*t4177*t2667;
  t4204 = t4197 + t4203;
  t4223 = -1.1312*t4204;
  t4225 = t2620*t4177;
  t4236 = t4187*t2667;
  t4237 = t4225 + t4236;
  t4241 = 0.0306*t4237;
  t4706 = 0.049*t1548;
  t4724 = t4706 + t1658;
  t4732 = -0.21*t1548;
  t4737 = -0.049*t1657;
  t4741 = t4732 + t4737;
  t4758 = -1.*t1548*t2878;
  t4760 = t4758 + t4302;
  t4772 = t4760*t2016;
  t4775 = t3064 + t4772;
  t4784 = t1987*t4760;
  t4785 = -1.*t3015*t2016;
  t4794 = t4784 + t4785;
  t4814 = t2346*t4794;
  t4815 = -1.*t4775*t2398;
  t4818 = t4814 + t4815;
  t4800 = t2346*t4775;
  t4801 = t4794*t2398;
  t4811 = t4800 + t4801;
  t4925 = t874*t8*t709;
  t4927 = t1382*t1129;
  t4929 = t4925 + t4927;
  t4945 = -1.*t4929*t1657;
  t4947 = t4524 + t4945;
  t4965 = -1.*t1548*t4929;
  t4967 = t4965 + t4558;
  t4970 = t1987*t4947;
  t4975 = t4967*t2016;
  t4977 = t4970 + t4975;
  t4983 = t1987*t4967;
  t4987 = -1.*t4947*t2016;
  t4995 = t4983 + t4987;
  t5070 = t2346*t4995;
  t5071 = -1.*t4977*t2398;
  t5075 = t5070 + t5071;
  t5014 = t2346*t4977;
  t5020 = t4995*t2398;
  t5055 = t5014 + t5020;
  t5160 = t467*t874*t1548;
  t5161 = -1.*t467*t1129*t1657;
  t5166 = t5160 + t5161;
  t5201 = -1.*t5166*t2016;
  t5202 = t4140 + t5201;
  t5214 = -1.*t1987*t5166;
  t5215 = t5214 + t4166;
  t5244 = t2346*t5215;
  t5245 = -1.*t5202*t2398;
  t5249 = t5244 + t5245;
  t5233 = t2346*t5202;
  t5234 = t5215*t2398;
  t5235 = t5233 + t5234;
  t5137 = 0.0016*t1987;
  t5153 = t5137 + t2034;
  t5172 = -0.2707*t1987;
  t5191 = -0.0016*t2016;
  t5197 = t5172 + t5191;
  t5325 = -1.*t1987*t2962;
  t5332 = t5325 + t4785;
  t5352 = t2346*t5332;
  t5359 = -1.*t3070*t2398;
  t5361 = t5352 + t5359;
  t5337 = t5332*t2398;
  t5344 = t3106 + t5337;
  t5440 = t1548*t4929;
  t5453 = t4509*t1657;
  t5461 = t5440 + t5453;
  t5469 = -1.*t5461*t2016;
  t5484 = t4970 + t5469;
  t5492 = -1.*t1987*t5461;
  t5493 = t5492 + t4987;
  t5505 = t2346*t5493;
  t5507 = -1.*t5484*t2398;
  t5513 = t5505 + t5507;
  t5498 = t2346*t5484;
  t5499 = t5493*t2398;
  t5501 = t5498 + t5499;
  t5559 = t1987*t5166;
  t5560 = t4099*t2016;
  t5563 = t5559 + t5560;
  t5606 = -1.*t2346*t5563;
  t5611 = t5606 + t5245;
  t5594 = -1.*t5563*t2398;
  t5600 = t5233 + t5594;
  t5553 = -0.0184*t2346;
  t5554 = t5553 + t2416;
  t5564 = -0.7055*t2346;
  t5565 = 0.0184*t2398;
  t5571 = t5564 + t5565;
  t5666 = -1.*t2346*t3052;
  t5668 = t5666 + t5359;
  t3137 = t2620*t3111;
  t5705 = t1987*t5461;
  t5706 = t4947*t2016;
  t5711 = t5705 + t5706;
  t5726 = -1.*t2346*t5711;
  t5728 = t5726 + t5507;
  t5714 = -1.*t5711*t2398;
  t5721 = t5498 + t5714;
  t5773 = t2346*t5563;
  t5776 = t5202*t2398;
  t5778 = t5773 + t5776;
  t5631 = -1.*t5600*t2667;
  t5644 = t2620*t5600;
  t5769 = 0.0216*t2620;
  t5770 = t5769 + t2669;
  t5782 = -1.1135*t2620;
  t5786 = -0.0216*t2667;
  t5788 = t5782 + t5786;
  t5672 = -1.*t3111*t2667;
  t3138 = -1.*t3082*t2667;
  t3141 = t3137 + t3138;
  t5830 = t2346*t5711;
  t5832 = t5484*t2398;
  t5834 = t5830 + t5832;
  t5740 = -1.*t5721*t2667;
  t5756 = t2620*t5721;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=-1.*t1382*t1439 + t1542*t1673 + t1829*t1922 + t1968*t2054 + t2232*t2267 + t2325*t2427 + t2457*t2502 + t2604*t2675 - 1.1312*(-1.*t2604*t2667 + t2620*t2722) + 0.0306*(t2604*t2620 + t2667*t2722) + t2722*t2740 - 0.135*t8 + 0.1305*t467*t8 - 1.*t1327*t709*t8 - 1.*t8*t820;
  p_output1[23]=0.135*t1382 + t1673*t2878 + t1922*t2915 + t2054*t2962 + t2267*t3015 + t2427*t3052 + t2502*t3070 + t2675*t3082 + t2740*t3111 + 0.0306*(t2620*t3082 + t2667*t3111) - 1.1312*t3141 - 0.1305*t1382*t467 + t1327*t1382*t709 - 1.*t1439*t8 + t1382*t820;
  p_output1[24]=t2054*t3197 + t2267*t3223 + t2427*t3270 + t2502*t3294 + t2675*t3314 + t2740*t3328 - 1.1312*(-1.*t2667*t3314 + t2620*t3328) + 0.0306*(t2620*t3314 + t2667*t3328) - 0.004500000000000004*t467 - 0.049*t709 - 1.*t1327*t709 + t1129*t1922*t709 - 1.*t1673*t709*t874;
  p_output1[25]=t1382*t3409 + t2054*t3477 + t2267*t3531 + t2427*t3562 + t2502*t3596 + t2675*t3605 + t2740*t3673 - 1.1312*(-1.*t2667*t3605 + t2620*t3673) + 0.0306*(t2620*t3605 + t2667*t3673) + t1327*t1382*t467 - 1.*t1129*t1382*t1922*t467 + 0.1305*t1382*t709 + t1382*t1673*t467*t874;
  p_output1[26]=t2054*t3784 + t2267*t3795 + t2427*t3818 + t2502*t3847 + t2675*t3890 + t2740*t3912 - 1.1312*(-1.*t2667*t3890 + t2620*t3912) + 0.0306*(t2620*t3890 + t2667*t3912) + t3409*t8 + t1327*t467*t8 - 1.*t1129*t1922*t467*t8 + 0.1305*t709*t8 + t1673*t467*t8*t874;
  p_output1[27]=t4106 + t4137 + t4144 + t4171 + t4180 + t4193 + t4223 + t4241 - 1.*t1129*t1673*t467 + t4058*t467 - 1.*t1922*t467*t874;
  p_output1[28]=t1673*t2915 + t1922*t4278 + t2054*t4294 + t2267*t4335 + t2427*t4349 + t2502*t4366 + t2675*t4392 + t2740*t4429 - 1.1312*(-1.*t2667*t4392 + t2620*t4429) + 0.0306*(t2620*t4392 + t2667*t4429) + t1382*t4058*t709 - 1.*t4247*t8;
  p_output1[29]=t1542*t1922 + t1382*t4247 + t1673*t4509 + t2054*t4543 + t2267*t4564 + t2427*t4583 + t2502*t4600 + t2675*t4608 + t2740*t4648 - 1.1312*(-1.*t2667*t4608 + t2620*t4648) + 0.0306*(t2620*t4608 + t2667*t4648) + t4058*t709*t8;
  p_output1[30]=t4106 + t4137 + t4144 + t4171 + t4180 + t4193 + t4223 + t4241 - 1.*t1129*t467*t4724 + t467*t4741*t874;
  p_output1[31]=t2054*t3015 + t2915*t4724 + t2878*t4741 + t2267*t4760 + t2427*t4775 + t2502*t4794 + t2675*t4811 + t2740*t4818 - 1.1312*(-1.*t2667*t4811 + t2620*t4818) + 0.0306*(t2620*t4811 + t2667*t4818);
  p_output1[32]=t4509*t4724 + t4741*t4929 + t2054*t4947 + t2267*t4967 + t2427*t4977 + t2502*t4995 + t2675*t5055 + t2740*t5075 - 1.1312*(-1.*t2667*t5055 + t2620*t5075) + 0.0306*(t2620*t5055 + t2667*t5075);
  p_output1[33]=t4099*t5153 + t5166*t5197 + t2427*t5202 + t2502*t5215 + t2675*t5235 + t2740*t5249 - 1.1312*(-1.*t2667*t5235 + t2620*t5249) + 0.0306*(t2620*t5235 + t2667*t5249);
  p_output1[34]=t2427*t3070 + t3015*t5153 + t2962*t5197 + t2502*t5332 + t2675*t5344 + t2740*t5361 - 1.1312*(-1.*t2667*t5344 + t2620*t5361) + 0.0306*(t2620*t5344 + t2667*t5361);
  p_output1[35]=t4947*t5153 + t5197*t5461 + t2427*t5484 + t2502*t5493 + t2675*t5501 + t2740*t5513 - 1.1312*(-1.*t2667*t5501 + t2620*t5513) + 0.0306*(t2620*t5501 + t2667*t5513);
  p_output1[36]=t5202*t5554 + t5563*t5571 + t2675*t5600 + t2740*t5611 - 1.1312*(t2620*t5611 + t5631) + 0.0306*(t2667*t5611 + t5644);
  p_output1[37]=t2675*t3111 + t3070*t5554 + t3052*t5571 + t2740*t5668 + 0.0306*(t3137 + t2667*t5668) - 1.1312*(t2620*t5668 + t5672);
  p_output1[38]=t5484*t5554 + t5571*t5711 + t2675*t5721 + t2740*t5728 - 1.1312*(t2620*t5728 + t5740) + 0.0306*(t2667*t5728 + t5756);
  p_output1[39]=t5600*t5770 - 1.1312*(t5631 - 1.*t2620*t5778) + 0.0306*(t5644 - 1.*t2667*t5778) + t5778*t5788;
  p_output1[40]=0.0306*t3141 - 1.1312*(-1.*t2620*t3082 + t5672) + t3111*t5770 + t3082*t5788;
  p_output1[41]=t5721*t5770 + t5788*t5834 - 1.1312*(t5740 - 1.*t2620*t5834) + 0.0306*(t5756 - 1.*t2667*t5834);
}



void Jp_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  /* Call Subroutines */
  output1(p_output1, var1);

}
