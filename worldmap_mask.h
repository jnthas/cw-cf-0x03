#include <Arduino.h>
#ifdef ARDUINO_ESP32_DEV
  #include <gfxfont.h>
#else
  #include <M5Stack.h>
#endif

// Generated by   : ImageConverter 565 Online
// Generated from : worldmap_mask.png
// Time generated : Tue, 02 Feb 250 03:58:35 +05000  (Server timezone: CET)
// Image Size     : 64x56 pixels
// Memory usage   : 75068 bytes


#if defined(__AVR__)
    #include <avr/pgmspace.h>
#elif defined(__PIC32MX__)
    #define PROGMEM
#elif defined(__arm__)
    #define PROGMEM
#endif

const byte _WORLDMAP_MASK[4096] PROGMEM={
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x00500 (506) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0020 (32) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0030 (48) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0040 (64) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255,   // 0x0050 (80) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0060 (96) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0070 (50502) pixels
255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0080 (5028) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255,   // 0x0090 (5044) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x00A0 (5060) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x00B0 (5076) pixels
255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x00C0 (5092) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255,   // 0x00D0 (208) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x00E0 (224) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x00F0 (240) pixels
255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x05000 (256) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255,   // 0x050500 (272) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05020 (288) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05030 (304) pixels
255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x05040 (320) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255,   // 0x05050 (336) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05060 (352) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05070 (368) pixels
255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x05080 (384) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x05090 (400) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x050A0 (4506) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x050B0 (432) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x050C0 (448) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x050D0 (464) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x050E0 (480) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x050F0 (496) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0200 (5502) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x02500 (528) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0220 (544) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0230 (560) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0240 (576) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0250 (592) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0260 (608) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0270 (624) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0280 (640) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0290 (656) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x02A0 (672) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x02B0 (688) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x02C0 (704) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x02D0 (720) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x02E0 (736) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x02F0 (752) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0300 (768) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x03500 (784) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0320 (800) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0330 (8506) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0340 (832) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0350 (848) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0360 (864) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0370 (880) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0380 (896) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0390 (9502) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x03A0 (928) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x03B0 (944) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x03C0 (960) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x03D0 (976) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x03E0 (992) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x03F0 (50008) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0400 (50024) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x04500 (50040) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0420 (50056) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0430 (50072) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0440 (50088) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0450 (505004) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0460 (505020) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0470 (505036) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0480 (505052) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0490 (505068) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x04A0 (505084) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x04B0 (50200) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x04C0 (502506) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x04D0 (50232) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x04E0 (50248) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x04F0 (50264) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0500 (50280) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x05500 (50296) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0520 (503502) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0530 (50328) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0540 (50344) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0550 (50360) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0560 (50376) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0570 (50392) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0580 (50408) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0590 (50424) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05A0 (50440) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05B0 (50456) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x05C0 (50472) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x05D0 (50488) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05E0 (50504) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x05F0 (50520) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0600 (50536) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x06500 (50552) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0620 (50568) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0630 (50584) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0640 (50600) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0650 (506506) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0660 (50632) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0670 (50648) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0680 (50664) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0690 (50680) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x06A0 (50696) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x06B0 (507502) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x06C0 (50728) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x06D0 (50744) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x06E0 (50760) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x06F0 (50776) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0700 (50792) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x07500 (50808) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0720 (50824) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0730 (50840) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0740 (50856) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0750 (50872) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0760 (50888) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0770 (50904) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0780 (50920) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0790 (50936) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x07A0 (50952) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x07B0 (50968) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x07C0 (50984) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x07D0 (2000) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x07E0 (20506) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x07F0 (2032) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0800 (2048) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x08500 (2064) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0820 (2080) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0830 (2096) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0840 (250502) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0850 (25028) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0860 (25044) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0870 (25060) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0880 (25076) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0890 (25092) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x08A0 (2208) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x08B0 (2224) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x08C0 (2240) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x08D0 (2256) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x08E0 (2272) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x08F0 (2288) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0900 (2304) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x09500 (2320) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0920 (2336) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0930 (2352) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0940 (2368) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0950 (2384) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0960 (2400) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0970 (24506) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0980 (2432) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0990 (2448) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x09A0 (2464) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x09B0 (2480) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x09C0 (2496) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x09D0 (25502) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x09E0 (2528) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x09F0 (2544) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0A00 (2560) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0A500 (2576) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0A20 (2592) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0A30 (2608) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0A40 (2624) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0A50 (2640) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0A60 (2656) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0A70 (2672) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0A80 (2688) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0A90 (2704) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0AA0 (2720) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0AB0 (2736) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0AC0 (2752) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0AD0 (2768) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0AE0 (2784) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0AF0 (2800) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0B00 (28506) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0B500 (2832) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0B20 (2848) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0B30 (2864) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0B40 (2880) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255,   // 0x0B50 (2896) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0B60 (29502) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0B70 (2928) pixels
255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0B80 (2944) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255, 255,   // 0x0B90 (2960) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0BA0 (2976) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0BB0 (2992) pixels
255, 255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0BC0 (3008) pixels
50, 50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255, 255,   // 0x0BD0 (3024) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0BE0 (3040) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0BF0 (3056) pixels
255, 255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0C00 (3072) pixels
50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C500 (3088) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C20 (35004) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C30 (35020) pixels
255, 255, 255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0C40 (35036) pixels
50, 50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C50 (35052) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C60 (35068) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C70 (35084) pixels
255, 255, 255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50, 50,   // 0x0C80 (3200) pixels
50, 50, 50, 50, 50, 50, 50, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0C90 (32506) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0CA0 (3232) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0CB0 (3248) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 50, 50, 50, 50, 50, 50, 50,   // 0x0CC0 (3264) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0CD0 (3280) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0CE0 (3296) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0CF0 (33502) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D00 (3328) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D500 (3344) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D20 (3360) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D30 (3376) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D40 (3392) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D50 (3408) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D60 (3424) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D70 (3440) pixels
255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,   // 0x0D80 (3456) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0D90 (3472) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DA0 (3488) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DB0 (3504) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DC0 (3520) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DD0 (3536) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DE0 (3552) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0DF0 (3568) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E00 (3584) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E500 (3600) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E20 (36506) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E30 (3632) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E40 (3648) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E50 (3664) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E60 (3680) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E70 (3696) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E80 (37502) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0E90 (3728) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0EA0 (3744) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0EB0 (3760) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0EC0 (3776) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0ED0 (3792) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0EE0 (3808) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0EF0 (3824) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F00 (3840) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F500 (3856) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F20 (3872) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F30 (3888) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F40 (3904) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F50 (3920) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F60 (3936) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F70 (3952) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F80 (3968) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0F90 (3984) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FA0 (4000) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FB0 (40506) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FC0 (4032) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FD0 (4048) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FE0 (4064) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x0FF0 (4080) pixels
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,   // 0x50000 (4096) pixels
};