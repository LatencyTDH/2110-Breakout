/* Sean Dai
 * Exported with brandontools v1.0
 * Invocation command was brandontools -mode4 -resize=80,16 -start=0 -weights=25,25,25,25 -dither=1 -dither_level=80 icon /home/waxwing/Downloads/GBA emulator/HW11/pacwoman.png
 * Time-stamp: Tuesday 11/11/2014, 21:09:23
 *
 * Image Information
 * -----------------
 * /home/waxwing/Downloads/GBA emulator/HW11/pacwoman.png 80@16
 *
 * Quote/Fortune of the Day!
 * -------------------------
 * A C program is like a fast dance on a newly waxed dance floor by people carrying razors. - Waldi Ravens.
 *
 * Don't let the past and useless detail choke your existence.
 *
 * All bug reports / feature requests are to be sent to Brandon (brandon.whitehead@gatech.edu)
 */

const unsigned short icon_palette[136] =
{
	0x0000,0x0001,0x0021,0x0041,0x0002,0x0042,0x4842,0x0003,0x0063,0x0004,
	0x0084,0x0005,0x00a5,0x0006,0x00c6,0x0007,0x0027,0x00a7,0x00c7,0x00e7,
	0x0008,0x00c8,0x00e8,0x0108,0x0009,0x0129,0x000a,0x006a,0x008a,0x012a,
	0x014a,0x054a,0x000b,0x016b,0x000c,0x018c,0x098c,0x000d,0x01ad,0x000e,
	0x0c0e,0x00ee,0x01ce,0x000f,0x01ef,0x19ef,0x1410,0x1c10,0x4830,0x0210,
	0x1a10,0x0230,0x2831,0x4431,0x0231,0x0251,0x1c12,0x0032,0x3032,0x4432,
	0x3c72,0x0252,0x0013,0x01f3,0x0273,0x34b4,0x0294,0x02b4,0x0035,0x3035,
	0x0215,0x02b5,0x02f5,0x28d6,0x28f6,0x02d6,0x0017,0x2437,0x2837,0x02f7,
	0x0018,0x2018,0x2118,0x0278,0x0318,0x1b18,0x0019,0x1c19,0x00f9,0x0339,
	0x1b39,0x001a,0x181a,0x035a,0x001b,0x015b,0x157b,0x02fb,0x037b,0x001c,
	0x02dc,0x031c,0x039c,0x03bc,0x001d,0x013d,0x03bd,0x001e,0x027e,0x03de,
	0x0bde,0x001f,0x003f,0x005f,0x009f,0x00ff,0x015f,0x017f,0x019f,0x01bf,
	0x01df,0x01ff,0x021f,0x023f,0x025f,0x029f,0x02bf,0x02df,0x02ff,0x031f,
	0x033f,0x037f,0x039f,0x03bf,0x03df,0x03ff
};

const unsigned short pacwoman[640] =
{
	0x0000,0x0000,0x0901,0x0009,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0400,0x0709,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0907,0x0007,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0400,0x0709,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x6f18,0x1a68,0x1311,0x1313,0x0f13,0x0001,0x0000,0x0000,
	0x0000,0x2700,0x5b6f,0x1214,0x1313,0x0c13,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x6f3e,0x104c,0x1312,0x1313,0x0008,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x2700,0x5b6f,0x1214,0x1313,0x0c13,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0b00,0x4d28,0x6f6f,0x8781,0x8587,0x447c,0x0007,0x0000,0x0000,
	0x0000,0x2e0f,0x6f51,0x8370,0x8787,0x5d87,0x1e1e,0x0002,0x0000,0x0000,
	0x1400,0x5c38,0x726f,0x8786,0x8787,0x1e4f,0x0019,0x0000,0x0000,0x0000,
	0x0000,0x2e0f,0x6f51,0x8370,0x8787,0x5d87,0x1e1e,0x0002,0x0000,0x0000,
	0x1a00,0x2f27,0x3c3b,0x7977,0x5946,0x6587,0x002b,0x0000,0x0000,0x0100,
	0x2722,0x3534,0x7841,0x8679,0x8787,0x8787,0x8787,0x0a37,0x0000,0x2507,
	0x3a27,0x4a30,0x7b78,0x8787,0x8787,0x8787,0x2a6d,0x0005,0x0000,0x0100,
	0x2722,0x3534,0x7841,0x8679,0x8787,0x8787,0x8787,0x0836,0x0000,0x0000,
	0x5b00,0x576f,0x7d49,0x3387,0x3d03,0x1e59,0x0000,0x0000,0x0000,0x0700,
	0x6f6b,0x524e,0x877f,0x3187,0x5426,0x8787,0x7986,0x1c79,0x0000,0x6f0f,
	0x456f,0x8260,0x8787,0x8787,0x8787,0x8787,0x8787,0x000c,0x0000,0x0700,
	0x6f6b,0x524e,0x877f,0x3187,0x5426,0x8787,0x8787,0x4b87,0x0017,0x0000,
	0x1400,0x6f50,0x6774,0x061f,0x3132,0x000e,0x0000,0x0000,0x0000,0x0100,
	0x5e1a,0x796f,0x6687,0x061f,0x622d,0x1e4f,0x1a1d,0x071a,0x0000,0x2204,
	0x6f68,0x487e,0x1e1e,0x1e1e,0x875d,0x8787,0x8787,0x0e4f,0x0000,0x0100,
	0x5e1a,0x796f,0x6687,0x061f,0x622d,0x8787,0x8787,0x8787,0x002c,0x0000,
	0x0000,0x813f,0x6d83,0x5554,0x0824,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5300,0x8481,0x6d87,0x554f,0x1324,0x0008,0x0000,0x0000,0x0000,0x0500,
	0x8164,0x6685,0x4f4f,0x4f4f,0x876a,0x8787,0x8787,0x5f87,0x0020,0x0000,
	0x5300,0x8481,0x6d87,0x5a54,0x876e,0x8287,0x7373,0x2973,0x0008,0x0000,
	0x0000,0x8742,0x8787,0x1e6d,0x0002,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5900,0x8787,0x6287,0x1317,0x0002,0x0000,0x0000,0x0000,0x0000,0x0800,
	0x8767,0x8787,0x8787,0x8787,0x8787,0x8787,0x8687,0x7175,0x002b,0x0000,
	0x5900,0x8787,0x8787,0x8787,0x8787,0x8087,0x0d63,0x0109,0x0000,0x0000,
	0x0000,0x8742,0x8787,0x6a62,0x0221,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x5900,0x8787,0x626d,0x6a6a,0x0a21,0x0005,0x0000,0x0000,0x0000,0x0800,
	0x876a,0x6a87,0x8766,0x8787,0x8787,0x8787,0x8787,0x6986,0x0025,0x0000,
	0x5900,0x8787,0x626d,0x8787,0x8787,0x6c85,0x014c,0x0000,0x0000,0x0000,
	0x0000,0x662c,0x6287,0x661e,0x3687,0x0008,0x0000,0x0000,0x0000,0x0000,
	0x4000,0x876a,0x234f,0x876d,0x8787,0x1347,0x0f12,0x040f,0x0000,0x0500,
	0x6d4b,0x4087,0x872a,0x8787,0x8787,0x8787,0x8787,0x1659,0x0000,0x0000,
	0x4000,0x876a,0x234f,0x876d,0x8787,0x587f,0x0f15,0x040f,0x0000,0x0000,
	0x0000,0x2c00,0x8787,0x8787,0x8787,0x134f,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x8742,0x8787,0x8787,0x8787,0x8787,0x7685,0x1b75,0x0000,0x0000,
	0x5900,0x8787,0x8787,0x8787,0x8787,0x8787,0x8787,0x000c,0x0000,0x0000,
	0x0000,0x8742,0x8787,0x8787,0x8787,0x8787,0x7685,0x1b75,0x0000,0x0000,
	0x0000,0x1700,0x874b,0x8787,0x8787,0x6187,0x0022,0x0000,0x0000,0x0000,
	0x0000,0x5921,0x8787,0x8787,0x8787,0x8787,0x8787,0x0c43,0x0000,0x0000,
	0x2600,0x8762,0x8787,0x8787,0x8787,0x8787,0x3d6d,0x0008,0x0000,0x0000,
	0x0000,0x5921,0x8787,0x8787,0x8787,0x8787,0x8787,0x0c43,0x0000,0x0000,
	0x0000,0x0000,0x2a08,0x6d2c,0x8787,0x8587,0x397a,0x0007,0x0000,0x0000,
	0x0000,0x0e00,0x362a,0x8787,0x8787,0x6287,0x262a,0x0002,0x0000,0x0000,
	0x0000,0x2a17,0x8742,0x8787,0x8787,0x2a54,0x0023,0x0000,0x0000,0x0000,
	0x0000,0x0e00,0x362a,0x8787,0x8787,0x6287,0x262a,0x0002,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x1900,0x1e1e,0x1e1e,0x201e,0x0004,0x0000,0x0000,
	0x0000,0x0000,0x0200,0x1e1e,0x1e1e,0x131e,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x1e05,0x1e1e,0x1e1e,0x000c,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0200,0x1e1e,0x1e1e,0x131e,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x0f00,0x565e,0x0009,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x5e20,0x014c,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x2b00,0x3e5e,0x0000,0x0000,0x0000,0x0000,
	0x0000,0x0000,0x0000,0x0000,0x0000,0x5e20,0x014c,0x0000,0x0000,0x0000
};

