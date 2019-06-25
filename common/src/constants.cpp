#include "constants.h"

namespace motor_driver {

const uint16_t led_gamma_table[] = {
      0,     0,     0,     0,     0,     1,     1,     2,
      3,     5,     6,     8,    10,    13,    16,    19,
     23,    27,    31,    37,    42,    48,    55,    62,
     70,    79,    88,    98,   108,   119,   131,   144,
    157,   171,   186,   202,   219,   236,   254,   273,
    294,   315,   336,   359,   383,   408,   434,   461,
    489,   518,   548,   579,   612,   645,   680,   716,
    753,   791,   831,   871,   913,   957,  1001,  1047,
   1094,  1143,  1193,  1244,  1297,  1351,  1406,  1463,
   1522,  1582,  1643,  1706,  1771,  1837,  1904,  1973,
   2044,  2116,  2190,  2266,  2343,  2422,  2503,  2585,
   2669,  2755,  2843,  2932,  3023,  3116,  3211,  3307,
   3406,  3506,  3608,  3712,  3818,  3926,  4036,  4148,
   4261,  4377,  4495,  4614,  4736,  4860,  4986,  5114,
   5244,  5376,  5510,  5647,  5785,  5926,  6069,  6214,
   6361,  6511,  6663,  6817,  6973,  7132,  7293,  7456,
   7621,  7789,  7960,  8132,  8307,  8485,  8664,  8847,
   9031,  9219,  9408,  9600,  9795,  9992, 10192, 10394,
  10599, 10806, 11016, 11229, 11444, 11662, 11882, 12105,
  12331, 12560, 12791, 13025, 13262, 13501, 13743, 13988,
  14236, 14486, 14740, 14996, 15255, 15517, 15782, 16049,
  16320, 16593, 16870, 17149, 17431, 17716, 18005, 18296,
  18590, 18887, 19188, 19491, 19797, 20107, 20420, 20735,
  21054, 21376, 21701, 22029, 22361, 22696, 23033, 23374,
  23719, 24066, 24417, 24771, 25128, 25489, 25853, 26220,
  26591, 26965, 27342, 27723, 28107, 28494, 28885, 29280,
  29677, 30079, 30483, 30891, 31303, 31718, 32137, 32559,
  32985, 33414, 33847, 34284, 34724, 35168, 35615, 36066,
  36521, 36979, 37441, 37907, 38376, 38850, 39326, 39807,
  40291, 40780, 41272, 41767, 42267, 42770, 43278, 43789,
  44304, 44822, 45345, 45872, 46402, 46937, 47475, 48017,
  48564, 49114, 49668, 50227, 50789, 51355, 51926, 52500,
};

/* const void *nvparams_start = reinterpret_cast<void *>(0x08004000); */
const uint8_t *board_id_ptr = reinterpret_cast<const uint8_t *>(0x08004000);
const void *calibration_ptr = reinterpret_cast<const void    *>(0x08008000);
const void *firmware_ptr    = reinterpret_cast<const void    *>(0x08010000);

} // namespace motor_driver
