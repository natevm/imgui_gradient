#pragma once
#include <cstdint>

namespace EmbeddedColorMaps
{

const char* names[]
{
    "Paraview cool and warm",
    "Rainbow",
    "Matplotlib plasma",
    "Matplotlib virdis",
    "Samsel linear green",
    "Samsel linear ygb 1211g",
    "Cool and warm extended",
    "Blackbody",
    "Jet",
    "Blue and Gold",
    "Ice and fire",
    "Nic edge"
};

uint8_t paraview_cool_warm[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x7a,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0xb4,0xf6,0x39,0xf0,0x9f,0x91,0x89,0x89,0x81,0x91,0x89,0x91,0x81,0x99,0x99,0x99,0x1,0xc4,0x66,0x2,0xd3,0x8,0x3e,0x48,0xe,0x24,0xc6,0x4,0x54,0x83,0x90,0x63,0x62,0x40,0xe8,0x43,0xd6,0xf,0xd2,0x7,0xe4,0x33,0x32,0x42,0xcd,0x64,0x42,0xd0,0x8c,0xc,0x40,0x3b,0x20,0x7c,0x46,0x46,0x90,0x3a,0x98,0x1a,0x20,0xd,0xe5,0x83,0xec,0x60,0x4,0xab,0x43,0x88,0x21,0xf8,0xc,0xc,0x40,0x27,0x30,0x30,0x31,0x33,0x82,0x69,0xa0,0x33,0x19,0xc0,0xe6,0x30,0x31,0x30,0x80,0xd4,0x40,0xe4,0xa0,0x6a,0x98,0x60,0xf4,0x7f,0xb0,0x5a,0xb0,0x19,0x60,0x75,0xff,0x19,0x80,0xda,0x81,0xea,0x81,0x34,0x94,0xf,0x96,0x63,0xfc,0xcf,0xc0,0xc0,0xf0,0xf,0x28,0xf7,0x9f,0x1,0xc2,0xff,0x7,0xa6,0x19,0x19,0xff,0x43,0xc4,0x18,0x80,0xe2,0xc,0x7f,0x11,0x72,0x20,0x3e,0x23,0xc8,0xec,0x7f,0xc,0x4c,0xc,0x10,0x9a,0x11,0x44,0x33,0xfc,0x3,0x9b,0xd,0x67,0x83,0xe5,0x80,0xfa,0xfe,0x3,0xd5,0xfc,0x7,0xd2,0xc,0x50,0xfa,0x3f,0x50,0x1d,0x88,0xfd,0xf,0x2a,0x6,0xa6,0x81,0x62,0xff,0x20,0x6a,0x19,0x19,0x60,0x6c,0xa0,0xdf,0xfe,0xfd,0x61,0x0,0x99,0xc7,0x8,0x94,0x63,0x0,0xe9,0x3,0x9a,0x5,0x67,0x83,0xc4,0xfe,0x41,0xd4,0x32,0x0,0xcd,0x3,0xcb,0x43,0xc5,0x18,0xc0,0xea,0x81,0xfe,0xfa,0xfb,0x7,0x28,0x5,0xa4,0x81,0xea,0xc0,0x62,0xff,0x40,0x6c,0xa0,0x18,0x88,0xfe,0xfb,0x97,0xe1,0x3f,0xd0,0x4c,0x86,0x7f,0x10,0x75,0xff,0xff,0x83,0x68,0xa0,0x18,0x48,0x2d,0x48,0xe,0x24,0xe,0x94,0xff,0xff,0x7,0xa4,0xee,0x3f,0x3,0x88,0x6,0xd9,0xf1,0xf,0xc8,0x7,0x6a,0x4,0x32,0xff,0x81,0xc5,0xfe,0x3,0xd5,0xfd,0xff,0xb,0xd1,0x7,0x92,0x3,0xf3,0x51,0xc4,0xfe,0x41,0xd4,0xfe,0xfd,0xf,0xa1,0x81,0x72,0x20,0x75,0xff,0x80,0x7c,0x98,0xfa,0x7f,0x7f,0x80,0x6a,0xfe,0x82,0xd4,0xfd,0x67,0x0,0xb1,0xff,0x1,0xd9,0xff,0x7e,0xff,0x63,0xf8,0x7,0x52,0xfb,0xfb,0x2f,0x3,0x48,0xed,0x7f,0xa0,0xfa,0xbf,0xbf,0x40,0xea,0xfe,0x33,0xfc,0xfd,0x9,0x14,0xfb,0x3,0xa4,0xbf,0x3,0xf9,0xbf,0x80,0x7a,0x7e,0xfe,0x67,0x0,0x0,0x27,0xf7,0xf2,0xdf,0xa6,0x6f,0xf8,0x80,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t rainbow[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x0,0x46,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x64,0x60,0xf8,0xff,0x9f,0x81,0x85,0x81,0x1,0x8c,0x39,0x70,0xd0,0x20,0xf9,0xc1,0x24,0xc7,0xfe,0x1f,0xe8,0xd0,0x3f,0x40,0xfc,0x3,0x8d,0xc6,0x26,0x6,0x53,0x33,0xb0,0x72,0x4c,0xc,0xff,0x18,0xd0,0x83,0x70,0xb0,0x5,0x2b,0xba,0xfb,0x18,0x7f,0x42,0x83,0x77,0xf0,0x6,0x2b,0x3,0x3,0xb2,0xdb,0xfe,0x30,0x30,0x0,0x0,0x85,0x9e,0x5d,0x0,0x63,0x5b,0x7,0x6f,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t matplotlib_plasma[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x46,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0xe4,0xe5,0x68,0xff,0xcf,0xfc,0x9f,0x91,0x81,0x99,0x81,0x91,0x81,0xed,0x3f,0x33,0x3,0x13,0x90,0x66,0x5,0x92,0x20,0x9a,0x5,0x28,0xe,0xa2,0xc1,0x6c,0xb0,0xc,0x23,0x3,0xb,0x50,0x9e,0x9,0xac,0x9e,0x9,0x28,0xc2,0x0,0x16,0x5,0xe9,0x5,0xa9,0x61,0x86,0xaa,0x87,0xf1,0x19,0xff,0x33,0x80,0xd5,0x33,0x32,0x40,0xf4,0x81,0xf8,0x10,0x39,0x6,0x6,0x88,0x18,0x90,0x6,0x9b,0xc5,0x0,0x36,0xb,0x21,0xc7,0x0,0x74,0xf,0x54,0x8c,0x11,0xa4,0x16,0xca,0x87,0xb1,0x81,0x34,0x13,0x10,0x33,0x3,0xd,0x64,0x44,0xa2,0x99,0x80,0x7c,0x66,0x26,0xa0,0x7a,0x30,0xfd,0x9f,0x1,0x2c,0xc7,0xf4,0x8f,0x81,0x11,0x28,0x6,0x92,0x63,0x62,0xfa,0xcf,0x80,0x42,0x33,0xff,0x3,0xab,0x81,0x88,0x81,0xd8,0xff,0x19,0x98,0x61,0xea,0x81,0x34,0x13,0xd8,0x7c,0xa0,0x1e,0xb0,0x18,0x94,0x86,0x9b,0xd,0x32,0x1f,0x28,0xc6,0xc,0xd1,0xc7,0xc4,0x84,0x44,0x33,0x41,0xe5,0xe0,0x62,0x10,0x3e,0x23,0x9a,0x5a,0x46,0x46,0x90,0x7e,0xa8,0x1c,0x4c,0x2d,0xd4,0x4d,0xc,0x8c,0x8,0xfb,0x10,0xfa,0x20,0x6a,0xc1,0x72,0x50,0xb3,0x18,0x41,0x76,0x81,0x31,0xc4,0x7e,0x6,0xa8,0x99,0x30,0x35,0x10,0x73,0x80,0x11,0xc1,0x84,0xb0,0x87,0x1,0x14,0xe,0x4c,0x50,0x31,0xa8,0xdf,0x40,0xea,0x18,0x61,0x76,0xc3,0xcc,0x6,0xd2,0x20,0x71,0x50,0xe4,0x30,0x2,0xd5,0x81,0xf4,0x31,0x42,0xc5,0x18,0x99,0xff,0x33,0x40,0xe4,0x80,0xe6,0x82,0xc5,0x18,0x80,0x91,0xf4,0x8f,0x1,0xa4,0x86,0x1,0x2a,0x7,0x72,0x1b,0x8c,0xd,0xa6,0x81,0x76,0xfe,0x67,0x86,0xd8,0xb,0x4c,0x0,0xc0,0xc4,0xf1,0x1f,0x1c,0xb9,0x10,0x31,0x6,0x6,0x18,0xd,0xb2,0xf,0x98,0x14,0x19,0xfe,0x33,0x81,0xc4,0x18,0x19,0x10,0x7c,0x18,0x9b,0x11,0x2a,0xc7,0x0,0xa5,0xff,0x1,0x69,0x90,0xb9,0xff,0x18,0x0,0x7d,0x4c,0x83,0xc,0xa1,0x33,0x9a,0x48,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t matplotlib_virdis[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x42,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x74,0x61,0xc,0xf9,0xcf,0xc0,0xc8,0x4,0x44,0x8c,0xc,0x8c,0xcc,0xcc,0xc,0x20,0x36,0x3,0x33,0x88,0xcf,0xc4,0xc0,0x0,0xe6,0x33,0x32,0x30,0x30,0xc1,0xe4,0x18,0x91,0xc4,0x98,0xc0,0xe2,0xc,0x8c,0x98,0x62,0xff,0x99,0x40,0x72,0xc,0xc,0x60,0x39,0x20,0xfb,0x3f,0x58,0xd,0x23,0x98,0xff,0x9f,0x19,0x4a,0x33,0x42,0xcc,0xfd,0xf,0x54,0xfa,0x9f,0x9,0x2a,0x6,0xa2,0x41,0x7c,0xa0,0x1c,0x48,0x9c,0x1,0x46,0x3,0xc5,0xc1,0xea,0x18,0x21,0x66,0xc2,0xd8,0x10,0x7d,0xc,0xc,0xff,0x81,0xce,0xfe,0x8f,0x21,0x7,0x52,0xb,0x94,0x83,0x9a,0xc7,0xc0,0x8,0x61,0xc3,0xe8,0xff,0x48,0x7c,0xb8,0x18,0x50,0xb,0x3,0x58,0x3d,0x42,0x2d,0x36,0x7d,0x30,0x35,0x60,0x39,0x46,0x84,0x3d,0x8,0xb5,0xff,0x19,0xc0,0xee,0x81,0x9a,0x5,0x52,0xcf,0xc0,0x8,0x15,0x3,0xdb,0xfb,0x9f,0x81,0x1,0xaa,0x8f,0x81,0x9,0xca,0x66,0x82,0xc8,0x33,0x32,0x21,0xc9,0x1,0xf5,0x30,0x82,0x30,0x54,0xc,0x24,0x7,0xe6,0x83,0x82,0xb,0x28,0x6,0x62,0x33,0x41,0xd5,0x30,0x43,0xf9,0x20,0x31,0x18,0x9b,0x19,0x28,0x7,0x92,0x67,0x66,0xfa,0xc7,0x0,0x53,0xcb,0xcc,0xf8,0x8f,0x1,0x24,0xc6,0xc2,0x4,0xa5,0xa1,0x7c,0xb0,0x18,0x5c,0xee,0x2f,0xd0,0xc9,0xff,0x19,0x58,0x98,0xfe,0x32,0x80,0xcd,0x60,0x80,0xb2,0x19,0x10,0x62,0x2c,0x8c,0x40,0x39,0x6,0x88,0x19,0xac,0x20,0x36,0x50,0x2f,0x88,0x66,0x82,0xd2,0xcc,0x50,0x39,0x36,0xc6,0x3f,0x60,0xb3,0x58,0x81,0x34,0xc8,0x2c,0x30,0xd,0x94,0x43,0x66,0x83,0xf5,0x3,0xcd,0x86,0xc8,0xfd,0x7,0xbb,0x8f,0x8d,0xe1,0x2f,0x94,0x6,0xd9,0xc1,0xc0,0xc0,0xa,0x94,0x7,0x25,0x1d,0x66,0x60,0xc0,0xb1,0x2,0xd3,0x5,0x13,0x88,0x6,0x9a,0xcc,0xc,0x64,0xb3,0x30,0x30,0x3,0xdd,0xc9,0xc4,0x0,0x82,0x0,0xde,0x27,0x74,0xa,0xeb,0xc6,0xf6,0xcc,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t samsel_linear_green[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x52,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0xe4,0x93,0x91,0xff,0xcf,0xc0,0xc8,0xc8,0xc0,0xc8,0x4,0xc2,0xcc,0xc,0x60,0x36,0x33,0x13,0x94,0x86,0xf2,0x81,0xf2,0xc,0x4c,0x4c,0x60,0x35,0xc,0x40,0x75,0x8,0x35,0xc,0x10,0x75,0x4c,0x10,0xf5,0x70,0x39,0xb0,0x1a,0x88,0x1c,0xaa,0x18,0x23,0x92,0x19,0x40,0xad,0xcc,0x8c,0xc,0xc,0x4c,0x30,0x31,0x28,0x1f,0x64,0x17,0x50,0x98,0x81,0x9,0xa4,0x1f,0x88,0xa1,0x46,0xc3,0xf9,0x28,0x72,0xff,0x81,0x9a,0x90,0xd4,0x80,0xe5,0x10,0x62,0xc,0x8c,0x40,0x36,0x13,0x94,0xcf,0x0,0x63,0x83,0xf8,0x50,0x31,0xc6,0x7f,0x10,0xfd,0x20,0x75,0x60,0xf6,0x7f,0x86,0xff,0x20,0x36,0x4c,0x2d,0x3,0x4c,0x2d,0x48,0x1d,0x88,0xd,0xa4,0x19,0x40,0x6a,0xa0,0x7c,0xb0,0x3a,0xa8,0x18,0xd3,0x5f,0xa0,0xde,0x7f,0x60,0xcc,0xc0,0xf8,0xf,0x6c,0xce,0x7f,0xc6,0xbf,0x10,0x1a,0x28,0xc7,0x0,0x54,0xcb,0xc8,0xf4,0x8f,0x1,0xec,0x3d,0x26,0x50,0x90,0x3,0xcd,0x3,0x8b,0x41,0xd8,0x8c,0x40,0x31,0x50,0xb0,0xb1,0x0,0xc3,0x12,0x44,0x3,0x43,0x9b,0x81,0x5,0xc8,0x60,0x2,0x6a,0x40,0xa7,0xc1,0xea,0x18,0x99,0x18,0x40,0xc1,0x87,0x22,0xc7,0xc0,0xc8,0x0,0x52,0xcf,0xa,0xd5,0xc7,0xa,0x54,0x3,0xd1,0xf,0x54,0xb,0x97,0x63,0x82,0xa8,0x1,0xcb,0x31,0x31,0xb0,0x32,0x31,0x33,0x30,0x33,0x40,0xc5,0xa0,0x6c,0x90,0x18,0x13,0x50,0x1e,0xa6,0x1f,0x62,0x26,0x50,0xd,0xd0,0xc,0x16,0xa0,0x1a,0x30,0x1f,0x6a,0x36,0x44,0x1d,0xb,0x3,0x98,0x66,0x62,0x1,0x99,0x4,0x34,0x93,0x5,0xe8,0x36,0x26,0x88,0x18,0x23,0x2b,0x98,0x66,0x61,0x62,0x3,0xd2,0xcc,0xc,0x2c,0x60,0x3e,0x33,0x84,0xcd,0xc4,0xa,0x17,0x63,0x64,0x4,0xba,0x83,0x91,0xd,0xac,0x1f,0xce,0x6,0xfb,0x91,0xd,0x68,0x2b,0x50,0xe,0xa8,0x9f,0x81,0x81,0x15,0x18,0x7e,0x20,0x3d,0x9c,0x60,0x9a,0x91,0x11,0x44,0xb3,0x0,0xd3,0x14,0x17,0xc8,0x65,0x60,0x31,0x0,0xc1,0xab,0x36,0xe1,0x4f,0x36,0x22,0x68,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t samsel_linear_ygb_1211g[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x73,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0xfc,0xff,0xe7,0xfb,0x7f,0x86,0x7f,0xbf,0x19,0x18,0xfe,0xfd,0x61,0x60,0xf8,0xfb,0x9d,0x1,0xc4,0xfe,0xf7,0xf7,0x17,0xc3,0x7f,0x20,0xff,0xdf,0xdf,0x9f,0xc,0xff,0xff,0xff,0x5,0xb2,0x81,0xf8,0x3f,0x50,0x8c,0xe1,0x2f,0x3,0xc3,0xff,0xdf,0xc,0xff,0x81,0xf4,0x7f,0x6,0xa0,0x1e,0x86,0x7f,0xc,0xc,0x20,0x36,0x4c,0xec,0xff,0x1f,0xa0,0x1c,0xd0,0x38,0x30,0xfd,0xf,0xa8,0xf7,0x1f,0x50,0xc5,0x5f,0x8,0xd,0x15,0xfb,0x7,0x32,0xf,0xa2,0x8a,0x1,0xcc,0xfe,0xf,0x32,0xd,0xa6,0x6,0xa8,0x7,0xa4,0x3,0x28,0xf6,0xeb,0xff,0x3f,0x86,0xbf,0x40,0xfa,0xe7,0xbf,0x7f,0x60,0xdb,0x7e,0xfd,0xfb,0xf,0xe6,0x83,0xc5,0x90,0xe4,0xfe,0xc0,0xd4,0x0,0x69,0x64,0xf6,0x8f,0x7f,0x10,0xfd,0xbf,0x80,0x34,0x48,0x1c,0x66,0x16,0x4c,0xd,0x88,0xfe,0x5,0x74,0xfe,0xff,0xff,0x8c,0xc,0x20,0xfc,0xef,0x2f,0x13,0x90,0x66,0x62,0xf8,0xb,0xa6,0x19,0x19,0x40,0xfc,0x7f,0x30,0xb9,0xff,0x40,0x39,0x6,0x88,0xba,0xff,0x40,0xfa,0x1f,0x88,0xf,0x92,0x3,0xb3,0x81,0xe2,0x20,0xb9,0x7f,0x4c,0xc0,0xb0,0x61,0x4,0x9b,0x1,0x33,0xf3,0xff,0x7f,0x66,0xb0,0xd8,0x3f,0x90,0x1c,0x54,0xcd,0x7f,0x6,0x88,0x1a,0x6,0xa8,0xd9,0xff,0xa1,0x66,0x81,0xcc,0x4,0x6,0xb,0x30,0xac,0x41,0xf2,0x40,0x6d,0xff,0x19,0xc0,0x6c,0x90,0xd8,0x3f,0x98,0x3b,0x41,0xc1,0xd,0x14,0x7,0x89,0x1,0x3,0x83,0x1,0xa2,0x9e,0x81,0x1,0xc6,0xff,0xf,0x97,0x63,0x80,0x18,0x0,0x52,0xf,0xd2,0xfb,0xef,0x3f,0x44,0xd,0x32,0x1b,0x18,0x95,0x90,0xe8,0x43,0x92,0xfb,0xb,0x31,0xeb,0xff,0x5f,0xa0,0x18,0x54,0x2f,0xe3,0x7f,0x4,0x9b,0x1,0xc4,0xfe,0x8b,0xb0,0x8f,0x1,0x6a,0x1f,0x23,0x88,0x6,0x72,0x18,0x41,0x7a,0x80,0xd2,0x60,0x73,0x41,0x7c,0x98,0x7b,0x80,0x34,0xd8,0x1c,0x30,0xd,0x75,0x1b,0x12,0x9b,0x11,0x2a,0xf,0xa6,0xa1,0xfa,0x98,0x80,0x76,0xc1,0xc5,0x81,0x62,0x4c,0x40,0x35,0x4c,0x40,0x1,0x10,0x66,0x6,0xd2,0x8c,0x40,0xc,0xa6,0x81,0xc6,0x31,0x33,0xfd,0x3,0x86,0x2a,0x3,0x3,0x48,0xc,0x0,0x9,0x55,0x4e,0xf4,0xca,0xea,0xd7,0xb3,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t cool_warm_extended[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0xb1,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x64,0x60,0x88,0xfc,0xcf,0xc8,0xc4,0xc8,0x0,0xc2,0xcc,0x2c,0x4c,0x28,0x34,0x13,0x94,0xcf,0xc0,0xc8,0xc8,0x0,0x62,0xc3,0x68,0x46,0x26,0x26,0x6,0x26,0x56,0x88,0x5a,0x10,0x9b,0x11,0xa4,0x8e,0x99,0x89,0x81,0x99,0x95,0x99,0x1,0x22,0x7,0xa4,0x99,0xa1,0x66,0x81,0xc5,0x18,0x21,0xea,0x81,0x62,0x20,0x73,0x98,0xa0,0xf6,0xc1,0xd8,0x4c,0xcc,0xa8,0xf6,0xa3,0xba,0x5,0x62,0x26,0x33,0xb,0x33,0x3,0x44,0x1f,0xc4,0x1e,0x26,0xa0,0x1b,0xc0,0x62,0x20,0x7b,0xc1,0x72,0x40,0xfb,0x80,0xe6,0xb0,0xb0,0x40,0xd4,0x43,0x68,0x46,0x6,0x16,0x16,0x16,0x6,0xb0,0x5a,0xa0,0x3a,0x56,0x56,0x56,0x6,0x26,0x28,0xcd,0xc,0xa4,0xd9,0x81,0x6e,0x3,0xd1,0x2c,0x40,0xb3,0xd8,0xd9,0x58,0x18,0x98,0x81,0x34,0x1b,0xd0,0x2f,0x20,0x7b,0xd8,0x40,0x6e,0x5,0xfa,0x9b,0x19,0xe8,0x56,0x56,0x90,0x1d,0x40,0x36,0x3b,0x50,0x8e,0x19,0x48,0x83,0xe4,0x40,0xe2,0x60,0x39,0x50,0x58,0x0,0xc5,0x58,0xa0,0x6a,0xd8,0x98,0x18,0x18,0x58,0x19,0xfe,0x31,0xb0,0x1,0x31,0x17,0xe3,0x6f,0x8,0xcd,0xf0,0x87,0xe1,0x3b,0xab,0x10,0x3,0xeb,0x9f,0x4f,0xc,0xcc,0xff,0x7e,0x32,0x30,0xff,0xf9,0xc2,0xc0,0xf0,0xef,0xf,0xc3,0xff,0xbf,0x7f,0x19,0xfe,0xff,0xf9,0xc9,0xc0,0x0,0xa2,0x7f,0xff,0x0,0xf2,0x81,0x62,0xbf,0x40,0xfc,0x3f,0x10,0xf6,0xcf,0x9f,0x10,0x35,0x40,0xb1,0xff,0x7f,0x80,0x62,0xbf,0x7f,0x83,0xf9,0xc,0xff,0xfe,0x31,0xfc,0xff,0x5,0x64,0xff,0xfb,0xb,0xa5,0xa1,0xfc,0xbf,0xff,0x18,0x40,0x72,0xff,0x7e,0x41,0xd4,0xfd,0xfb,0x89,0x4a,0xff,0xff,0xf3,0x8f,0xe1,0x1f,0xc8,0xc,0xa0,0xfe,0xbf,0xbf,0x81,0xe6,0x81,0x68,0xa0,0xb9,0xff,0x80,0xf6,0xff,0x3,0xea,0xfd,0xd,0xd4,0xf7,0x17,0x4a,0x83,0xf8,0x7f,0x7e,0xff,0x65,0x0,0xd1,0xff,0xfe,0xfe,0x67,0x80,0xb0,0xff,0x33,0xfc,0xfd,0x3,0x14,0xfb,0x7,0xa4,0xff,0x42,0xe8,0xff,0x40,0xf6,0x1f,0xa0,0xd8,0xff,0xff,0x40,0x35,0x40,0xf3,0x41,0x7c,0x98,0x1a,0x90,0x3e,0xb0,0x93,0x18,0x80,0x5e,0xfc,0xc7,0xc8,0x0,0x54,0xca,0x0,0xe2,0xff,0x67,0x0,0xb1,0x19,0x19,0xfe,0xfe,0x67,0x62,0xf8,0xf,0x92,0x3,0xd2,0xff,0xfe,0x3,0xf9,0xc,0xcc,0xc0,0x50,0x63,0x4,0x8a,0x31,0x31,0xfc,0x61,0x64,0x66,0x0,0xa9,0xfb,0xc3,0xc0,0xc,0x51,0xc3,0xc0,0x4,0x94,0x63,0x0,0xcb,0xff,0x5,0xe9,0x7,0x86,0xf9,0x5f,0x46,0x46,0x88,0x1a,0x10,0xcd,0x8,0x91,0x3,0x0,0xb6,0x61,0xda,0xa2,0xce,0x68,0x9d,0xbf,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t blackbody[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x0,0x52,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x64,0x60,0x60,0xf8,0xcf,0x4,0x24,0x98,0x81,0x98,0x5,0x88,0x41,0x6c,0x56,0x34,0x1a,0x59,0x8c,0x5,0x4d,0x2d,0xad,0xf5,0xc1,0xdc,0x2,0xb3,0x97,0x9,0xea,0x4e,0x6c,0xf6,0x62,0x73,0x3b,0x35,0xf4,0x31,0xa0,0x3b,0x2,0x16,0x50,0xe4,0x7a,0x1e,0x66,0x1e,0xb9,0xe,0x1e,0x4c,0x91,0x5,0xc,0x1c,0x46,0x46,0x2e,0x6,0x46,0x46,0x56,0x6,0x10,0xcd,0x80,0xc4,0x67,0x18,0x0,0x39,0x0,0x2d,0x1e,0x3,0xfe,0x6b,0x89,0x1e,0x5e,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t jet[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x0,0x95,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x64,0x60,0xe8,0xff,0xcf,0xc0,0xc0,0xc2,0x0,0xc1,0x1c,0x38,0x68,0x90,0x3c,0x4c,0x8e,0x1d,0x4d,0xd,0xb2,0x1c,0x54,0xd,0x3b,0x23,0xc4,0x38,0x66,0xa0,0x52,0x62,0x8c,0x4,0xa9,0x41,0x56,0xcb,0x42,0x40,0x1f,0x3b,0x11,0xce,0x44,0x77,0x2e,0x1,0x33,0x59,0x58,0xfe,0x30,0x30,0x33,0xfc,0x65,0xe0,0x60,0xf8,0x1,0xc,0x8d,0x3f,0x70,0x9a,0x85,0xe1,0xf,0x86,0x18,0x48,0xd,0x48,0x2d,0x2e,0x39,0x90,0x38,0xb2,0x1c,0x3b,0xc3,0x4f,0x6,0x6c,0x6a,0x29,0x35,0x9b,0xf9,0xff,0x5f,0x6,0xa0,0xd1,0xc,0x40,0x27,0x32,0x0,0x9d,0xd,0xa1,0xff,0x30,0x20,0xd8,0x3f,0x18,0x30,0xe5,0x7e,0xa2,0x89,0xc1,0xd4,0xa0,0xeb,0xfb,0xcb,0x40,0x7d,0x33,0x81,0x76,0xfc,0xff,0x45,0x9c,0x33,0x61,0xce,0xfa,0xc9,0x40,0xbc,0xf7,0x40,0x4e,0x6,0x0,0x37,0x73,0x75,0x81,0x28,0xa3,0xda,0x10,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t blue_gold[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0x2f,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0xd4,0xe5,0xfe,0xff,0x9f,0x91,0xf9,0x3f,0x3,0x18,0xb3,0x2,0x69,0xa6,0xff,0xc,0x4c,0x2c,0xff,0x18,0x18,0x19,0x41,0x62,0x40,0x1a,0xc8,0x67,0x64,0x64,0x0,0xca,0xff,0x3,0x12,0x40,0x39,0x66,0x88,0x1c,0x13,0x48,0xf,0x50,0xd,0x3,0x23,0x42,0x8c,0x11,0xac,0x16,0x64,0x6,0x44,0xd,0x44,0xee,0x3f,0xd8,0x2c,0x26,0x26,0xa8,0x99,0x60,0x9a,0x1,0x62,0x3e,0x4c,0x8c,0x11,0x24,0xc7,0xc0,0x0,0x53,0x3,0xd6,0x7,0x53,0x7,0x55,0x3,0x92,0x63,0x60,0xf8,0xf,0xd5,0x87,0x66,0x26,0x23,0x54,0x9c,0x11,0x61,0x37,0x13,0x23,0xc8,0xbd,0x10,0x33,0x19,0xa0,0xf2,0x4c,0x8c,0xff,0x50,0xf5,0x33,0x42,0xfc,0x4,0xf2,0x2b,0x13,0xd0,0xed,0x60,0x7b,0x19,0xff,0xa1,0xba,0x8d,0x1,0x12,0x26,0x10,0x35,0x40,0xf5,0x40,0x3e,0x8a,0x3b,0xd1,0xcc,0x86,0xdb,0xc1,0x80,0x70,0x13,0x4c,0x8c,0x9,0x16,0x5e,0x30,0xf7,0x82,0xcd,0x2,0xaa,0x43,0xa2,0x19,0xe1,0x7e,0x1,0xba,0x1d,0xe4,0x16,0x6,0x28,0xcd,0x88,0xe0,0x83,0xdd,0x2,0x32,0xb,0xa4,0xf,0x4d,0xd,0x23,0x54,0x8c,0x81,0x11,0x5d,0x3f,0xc8,0x1e,0x50,0xb8,0x43,0xe3,0x8f,0x11,0x62,0x2f,0x23,0x28,0x7c,0x19,0x20,0xf1,0xc1,0x4,0x35,0x8b,0x91,0x11,0xa6,0xe6,0x1f,0xc8,0x18,0x48,0x78,0x80,0xe5,0x80,0x71,0xd,0xf7,0x3,0x48,0xee,0x3f,0x9a,0x1c,0x34,0xcc,0x19,0xd1,0xe4,0x40,0x69,0x84,0xf1,0x2f,0x3,0x3,0xcc,0xbd,0x30,0xbb,0x81,0x62,0x10,0xff,0x82,0xd4,0xff,0x63,0x80,0x84,0x13,0x34,0x9d,0x81,0xe4,0xc0,0x61,0xf8,0x7,0x6a,0x7,0x90,0x66,0x0,0xb9,0xb,0x84,0x41,0xec,0xbf,0xc0,0xf4,0xf2,0x1b,0xe8,0xbe,0xbf,0x40,0xf9,0x1f,0x40,0xfc,0xb,0xc8,0xfe,0xcd,0x0,0x0,0x3c,0x97,0xa3,0xd0,0xeb,0x27,0xe9,0xed,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t ice_fire[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0xca,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x64,0x60,0x60,0xf8,0xcf,0xc4,0xcc,0xc1,0xc0,0xcc,0xc4,0xce,0xc0,0xc2,0xca,0xc9,0xc0,0xc4,0xcc,0xc2,0xc0,0xc4,0xc2,0xc9,0x0,0x24,0x18,0xfe,0x33,0x73,0x32,0xfc,0x67,0x64,0x61,0xf8,0xc7,0xc4,0xca,0xf0,0x17,0xc8,0xfe,0xb,0x64,0x83,0x68,0xa0,0x22,0x6,0x6,0x66,0x76,0x6,0x6,0x46,0x66,0xb0,0x3a,0x38,0x1b,0x68,0xe,0x5c,0x8e,0x89,0x5,0x28,0xf,0x32,0x8b,0x85,0x81,0x91,0x89,0x9,0x68,0x1c,0x90,0xcf,0xc4,0xc,0xa6,0x41,0x7c,0xb0,0x18,0x2b,0x48,0x8e,0x99,0x81,0x91,0x5,0xa2,0x86,0x85,0x15,0xa8,0x8e,0x89,0x11,0xa8,0x9e,0x91,0x81,0x19,0xc8,0x66,0x4,0xb2,0x99,0xd0,0x68,0x6,0x66,0x46,0x6,0x74,0x31,0x66,0x56,0x66,0xb0,0x1e,0x90,0x7a,0x46,0x90,0x7a,0x90,0x1a,0x16,0xa0,0x18,0x90,0x6,0xf1,0x99,0x41,0xe6,0x0,0xdd,0xc0,0xa,0x94,0x3,0xb1,0x59,0x80,0x72,0x4c,0x40,0x39,0x10,0xcd,0xc,0x52,0xb,0x94,0x83,0xd9,0xcd,0xe,0x94,0x63,0x5,0xaa,0xe7,0x62,0x66,0x62,0x0,0xd1,0xac,0x8c,0x8c,0xc,0x9c,0x2c,0x4c,0xc,0x2c,0x40,0x9a,0x3,0x44,0x3,0xe5,0x38,0x80,0x72,0x2c,0x40,0x1a,0x84,0xb9,0x19,0xfe,0x0,0xe5,0xfe,0x31,0x70,0x81,0x68,0x86,0x7f,0xc,0x9c,0x8c,0x7f,0x19,0x80,0x21,0xc6,0xc0,0xca,0xf8,0x8f,0x81,0x3,0x28,0xc6,0xc,0xa6,0xff,0x82,0xd5,0x30,0xff,0xfd,0xc2,0xc0,0xf4,0xff,0x17,0x3,0xf3,0xdf,0xaf,0xc,0x8c,0x40,0x1a,0x84,0x99,0x80,0x62,0x8c,0xff,0x7f,0x33,0x30,0xfd,0xfb,0x2,0x11,0xfb,0xb,0xa1,0xff,0xff,0xfb,0xc5,0xf0,0xff,0xf7,0x37,0x86,0xff,0xff,0x7e,0x3,0xe9,0xaf,0xc,0x10,0x3e,0x94,0xfe,0xf7,0x13,0x28,0xf6,0x11,0x28,0xf6,0x9d,0xe1,0xdf,0xef,0xc7,0xc,0xff,0xff,0x32,0x0,0x69,0x60,0x4c,0x2,0x69,0x30,0xfb,0x17,0x84,0xd,0xd4,0xca,0x80,0xcc,0x87,0xb1,0xff,0xfd,0x3,0xaa,0x7,0xaa,0x1,0xf1,0xff,0xfe,0x66,0x0,0xab,0x1,0xb3,0xa1,0x62,0x40,0xab,0x19,0xfe,0x41,0xcd,0x4,0xd3,0x40,0x36,0x48,0x1d,0x88,0xfd,0x17,0xa8,0x6,0x99,0xfe,0xff,0x87,0x91,0xe1,0xcf,0x4f,0xa0,0x19,0x7f,0x18,0x18,0x7e,0x81,0xf4,0x0,0xcd,0xfe,0x5,0x14,0x3,0xd9,0xf1,0x17,0xc8,0xfe,0xd,0x14,0xff,0xfb,0xf7,0x3f,0xc3,0x6f,0xa0,0x3d,0x7f,0x81,0xf2,0xbf,0x7f,0xff,0x67,0x0,0xc9,0x1,0x85,0x19,0x7e,0x32,0x30,0x32,0x0,0x85,0x80,0x34,0x3,0xa,0xd,0x92,0x83,0x7a,0x1,0x28,0xf7,0x9f,0xe1,0xf,0x13,0x3,0xc3,0x77,0x60,0x52,0x3,0xd1,0x40,0xa3,0x19,0xbe,0x3,0x53,0x2d,0x58,0x3f,0xd0,0xfc,0x3f,0xff,0x19,0x18,0xbe,0x1,0xd,0xf9,0x9,0xa2,0xff,0x33,0x30,0x0,0x0,0x38,0x16,0xbe,0x6,0xd6,0xb8,0x3f,0x4,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};
uint8_t nic_edge[] = {
0x89,0x50,0x4e,0x47,0xd,0xa,0x1a,0xa,0x0,0x0,0x0,0xd,0x49,0x48,0x44,0x52,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,0x1,0x8,0x6,0x0,0x0,0x0,0x77,0xca,0x84,0xf4,0x0,0x0,0x1,0xf7,0x49,0x44,0x41,0x54,0x78,0x5e,0x63,0x34,0x34,0x34,0xfc,0xcf,0xf4,0x9f,0x8d,0x81,0xf9,0x1f,0x3b,0x3,0xcb,0x5f,0x5e,0x6,0x46,0x10,0xfb,0xf,0x90,0x6,0xf2,0x19,0x7f,0xf3,0x31,0x30,0xfc,0x65,0x67,0x60,0xf8,0xc3,0xce,0xf0,0xff,0x7,0x1f,0xc3,0xff,0x9f,0x40,0xfa,0x27,0x37,0x3,0x3,0x23,0x33,0x10,0x73,0x0,0x31,0xb,0x18,0xff,0x67,0xe2,0xc0,0xa0,0xff,0x33,0xb2,0x30,0x80,0x30,0x3,0x17,0x90,0x66,0x65,0x62,0xf8,0xcf,0xe,0xd4,0xc3,0x2,0xa4,0xd9,0x80,0x7c,0x10,0xcd,0xcc,0xc8,0xf0,0x8f,0x15,0xc8,0x66,0x66,0x82,0xd2,0x8c,0xc,0xcc,0xdc,0x8c,0xc,0x8c,0xac,0xc,0xc,0xc,0xac,0x40,0x9a,0x93,0x11,0x48,0x3,0xd9,0x40,0xfa,0x3f,0x50,0xec,0x1f,0x27,0x3,0xc3,0x3f,0x16,0x90,0x1e,0x6,0x86,0x5f,0x40,0x31,0x66,0xd6,0xff,0xc,0x6c,0x9c,0xff,0x19,0x98,0x80,0x72,0x4c,0x40,0x9a,0x11,0xc8,0x7,0x5a,0xc9,0xc0,0xc0,0xf5,0x9f,0xe1,0x3f,0x90,0xfd,0xf,0x28,0xf6,0xf,0x28,0xf7,0x9b,0xf3,0x1f,0x3,0x2b,0x13,0x23,0x10,0x33,0x30,0x70,0x0,0x9d,0xcb,0x2,0x64,0xb3,0x3,0x69,0xa0,0xb5,0xc,0x6c,0x40,0xf3,0x40,0x34,0x8,0xb3,0x2,0xdd,0xc3,0xc4,0x4,0xd4,0xe,0x94,0x67,0x3,0x5a,0xcb,0xd,0x72,0x6,0x3,0x23,0x3,0x88,0xcd,0x9,0xa4,0x41,0xce,0x2,0x3a,0x81,0x81,0x5,0xc8,0x6,0xfa,0x16,0x4c,0x3,0x8d,0x1,0x5a,0x7,0x34,0xff,0xff,0x7f,0x6,0xce,0xff,0x10,0x9a,0x3,0xc8,0x66,0x65,0xf8,0xcf,0xc0,0x2,0xa4,0x39,0x80,0x62,0x10,0xfa,0x3f,0x3,0x33,0x90,0xcf,0xc4,0xf8,0x9d,0x81,0x91,0xf1,0x37,0x3,0x13,0xe3,0xf,0x30,0xcd,0xc8,0xf0,0x87,0x81,0x91,0x9,0x28,0xc6,0xf0,0x1b,0x4a,0x43,0xf8,0xc,0x40,0x3e,0x30,0xd0,0x81,0xa6,0x7c,0x67,0x80,0xb0,0xbf,0x3,0xd9,0xbf,0x81,0x6c,0x18,0xfd,0x1b,0xc8,0xff,0x6,0xe4,0xff,0x2,0xd2,0x5f,0x81,0x1,0xf3,0xf,0xa8,0xc,0xc8,0xfe,0xf7,0x17,0xc8,0x6,0xe2,0x3f,0xbf,0x80,0xf1,0x6,0xa1,0xff,0x83,0xc4,0xfe,0xfc,0x4,0xf3,0xff,0xff,0x3,0x9a,0xff,0x13,0x88,0xff,0x0,0xa3,0xeb,0xfb,0x7f,0x6,0xa0,0x53,0x18,0x18,0xa1,0x34,0xc8,0x4a,0x10,0x1b,0x4c,0x7f,0xfb,0xf,0xb5,0x96,0x91,0xe1,0x3f,0x50,0x2d,0xc3,0x1f,0x20,0xfd,0x3,0x18,0x1f,0xbf,0x91,0xe8,0x6f,0x40,0xf6,0x6f,0x88,0xf3,0xfe,0x7f,0x5,0xb2,0x81,0x56,0xfe,0xf9,0xd,0x8c,0xdf,0xbf,0x40,0x5f,0x1,0x69,0xb0,0x53,0xfe,0x1,0xd9,0xbf,0x80,0xf1,0xb,0x34,0xe3,0xf,0x8c,0x6,0xea,0xfb,0xf7,0xb,0xe4,0x73,0x6,0x86,0x1f,0x20,0x79,0xa0,0x55,0xdf,0xa1,0xf4,0x8f,0xff,0x40,0xf1,0xff,0x20,0x9f,0x3,0xe5,0x40,0x34,0x90,0xf,0x74,0x1e,0xc3,0x2f,0xde,0xff,0xc,0x9f,0xf9,0xfe,0x31,0xfc,0x64,0xf9,0xcf,0xf0,0x13,0x98,0x8c,0x3e,0xb3,0x2,0xd9,0x4c,0x40,0x31,0x66,0x20,0x9f,0xf1,0x3f,0xc3,0x27,0xc6,0x7f,0xc,0x20,0xe7,0xfd,0x64,0xf8,0xcf,0x0,0x0,0xd4,0xca,0xd9,0x94,0x17,0xc3,0x0,0xd6,0x0,0x0,0x0,0x0,0x49,0x45,0x4e,0x44,0xae,0x42,0x60,0x82
};

uint8_t* maps[12] = {
    paraview_cool_warm,
    rainbow,
    matplotlib_plasma,
    matplotlib_virdis,
    samsel_linear_green,
    samsel_linear_ygb_1211g,
    cool_warm_extended,
    blackbody,
    jet,
    blue_gold,
    ice_fire,
    nic_edge
};

size_t sizes[12] = {
    435,
    127,
    383,
    379,
    395,
    428,
    490,
    139,
    206,
    360,
    515,
    560
};
}