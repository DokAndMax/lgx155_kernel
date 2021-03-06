#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
//<2015/1/26-davidda, [V10][Feature][Common][BSP][]add battery parameters
#define BAT_NTC_10 0
#define BAT_NTC_47 0
#define BAT_NTC_68 1
//>2015/1/26-davidda

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#define RBAT_PULL_DOWN_R		   27000	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R	 100000	
#endif

//<2015/1/26-davidda, [V10][Feature][Common][BSP][]add battery parameters
#if (BAT_NTC_68 == 1)
#define RBAT_PULL_UP_R             61900	
#define RBAT_PULL_DOWN_R	102000
#endif
//>2015/1/26-davidda

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

//<2015/1/26-davidda, [V10][Feature][Common][BSP][]add battery parameters
#if (BAT_NTC_68 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
{ -20 ,738978  }, 
{ -19 ,694417  }, 
{ -18 ,652861  }, 
{ -17 ,614088  }, 
{ -16 ,577893  }, 
{ -15 ,547456  }, 
{ -14 ,515579  }, 
{ -13 ,485782  }, 
{ -12 ,457916  }, 
{ -11 ,431842  }, 
{ -10 ,409600  }, 
{ -9  ,386554  }, 
{ -8  ,364965  }, 
{ -7  ,344730  }, 
{ -6  ,325756  }, 
{ -5  ,309217  }, 
{ -4  ,292399  }, 
{ -3  ,276610  }, 
{ -2  ,261781  }, 
{ -1  ,247847  }, 
{ 0   ,235606  }, 
{ 1   ,223208  }, 
{ 2   ,211546  }, 
{ 3   ,200570  }, 
{ 4   ,190237  }, 
{ 5   ,180980  }, 
{ 6   ,171762  }, 
{ 7   ,163075  }, 
{ 8   ,154884  }, 
{ 9   ,147158  }, 
{ 10  ,140139  }, 
{ 11  ,133227  }, 
{ 12  ,126700  }, 
{ 13  ,120536  }, 
{ 14  ,114711  }, 
{ 15  ,109344  }, 
{ 16  ,104117  }, 
{ 17  ,99174   }, 
{ 18  ,94498   }, 
{ 19  ,90071   }, 
{ 20  ,85929   }, 
{ 21  ,81948   }, 
{ 22  ,78176   }, 
{ 23  ,74602   }, 
{ 24  ,71213   }, 
{ 25  ,68000   }, 
{ 26  ,64944   }, 
{ 27  ,62045   }, 
{ 28  ,59293   }, 
{ 29  ,56680   }, 
{ 30  ,54167   }, 
{ 31  ,51805   }, 
{ 32  ,49560   }, 
{ 33  ,47426   }, 
{ 34  ,45397   }, 
{ 35  ,43421   }, 
{ 36  ,41582   }, 
{ 37  ,39833   }, 
{ 38  ,38167   }, 
{ 39  ,36582   }, 
{ 40  ,35016   }, 
{ 41  ,33576   }, 
{ 42  ,32204   }, 
{ 43  ,30896   }, 
{ 44  ,29648   }, 
{ 45  ,28406   }, 
{ 46  ,27271   }, 
{ 47  ,26188   }, 
{ 48  ,25154   }, 
{ 49  ,24168   }, 
{ 50  ,23166   }, 
{ 51  ,22266   }, 
{ 52  ,21406   }, 
{ 53  ,20585   }, 
{ 54  ,19799   }, 
{ 55  ,18997   }, 
{ 56  ,18279   }, 
{ 57  ,17593   }, 
{ 58  ,16936   }, 
{ 59  ,16308   }, 
{ 60  ,15657   }, 
{ 61  ,15082   }, 
{ 62  ,14531   }, 
{ 63  ,14003   }, 
{ 64  ,13497   }, 
{ 65  ,12967   }
};
#endif
//>2015/1/26-davidda


//<2015/1/26-davidda, [V10][Feature][Common][BSP][]add battery parameters
// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{0  ,4298},
{3  ,4265},
{6  ,4238},
{9  ,4212},
{12 ,4187},
{15 ,4162},
{18 ,4141},
{21 ,4111},
{24 ,4073},
{27 ,4027},
{31 ,3990},
{34 ,3965},
{37 ,3945},
{40 ,3926},
{43 ,3906},
{46 ,3889},
{49 ,3874},
{52 ,3862},
{55 ,3850},
{58 ,3840},
{61 ,3831},
{64 ,3822},
{67 ,3813},
{70 ,3804},
{73 ,3796},
{76 ,3786},
{79 ,3774},
{82 ,3762},
{85 ,3750},
{87 ,3741},
{88 ,3735},
{89 ,3730},
{90 ,3726},
{90 ,3723},
{91 ,3720},
{91 ,3717},
{92 ,3716},
{92 ,3715},
{93 ,3714},
{93 ,3712},
{93 ,3712},
{94 ,3711},
{94 ,3710},
{94 ,3710},
{95 ,3709},
{95 ,3708},
{95 ,3708},
{95 ,3708},
{96 ,3707},
{96 ,3706},
{96 ,3705},
{97 ,3706},
{97 ,3706},
{97 ,3704},
{97 ,3704},
{97 ,3704},
{98 ,3703},
{98 ,3702},
{98 ,3702},
{98 ,3702},
{98 ,3701},
{99 ,3701},
{99 ,3701},
{99 ,3701},
{99 ,3701},
{99 ,3700},
{99 ,3699},
{99 ,3700},
{99 ,3699},
/* david modify 3/13
{100,3698},
{100,3697},
{100,3697},
{100,3697},
{100,3400}
*/
{100,3550},
{100,3550},
{100,3550},
{100,3550},
{100,3400}
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
  {0  ,4331},
  {2  ,4303},
  {5  ,4270},
  {7  ,4226},
  {10 ,4187},
  {12 ,4161},
  {15 ,4138},
  {17 ,4117},
  {20 ,4097},
  {22 ,4080},
  {24 ,4059},
  {27 ,4035},
  {29 ,4012},
  {32 ,3987},
  {34 ,3962},
  {37 ,3940},
  {39 ,3922},
  {42 ,3906},
  {44 ,3892},
  {46 ,3879},
  {49 ,3868},
  {51 ,3856},
  {54 ,3846},
  {56 ,3836},
  {59 ,3827},
  {61 ,3818},
  {64 ,3809},
  {66 ,3801},
  {68 ,3792},
  {71 ,3780},
  {73 ,3768},
  {76 ,3753},
  {78 ,3736},
  {81 ,3717},
  {83 ,3709},
  {86 ,3703},
  {88 ,3697},
  {90 ,3684},
  {93 ,3635},
  {95 ,3590},
  {96 ,3572},
  {96 ,3558},
  {97 ,3548},
  {97 ,3538},
  {98 ,3531},
  {98 ,3525},
  {98 ,3520},
  {98 ,3515},
  {99 ,3512},
  {99 ,3508},
  {99 ,3505},
  {99 ,3504},
  {99 ,3502},
  {99 ,3499},
  {99 ,3497},
  {99 ,3495},
  {99 ,3495},
  {99 ,3493},
  {99 ,3492},
  {100,3491},
  {100,3491},
  {100,3489},
  {100,3489},
  {100,3488},
  {100,3487},
  {100,3486},
  {100,3483},
  {100,3483},
  {100,3483},
  {100,3482},
  {100,3480},
  {100,3479},
  {100,3479},
  {100,3400}
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
	 {0  ,4333}, {2  ,4304}, {4  ,4280}, {6  ,4257}, {8  ,4234}, {11 ,4212}, {13 
 ,4191}, {15 ,4169}, {17 ,4149}, {19 ,4128}, {21 ,4109}, {23 ,4089}, {25 ,4072}, 
 {27 ,4052}, {29 ,4032}, {32 ,4012}, {34 ,3995}, {36 ,3976}, {38 ,3957}, {40 
 ,3934}, {42 ,3913}, {44 ,3896}, {46 ,3882}, {48 ,3870}, {50 ,3859}, {53 ,3848}, 
 {55 ,3839}, {57 ,3831}, {59 ,3822}, {61 ,3813}, {63 ,3806}, {65 ,3798}, {67 
 ,3791}, {69 ,3780}, {71 ,3766}, {74 ,3751}, {76 ,3732}, {78 ,3713}, {80 ,3699}, 
 {82 ,3694}, {84 ,3691}, {86 ,3687}, {88 ,3660}, {90 ,3630}, {92 ,3592}, {95 
 ,3545}, {97 ,3490}, {99 ,3437}, {100,3408}, {100,3386}, {100,3368}, {100,3353}, 
 {100,3340}, {100,3330}, {100,3321}, {100,3314}, {100,3308}, {100,3303}, 
 {100,3300}, {100,3298}, {100,3294}, {100,3292}, {100,3289}, {100,3289}, 
 {100,3287}, {100,3285}, {100,3283}, {100,3283}, {100,3280}, {100,3280}, 
 {100,3277}, {100,3278}, {100,3278},
 {100,3278}
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
 {0  ,4344},
 {2  ,4317},
 {4  ,4293},
 {6  ,4270},
 {8  ,4247},
 {10 ,4226},
 {12 ,4204},
 {15 ,4182},
 {17 ,4160},
 {19 ,4140},
 {21 ,4119},
 {23 ,4100},
 {25 ,4080},
 {27 ,4061},
 {29 ,4042},
 {31 ,4024},
 {33 ,4007},
 {35 ,3990},
 {37 ,3973},
 {40 ,3954},
 {42 ,3928},
 {44 ,3906},
 {46 ,3891},
 {48 ,3877},
 {50 ,3866},
 {52 ,3855},
 {54 ,3844},
 {56 ,3835},
 {58 ,3825},
 {60 ,3817},
 {62 ,3807},
 {65 ,3794},
 {67 ,3778},
 {69 ,3767},
 {71 ,3754},
 {73 ,3740},
 {75 ,3725},
 {77 ,3705},
 {79 ,3686},
 {81 ,3679},
 {83 ,3676},
 {85 ,3672},
 {87 ,3656},
 {89 ,3634},
 {92 ,3600},
 {94 ,3557},
 {96 ,3508},
 {98 ,3457},
 {100,3404},
 {100,3327},
 {100,3295},
 {100,3277},
 {100,3265},
 {100,3260},
 {100,3254},
 {100,3251},
 {100,3249},
 {100,3247},
 {100,3245},
 {100,3245},
 {100,3244},
 {100,3243},
 {100,3242},
 {100,3242},
 {100,3242},
 {100,3241},
 {100,3240},
 {100,3240},
 {100,3240},
 {100,3240},
 {100,3239},
 {100,3240},
 {100,3239},
 {100,3239}

};           
//>2015/1/26-davidda

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
 {0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0} 

};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
{755 ,4298},
{755 ,4265},
{778 ,4238},
{793 ,4212},
{803 ,4187},
{813 ,4162},
{878 ,4141},
{915 ,4111},
{963 ,4073},
{1040,4027},
{1163,3990},
{1185,3965},
{1208,3945},
{1200,3926},
{1205,3906},
{1213,3889},
{1235,3874},
{1220,3862},
{1253,3850},
{1265,3840},
{1265,3831},
{1270,3822},
{1295,3813},
{1305,3804},
{1338,3796},
{1360,3786},
{1365,3774},
{1403,3762},
{1375,3750},
{1355,3741},
{1338,3735},
{1325,3730},
{1315,3726},
{1310,3723},
{1300,3720},
{1295,3717},
{1293,3716},
{1288,3715},
{1288,3714},
{1280,3712},
{1280,3712},
{1280,3711},
{1275,3710},
{1278,3710},
{1275,3709},
{1273,3708},
{1270,3708},
{1270,3708},
{1268,3707},
{1268,3706},
{1265,3705},
{1268,3706},
{1268,3706},
{1260,3704},
{1263,3704},
{1260,3704},
{1263,3703},
{1255,3702},
{1258,3702},
{1258,3702},
{1253,3701},
{1255,3701},
{1255,3701},
{1255,3701},
{1258,3701},
{1258,3700},
{1248,3699},
{1253,3700},
{1253,3699},
{1248,3698},
{1245,3697},
{1245,3697},
{1248,3697},
{503 ,3400}

};     

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
{348,4331},
{348,4303},
{363,4270},
{385,4226},
{470,4187},
{505,4161},
{515,4138},
{523,4117},
{528,4097},
{550,4080},
{583,4059},
{588,4035},
{590,4012},
{575,3987},
{543,3962},
{533,3940},
{538,3922},
{548,3906},
{545,3892},
{548,3879},
{570,3868},
{560,3856},
{580,3846},
{573,3836},
{603,3827},
{610,3818},
{610,3809},
{623,3801},
{638,3792},
{648,3780},
{653,3768},
{660,3753},
{668,3736},
{680,3717},
{705,3709},
{740,3703},
{785,3697},
{865,3684},
{903,3635},
{975,3590},
{930,3572},
{895,3558},
{870,3548},
{845,3538},
{828,3531},
{818,3525},
{800,3520},
{790,3515},
{780,3512},
{773,3508},
{765,3505},
{760,3504},
{758,3502},
{753,3499},
{748,3497},
{740,3495},
{740,3495},
{738,3493},
{733,3492},
{733,3491},
{730,3491},
{725,3489},
{723,3489},
{723,3488},
{725,3487},
{723,3486},
{715,3483},
{718,3483},
{710,3483},
{710,3482},
{708,3480},
{705,3479},
{705,3479},
{510,3400}

}; 

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
{175,4333}, 
{175,4304}, 
{178,4280}, 
{183,4257}, 
{185,4234}, 
{190,4212}, 
{195,4191}, 
{198,4169}, 
{205,4149}, 
{210,4128}, 
{218,4109}, 
{220,4089}, 
{230,4072}, 
{235,4052}, 
{245,4032}, 
{243,4012}, 
{243,3995}, 
{233,3976}, 
{225,3957}, 
{205,3934}, 
{193,3913}, 
{185,3896}, 
{185,3882}, 
{188,3870}, 
{190,3859}, 
{193,3848}, 
{190,3839}, 
{193,3831}, 
{195,3822}, 
{195,3813}, 
{203,3806}, 
{203,3798}, 
{205,3791}, 
{200,3780}, 
{193,3766}, 
{188,3751}, 
{183,3732}, 
{188,3713}, 
{185,3699}, 
{188,3694}, 
{208,3691}, 
{238,3687}, 
{275,3660}, 
{348,3630}, 
{388,3592}, 
{433,3545}, 
{498,3490}, 
{595,3437}, 
{523,3408}, 
{468,3386}, 
{420,3368}, 
{385,3353}, 
{353,3340}, 
{328,3330}, 
{305,3321}, 
{290,3314}, 
{273,3308}, 
{258,3303}, 
{253,3300}, 
{245,3298}, 
{240,3294}, 
{235,3292}, 
{228,3289}, 
{223,3289}, 
{223,3287}, 
{220,3285}, 
{213,3283}, 
{210,3283}, 
{205,3280}, 
{205,3280}, 
{200,3277}, 
{195,3278}, 
{198,3278}, 
{200,3278}

}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
{103,4344},
{103,4317},
{105,4293},
{105,4270},
{105,4247},
{113,4226},
{110,4204},
{113,4182},
{113,4160},
{118,4140},
{120,4119},
{123,4100},
{125,4080},
{128,4061},
{125,4042},
{133,4024},
{138,4007},
{143,3990},
{153,3973},
{153,3954},
{130,3928},
{115,3906},
{113,3891},
{110,3877},
{115,3866},
{118,3855},
{118,3844},
{123,3835},
{125,3825},
{130,3817},
{130,3807},
{125,3794},
{115,3778},
{118,3767},
{118,3754},
{118,3740},
{120,3725},
{120,3705},
{118,3686},
{113,3679},
{120,3676},
{128,3672},
{155,3656},
{180,3634},
{190,3600},
{195,3557},
{210,3508},
{230,3457},
{255,3404},
{295,3327},
{240,3295},
{195,3277},
{168,3265},
{153,3260},
{138,3254},
{130,3251},
{125,3249},
{123,3247},
{118,3245},
{115,3245},
{113,3244},
{110,3243},
{105,3242},
{110,3242},
{105,3242},
{105,3241},
{103,3240},
{105,3240},
{103,3240},
{103,3240},
{103,3239},
{103,3240},
{100,3239},
{100,3239}

}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0},
{0,0}
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

