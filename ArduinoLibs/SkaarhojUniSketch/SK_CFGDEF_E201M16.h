#ifndef SK_CUSTOM
		
	// Define number of each supported device we want to talk to:
#define SK_DEVICES_ATEM 1

#define SK_DEVICES 1		
		

#define SK_HWCCOUNT 32	
			

#define SK_MAXACTIONS 13	
			

	// Define the relation between a device index in the configuration and which device type it is.
	// There must be an exact match between the listed devices here and the defined number of devices just above
	// The order in the list below correspondance to the JavaScript based listing inside "JSscriptData" (variable "devLst")
	// This is how the arduino code will know, what a given device index means
static const uint8_t deviceArray[] PROGMEM = {0,SK_DEV_ATEM};

		// SVG drawing of the unit
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 3450 1877\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(208,208,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(150,150,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(190,190,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"2970\" height=\"1833\" x=240 y=22 style=\"fill:url(#grad1);\" /><rect width=\"2970\" height=\"30\" x=240 y=233 style=\"fill:rgb(110,110,100);\" /><rect width=\"2970\" height=\"30\" x=240 y=1614 style=\"fill:rgb(110,110,100);\" /><path d=\"M 246 0 H 200 V 20 L 74 30 Q -70 939, 74 1847 L 200 1857 V 1877 H 246 Z\" stroke=\"black\" stroke-width=\"2\" fill=\"#333333\" /><path d=\"M 3204 0 H 3250 V 20 L 3376 30 Q 3520 939, 3376 1847 L 3250 1857 V 1877 H 3204 Z\" stroke=\"black\" stroke-width=\"2\" fill=\"#333333\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16631, GZIP size: 5492 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x53, 0xDB, 0x48, 0x93, 0xDF, 0x9F, 0x5F, 
	0xA1, 0x55, 0x6A, 0xC1, 0x3A, 0xCB, 0x46, 0xAF, 0xB6, 0xB1, 
	0x30, 0x39, 0x20, 0xC9, 0x42, 0x6D, 0xD8, 0xA5, 0xE2, 0x6C, 
	0xB2, 0x77, 0x2E, 0x57, 0x4A, 0x48, 0x63, 0xAC, 0x44, 0x48, 
	0x3E, 0x49, 0x86, 0x70, 0x84, 0xFF, 0x7E, 0xDD, 0x3D, 0xA3, 
	0x57, 0xCB, 0xC4, 0xC9, 0x3E, 0x97, 0x54, 0x3C, 0x9A, 0x9E, 
	0x99, 0x7E, 0x9F, 0x9E, 0x9E, 0x96, 0x72, 0xE7, 0x26, 0xD2, 
	0xF9, 0x47, 0x6F, 0x32, 0x9B, 0xE9, 0xAA, 0x65, 0xE9, 0xFD, 
	0x43, 0x55, 0x37, 0x47, 0x9A, 0x2A, 0xEB, 0xB2, 0x6A, 0xCE, 
	0x55, 0x00, 0x0E, 0xF4, 0xC3, 0xFE, 0x50, 0x00, 0x8D, 0x1C, 
	0x38, 0x3C, 0x1C, 0xF6, 0x6D, 0x01, 0x34, 0x73, 0xE0, 0xE1, 
	0xD0, 0xEE, 0x9B, 0x02, 0x68, 0xE5, 0x40, 0x5D, 0xB7, 0xCD, 
	0xBE, 0x2E, 0xA0, 0x76, 0x01, 0x35, 0x4D, 0xAD, 0x20, 0x35, 
	0x28, 0xA0, 0xB6, 0x36, 0x2A, 0x68, 0x0D, 0x0B, 0xE8, 0x60, 
	0x34, 0x28, 0x88, 0x8D, 0x0A, 0xE8, 0x68, 0x60, 0x15, 0xD4, 
	0x0E, 0x73, 0xA8, 0xA1, 0x59, 0x46, 0x41, 0x4D, 0xD7, 0x72, 
	0xB0, 0x10, 0x4C, 0x33, 0x0F, 0x37, 0x05, 0x23, 0x60, 0x53, 
	0x30, 0x02, 0x36, 0x05, 0x23, 0xE0, 0x86, 0x60, 0x04, 0xDD, 
	0x10, 0x8C, 0xA0, 0x1B, 0x82, 0x11, 0x74, 0x43, 0x30, 0x82, 
	0x6E, 0x08, 0x46, 0xD0, 0x0D, 0xC1, 0xB8, 0x08, 0x42, 0x30, 
	0x4B, 0x35, 0x2C, 0xCD, 0x00, 0xA0, 0x65, 0xAB, 0xF2, 0xFB, 
	0xD3, 0x93, 0x77, 0xB2, 0x6A, 0x0C, 0xF9, 0xF4, 0xE1, 0x50, 
	0x13, 0x5A, 0x38, 0xFB, 0xEB, 0x7D, 0x81, 0x04, 0xA1, 0x83, 
	0xA1, 0xAE, 0xCA, 0x27, 0x35, 0xD0, 0xC8, 0x1A, 0xA9, 0xF2, 
	0x69, 0x0D, 0xA4, 0x6B, 0x06, 0xE0, 0x3C, 0xCB, 0x61, 0xA6, 
	0x66, 0x0E, 0xF9, 0xCA, 0x57, 0xA5, 0x4E, 0x35, 0x60, 0xD3, 
	0xB6, 0x61, 0xDA, 0xEB, 0x52, 0xA5, 0x23, 0x60, 0x92, 0x60, 
	0x6F, 0x4A, 0x8D, 0xDA, 0xA0, 0x10, 0x82, 0xFD, 0x56, 0x2A, 
	0xD4, 0x04, 0x75, 0x10, 0xEC, 0x9C, 0xC3, 0x40, 0x8A, 0xA1, 
	0x69, 0x01, 0xC8, 0x00, 0x74, 0x91, 0x17, 0xFB, 0x2C, 0x91, 
	0x2E, 0x59, 0xB4, 0x96, 0x55, 0x7B, 0x40, 0xC3, 0xC0, 0xC1, 
	0x00, 0x25, 0x05, 0x89, 0xA6, 0xB7, 0x6E, 0x92, 0x89, 0x41, 
	0x7D, 0x3E, 0x77, 0xFE, 0x75, 0x07, 0x3E, 0xEC, 0xB3, 0xBB, 
	0xB7, 0x69, 0x46, 0x6E, 0x2C, 0x9F, 0xBC, 0x7F, 0x7D, 0x29, 
	0xAB, 0x3A, 0x92, 0x02, 0x0A, 0xD3, 0x87, 0x34, 0x63, 0xB7, 
	0x72, 0x65, 0xE2, 0x9B, 0x75, 0x84, 0x0E, 0x3F, 0xD3, 0x61, 
	0xEE, 0x55, 0x12, 0xDF, 0x24, 0xEE, 0xAD, 0x34, 0x4D, 0x3C, 
	0x59, 0xED, 0xE9, 0x6A, 0xCF, 0x50, 0x67, 0xB2, 0x0C, 0x7C, 
	0xC5, 0xA1, 0x2F, 0xBD, 0x8A, 0xEF, 0x23, 0x78, 0x7E, 0x1F, 
	0xDF, 0xDC, 0x84, 0x0C, 0x1E, 0xCE, 0x1E, 0x3C, 0x68, 0xE7, 
	0x88, 0x98, 0x96, 0xB2, 0xBB, 0x80, 0xDD, 0x6F, 0x2C, 0x6D, 
	0xCE, 0xBA, 0x3B, 0xB8, 0x4A, 0x6E, 0xBE, 0x33, 0xEB, 0xE4, 
	0xAF, 0xBF, 0xA5, 0x3F, 0xD7, 0xD9, 0x6A, 0x9D, 0x89, 0x89, 
	0xE6, 0xF3, 0x9C, 0x10, 0xF0, 0xB7, 0x24, 0x5E, 0xAF, 0xA4, 
	0x93, 0x7A, 0xF7, 0x74, 0x03, 0xF7, 0x5F, 0xAB, 0x34, 0x4B, 
	0x18, 0xC8, 0xF8, 0x3B, 0x7B, 0x60, 0x09, 0x67, 0xC2, 0x52, 
	0x7B, 0x76, 0xEB, 0xB0, 0xF4, 0x26, 0x08, 0xC3, 0x62, 0x8E, 
	0xD1, 0x3E, 0x07, 0x7E, 0x37, 0xA6, 0x20, 0x87, 0x0D, 0x3A, 
	0x83, 0x92, 0x48, 0x73, 0x34, 0x27, 0x33, 0xD8, 0x8E, 0x40, 
	0x50, 0xA9, 0xCC, 0xB8, 0xBC, 0x92, 0xA6, 0x19, 0x5F, 0x37, 
	0x24, 0xAF, 0xC4, 0x81, 0x5D, 0x8C, 0x65, 0x80, 0x7F, 0x77, 
	0xF2, 0xD5, 0x12, 0x0D, 0x28, 0x25, 0x12, 0x70, 0x91, 0x0C, 
	0x3C, 0x4A, 0x9E, 0xE7, 0xDD, 0xD7, 0x91, 0x8F, 0x1D, 0xD8, 
	0x05, 0x06, 0xB8, 0xDB, 0xC9, 0x3A, 0x8B, 0xA5, 0x8B, 0x28, 
	0x63, 0xC9, 0x9D, 0x1B, 0xCA, 0x82, 0xE2, 0x3B, 0x37, 0xF2, 
	0xE3, 0x5B, 0xEA, 0x15, 0x04, 0xFF, 0x44, 0xF2, 0x7F, 0x2E, 
	0x16, 0x35, 0x86, 0x6A, 0xF4, 0xCF, 0xC2, 0x60, 0xC5, 0x09, 
	0x1B, 0x35, 0x70, 0x1C, 0x65, 0x49, 0x1C, 0xF2, 0x91, 0xDE, 
	0x48, 0x48, 0x7B, 0xB6, 0xCE, 0x50, 0xC9, 0xB9, 0x83, 0x00, 
	0x17, 0x95, 0xEE, 0x9B, 0xF7, 0xA7, 0x95, 0xDE, 0xFB, 0xC4, 
	0x8D, 0xD2, 0x20, 0x0B, 0xE2, 0x08, 0x44, 0x7C, 0x40, 0x66, 
	0xD0, 0x38, 0x87, 0x44, 0xA3, 0x36, 0x7A, 0x15, 0xA7, 0x95, 
	0x65, 0x57, 0xA1, 0xFB, 0x20, 0x5D, 0xBA, 0x5E, 0x02, 0x98, 
	0x31, 0xF2, 0x68, 0x28, 0x0E, 0x02, 0x65, 0x54, 0x49, 0xBC, 
	0xDA, 0x70, 0x38, 0xA1, 0x62, 0xA1, 0x59, 0xAE, 0x89, 0xB7, 
	0x31, 0x4C, 0x2C, 0xA5, 0x7C, 0xC7, 0xBC, 0x38, 0xF1, 0x39, 
	0x56, 0x45, 0xE6, 0xA1, 0xAB, 0x1C, 0x9D, 0xC6, 0xEB, 0xC4, 
	0x63, 0x85, 0x05, 0x66, 0xF2, 0xE5, 0xC1, 0x6B, 0x09, 0x22, 
	0x32, 0xB5, 0x10, 0x84, 0x69, 0x1F, 0xE8, 0xA2, 0xCD, 0xFB, 
	0xA6, 0x68, 0x2D, 0xD1, 0xDA, 0xA2, 0x1D, 0x20, 0x0B, 0xBD, 
	0xAA, 0xF9, 0x7A, 0x3F, 0x6C, 0x3C, 0xE8, 0x7D, 0x70, 0x93, 
	0x07, 0x29, 0x0B, 0x6E, 0x83, 0xE8, 0x46, 0x32, 0xB4, 0x5F, 
	0x1B, 0x10, 0x1B, 0x20, 0x3B, 0x5A, 0x99, 0xAC, 0xE4, 0x07, 
	0x64, 0x26, 0x0D, 0xFE, 0xE9, 0x3B, 0x39, 0xE7, 0x50, 0xAC, 
	0x92, 0x3E, 0xC4, 0xE1, 0xFA, 0x96, 0x4C, 0xA7, 0x55, 0xC1, 
	0xA7, 0x6E, 0xE8, 0x46, 0x5E, 0x01, 0x37, 0xAC, 0x7C, 0xE0, 
	0x2D, 0xBB, 0x63, 0x61, 0x5A, 0x99, 0x5F, 0xB1, 0xF3, 0x3B, 
	0x37, 0xE3, 0x4E, 0x30, 0x13, 0x94, 0x40, 0xC3, 0xC1, 0x57, 
	0xF8, 0x7D, 0x15, 0xA0, 0x55, 0x3F, 0x06, 0x2B, 0x04, 0xBD, 
	0xFA, 0x00, 0x91, 0x9B, 0x5C, 0x89, 0x07, 0x7E, 0x8A, 0xDB, 
	0x10, 0x0C, 0x59, 0x5A, 0x31, 0xA8, 0xC2, 0xF1, 0x6C, 0x1B, 
	0x6E, 0x44, 0x86, 0x2B, 0x17, 0x26, 0xE0, 0x12, 0x88, 0x0C, 
	0x7A, 0xE9, 0xE4, 0x1B, 0x7B, 0xBB, 0x98, 0x37, 0x10, 0xF3, 
	0x4C, 0xC0, 0x1D, 0x7B, 0x6B, 0x92, 0xC7, 0xE4, 0xF2, 0x5C, 
	0x24, 0x41, 0xD1, 0x85, 0xE1, 0x29, 0x8B, 0xD2, 0x38, 0x91, 
	0x7E, 0x73, 0x83, 0x88, 0xA0, 0x15, 0xD9, 0x34, 0xFF, 0x1A, 
	0x7E, 0x07, 0xF4, 0xAB, 0x1B, 0xBC, 0x19, 0x41, 0x33, 0x17, 
	0x2B, 0x97, 0xEB, 0x2C, 0xE3, 0x91, 0xAF, 0xBA, 0x4A, 0x3F, 
	0xB0, 0x35, 0x6A, 0x06, 0xBC, 0x19, 0xDA, 0xD4, 0x1C, 0xF2, 
	0x9E, 0xAE, 0x89, 0xD6, 0x10, 0xAD, 0x98, 0xAC, 0x8F, 0x78, 
	0x6B, 0x88, 0xBE, 0x29, 0x56, 0xDB, 0x62, 0xFE, 0xD0, 0xB0, 
	0xF3, 0xF5, 0x62, 0x81, 0x25, 0x66, 0x1A, 0x08, 0x11, 0x2C, 
	0x7D, 0x5C, 0x06, 0x19, 0xAB, 0xDA, 0xB6, 0xCA, 0x18, 0xA0, 
	0xD6, 0x7E, 0xC7, 0x76, 0xC4, 0x5B, 0x53, 0x13, 0xAD, 0x21, 
	0x5A, 0x4B, 0xB4, 0x03, 0xDE, 0x5A, 0x62, 0xDC, 0x12, 0xEB, 
	0x2C, 0xB1, 0xCE, 0x16, 0x70, 0x5B, 0xAC, 0xB3, 0xC5, 0x3A, 
	0x5B, 0xAC, 0x1B, 0x88, 0xF1, 0x81, 0x58, 0x37, 0x14, 0xFD, 
	0xA1, 0xE8, 0x8F, 0xA8, 0x2F, 0x9C, 0xF4, 0x6D, 0xB0, 0xA0, 
	0x78, 0x64, 0x95, 0x06, 0xFA, 0xCD, 0xBD, 0xBD, 0x75, 0x37, 
	0x60, 0xDC, 0x3C, 0x15, 0xD0, 0xF9, 0x9A, 0x55, 0xAC, 0x4A, 
	0xC1, 0xCE, 0x4D, 0xB3, 0x0A, 0x68, 0xEA, 0x66, 0xEB, 0xC4, 
	0x45, 0xC7, 0xCD, 0x35, 0xF1, 0x47, 0x9C, 0xDC, 0xC2, 0x7E, 
	0x05, 0x17, 0x65, 0x29, 0x1F, 0x64, 0x7E, 0xC5, 0xE9, 0x4E, 
	0xDD, 0x24, 0xA5, 0xF0, 0xF1, 0xFD, 0x5D, 0x09, 0xE9, 0xD2, 
	0x87, 0xC0, 0x67, 0xB1, 0xF4, 0xDE, 0x0D, 0x43, 0x3C, 0x4F, 
	0xF0, 0x54, 0x15, 0x87, 0xBE, 0x5C, 0x9C, 0xE1, 0x32, 0x4F, 
	0x04, 0x0E, 0xB0, 0x9B, 0x2F, 0xE3, 0xBB, 0x2C, 0x5F, 0x46, 
	0x9B, 0x8C, 0x53, 0x3F, 0x5B, 0x26, 0xF1, 0xAD, 0x8B, 0x8E, 
	0x2C, 0x4D, 0x59, 0x96, 0x41, 0x94, 0xE0, 0xCC, 0x60, 0x64, 
	0x61, 0x9E, 0x8B, 0xE7, 0x13, 0x88, 0x74, 0x87, 0x11, 0x12, 
	0xB6, 0x01, 0xA6, 0x45, 0x90, 0x5D, 0xB9, 0xD1, 0x97, 0x8A, 
	0x00, 0x67, 0x67, 0x7F, 0x7D, 0x7F, 0x2D, 0x6A, 0xA2, 0x6D, 
	0xF1, 0xD5, 0xC5, 0x15, 0x6D, 0x4A, 0x9B, 0xBB, 0x12, 0xED, 
	0x62, 0x7E, 0x18, 0x83, 0x64, 0x31, 0x8F, 0x00, 0x88, 0x06, 
	0xD0, 0x01, 0xFE, 0x3C, 0xCC, 0x81, 0x3F, 0xFE, 0xDA, 0x03, 
	0x47, 0xF8, 0x55, 0xFA, 0xEF, 0x18, 0x83, 0x1F, 0xE2, 0xE3, 
	0xF9, 0xD1, 0x12, 0x2C, 0xCB, 0xA3, 0x89, 0xCC, 0xE3, 0x26, 
	0x18, 0x9B, 0x7A, 0xDF, 0x3D, 0x5D, 0xA5, 0xBF, 0x56, 0xC5, 
	0x63, 0x19, 0x07, 0x6D, 0x8A, 0xC8, 0x18, 0x80, 0x00, 0xDB, 
	0x61, 0xDE, 0xF9, 0x79, 0x64, 0x97, 0xEC, 0x36, 0x4E, 0x1E, 
	0x50, 0x4B, 0x98, 0xEA, 0x50, 0x7E, 0x83, 0x9E, 0x01, 0x18, 
	0x31, 0x24, 0xFD, 0x30, 0x56, 0xBE, 0xE2, 0x8A, 0x25, 0x69, 
	0x00, 0x5E, 0x28, 0xBC, 0x9B, 0x4F, 0xD8, 0x4E, 0x09, 0x24, 
	0x11, 0xF1, 0x8F, 0x1F, 0x1C, 0xA2, 0xFB, 0x3E, 0xDE, 0x71, 
	0xEC, 0x84, 0x9F, 0x4A, 0x4D, 0xCA, 0x74, 0x94, 0x87, 0xEE, 
	0x0D, 0xA9, 0x6A, 0x60, 0x8A, 0x0E, 0x4E, 0x04, 0xEF, 0x68, 
	0x97, 0x4B, 0x60, 0xB9, 0x88, 0xEE, 0x18, 0x3F, 0xF4, 0xC8, 
	0xB8, 0xB7, 0x29, 0x99, 0x58, 0x34, 0xBC, 0xB5, 0x45, 0xAB, 
	0xE3, 0x8F, 0x91, 0x72, 0x6E, 0x88, 0x08, 0x63, 0xFE, 0xB5, 
	0xEB, 0x7D, 0x91, 0x0A, 0x6A, 0x15, 0x84, 0x34, 0x4B, 0x7E, 
	0x1F, 0x30, 0x09, 0x4E, 0xCE, 0xF3, 0x8F, 0x67, 0x2F, 0x20, 
	0x93, 0xD6, 0x34, 0x0E, 0xE5, 0xA9, 0x34, 0x9C, 0xA7, 0x0B, 
	0x21, 0x1B, 0x6C, 0x54, 0xE9, 0xC4, 0x23, 0x87, 0xE3, 0xFD, 
	0x8F, 0x6E, 0x90, 0x49, 0x18, 0xFC, 0x52, 0x29, 0x85, 0x4C, 
	0x00, 0xA4, 0xC6, 0xF3, 0x9F, 0x86, 0xCE, 0xD6, 0x69, 0x16, 
	0xDF, 0x4A, 0xE7, 0x70, 0xF8, 0x86, 0x10, 0x8C, 0x85, 0xF4, 
	0x17, 0x91, 0x0B, 0xEB, 0xEF, 0x84, 0x87, 0x20, 0x04, 0x33, 
	0x0F, 0x09, 0x96, 0x46, 0xCC, 0xE3, 0x39, 0x19, 0x77, 0x7A, 
	0x37, 0x62, 0xA1, 0x74, 0x9A, 0x04, 0x37, 0xCB, 0x2C, 0x62, 
	0x29, 0xEE, 0x9A, 0xCA, 0x96, 0x7C, 0x0B, 0x87, 0x75, 0x96, 
	0x12, 0xBB, 0x4A, 0xCE, 0x2F, 0x1F, 0x79, 0x13, 0x44, 0x0C, 
	0x8E, 0xC3, 0xE8, 0x86, 0x55, 0x47, 0xF3, 0xCB, 0x00, 0x24, 
	0x05, 0x70, 0x6B, 0x48, 0xE1, 0x32, 0xD0, 0xC8, 0x44, 0x50, 
	0x29, 0xA7, 0x21, 0xE8, 0x08, 0xE6, 0xAB, 0x70, 0xFB, 0x50, 
	0xE1, 0x6E, 0x02, 0x5B, 0x71, 0xA8, 0x8E, 0x54, 0xBC, 0xDD, 
	0xC1, 0xED, 0x0F, 0xF7, 0x09, 0xEC, 0x50, 0x08, 0x74, 0xE0, 
	0xA3, 0x3A, 0xDC, 0x4D, 0xE0, 0x7E, 0x37, 0x52, 0xF5, 0x43, 
	0x15, 0xD3, 0x0E, 0x0C, 0x50, 0xE8, 0x3D, 0x71, 0x18, 0x27, 
	0x7A, 0xFE, 0x80, 0xF9, 0xCC, 0xE5, 0x15, 0xD1, 0xB8, 0xC2, 
	0xE7, 0xE9, 0x7A, 0x05, 0x27, 0x21, 0x4F, 0x89, 0x70, 0x4E, 
	0xC8, 0xDC, 0x88, 0x58, 0xE0, 0x4F, 0x3F, 0x9E, 0x0E, 0x01, 
	0xE2, 0xD7, 0xBA, 0x04, 0x97, 0x8D, 0xE2, 0xE9, 0x8E, 0x9E, 
	0x8C, 0x02, 0x66, 0xE4, 0xB0, 0x0F, 0x60, 0x23, 0xD1, 0x1A, 
	0xA2, 0x35, 0x45, 0x6B, 0x89, 0xD6, 0x16, 0xED, 0x40, 0xB4, 
	0x43, 0xD1, 0x8E, 0xA8, 0x35, 0xC4, 0x7A, 0x43, 0xAC, 0x37, 
	0xC4, 0x7A, 0x43, 0xAC, 0x37, 0xC4, 0x7A, 0x43, 0xAC, 0x37, 
	0xC4, 0x7A, 0x83, 0xAF, 0x07, 0x2F, 0x3A, 0x11, 0xED, 0xA9, 
	0x68, 0xCF, 0x44, 0x4B, 0xDB, 0xED, 0xC7, 0x13, 0x41, 0x99, 
	0x27, 0x16, 0xB8, 0x86, 0x3F, 0x19, 0xC5, 0x93, 0x59, 0x3C, 
	0x59, 0x3B, 0xE4, 0x72, 0x22, 0xD7, 0xC6, 0x89, 0xAF, 0xA6, 
	0xBF, 0x13, 0x42, 0x6C, 0xB9, 0x4F, 0x40, 0xB6, 0xCE, 0x0D, 
	0x28, 0xFA, 0x94, 0x2D, 0xCF, 0x9F, 0x4F, 0xB3, 0xA6, 0x18, 
	0xE6, 0x31, 0xFD, 0xA0, 0x50, 0xCD, 0x53, 0xAD, 0x1F, 0xF6, 
	0xA8, 0xBF, 0xDF, 0xBE, 0x43, 0xCE, 0x5E, 0x4F, 0xF1, 0xA4, 
	0x38, 0x3B, 0x69, 0xB8, 0xD2, 0x25, 0x1C, 0xA8, 0x44, 0xE1, 
	0x32, 0x8E, 0x82, 0x2C, 0x4E, 0x76, 0x52, 0x31, 0x49, 0x7F, 
	0xF2, 0xE6, 0x03, 0xB2, 0x08, 0xFE, 0x29, 0x54, 0x83, 0x8C, 
	0x9F, 0xC6, 0x19, 0x6C, 0x55, 0x19, 0xCF, 0x01, 0x3C, 0xF4, 
	0xE5, 0x77, 0xB8, 0xEB, 0xA0, 0xFD, 0x1B, 0xFE, 0xFD, 0x17, 
	0x09, 0xE6, 0x67, 0x4B, 0x54, 0x1A, 0x13, 0x03, 0xB0, 0xEC, 
	0xA0, 0xB6, 0xE8, 0xA0, 0x58, 0x72, 0x50, 0x2C, 0x38, 0x10, 
	0xD3, 0x49, 0x5D, 0x90, 0x09, 0x92, 0xAB, 0x43, 0x6B, 0x88, 
	0xD6, 0x14, 0xAD, 0x25, 0x5A, 0x5B, 0xB4, 0x03, 0xD1, 0x0E, 
	0x45, 0x3B, 0x12, 0xED, 0xA1, 0x68, 0xB1, 0x1C, 0xB2, 0x83, 
	0xB8, 0xC8, 0x07, 0xEA, 0xF0, 0x37, 0x0A, 0xED, 0x55, 0x9B, 
	0xBD, 0x8D, 0xEF, 0xC1, 0x37, 0x72, 0x8E, 0xF9, 0x51, 0x90, 
	0x06, 0xFF, 0x4B, 0x79, 0xAE, 0xF3, 0xAF, 0xC5, 0x3A, 0xA2, 
	0x08, 0x27, 0xDD, 0xBC, 0x3E, 0xBD, 0xE8, 0x30, 0xE5, 0x31, 
	0x61, 0x90, 0x91, 0x44, 0x92, 0x0F, 0xE9, 0xEA, 0x2D, 0x8B, 
	0xB2, 0xFE, 0x0D, 0xCB, 0x5E, 0x87, 0x0C, 0x1F, 0x4F, 0x1F, 
	0x2E, 0x7C, 0x98, 0xF1, 0x54, 0x2C, 0x49, 0x59, 0x76, 0xD2, 
	0x61, 0x6A, 0xA6, 0x3C, 0x2E, 0xE2, 0xA4, 0x83, 0x11, 0x27, 
	0x92, 0x82, 0x48, 0xCA, 0x14, 0xD6, 0xC7, 0xA1, 0x2C, 0x4B, 
	0x82, 0xEB, 0x75, 0xC6, 0x3A, 0x91, 0x9A, 0xCD, 0xA2, 0xB9, 
	0xE2, 0x08, 0xD4, 0xAC, 0x86, 0xE1, 0x2D, 0xC7, 0x20, 0xC6, 
	0x04, 0xCA, 0xC7, 0x38, 0xF2, 0xC2, 0xC0, 0xFB, 0x32, 0xDE, 
	0x27, 0xB6, 0xE4, 0x45, 0xB4, 0xDF, 0xCD, 0xBA, 0xFB, 0xB2, 
	0xD2, 0x4F, 0xE1, 0xE6, 0x15, 0x86, 0x70, 0xE7, 0x89, 0x3F, 
	0x40, 0x66, 0xD3, 0x51, 0x9C, 0x7D, 0xD5, 0x5B, 0x27, 0x90, 
	0x3A, 0x8F, 0xE5, 0x55, 0x1C, 0xE0, 0x55, 0x48, 0x7E, 0xAA, 
	0xB0, 0xB8, 0x82, 0x84, 0x2D, 0xBB, 0xAC, 0xC8, 0x95, 0x13, 
	0x58, 0xC0, 0x5D, 0x79, 0x2C, 0xBF, 0xF0, 0xE9, 0x8F, 0xAC, 
	0x42, 0xFA, 0x1E, 0x7F, 0x61, 0x00, 0xE0, 0x79, 0x2D, 0xEF, 
	0xF6, 0xEE, 0xC9, 0x13, 0xC6, 0xB2, 0xB1, 0x89, 0x73, 0xBA, 
	0x1D, 0xA7, 0x47, 0x7F, 0x2A, 0x38, 0x07, 0x83, 0xC1, 0x26, 
	0x4E, 0xBD, 0x86, 0xD3, 0x4B, 0x5E, 0x6F, 0xEA, 0xA1, 0xB0, 
	0x81, 0x07, 0x77, 0x8B, 0x8C, 0x09, 0x33, 0x00, 0x61, 0x98, 
	0x58, 0x5D, 0x3A, 0xDD, 0x79, 0xED, 0x1F, 0xD3, 0x8E, 0xBC, 
	0xCC, 0xB2, 0xD5, 0xF8, 0xE0, 0xE0, 0xFE, 0xFE, 0xBE, 0x7F, 
	0x6F, 0xF6, 0xE3, 0xE4, 0x86, 0x52, 0xF7, 0x83, 0xF4, 0x0E, 
	0x82, 0x68, 0x03, 0xB5, 0x8B, 0x98, 0x95, 0x47, 0xF7, 0xAC, 
	0xC3, 0xCD, 0xE0, 0x65, 0x49, 0x18, 0xDC, 0xDE, 0xC8, 0x8A, 
	0x5A, 0x75, 0x03, 0x18, 0x26, 0xF2, 0xAC, 0xEF, 0xAE, 0x56, 
	0x2C, 0xF2, 0xCF, 0x96, 0x41, 0xE8, 0x77, 0xAA, 0x78, 0xD2, 
	0xEC, 0x0F, 0xF7, 0xF6, 0x4D, 0xE8, 0xA7, 0xA5, 0xB7, 0xB0, 
	0x7E, 0x00, 0x67, 0x60, 0x72, 0xFE, 0xFE, 0xF2, 0xED, 0x04, 
	0x0E, 0xE8, 0xCF, 0x13, 0xCD, 0xF9, 0x7C, 0xA4, 0xC3, 0x4F, 
	0xB7, 0xAB, 0x64, 0xC7, 0x9F, 0xF7, 0xF6, 0x3A, 0x84, 0x16, 
	0xF5, 0x22, 0x07, 0xD1, 0x0A, 0xAB, 0x05, 0x8F, 0x81, 0x3F, 
	0x96, 0x09, 0xD5, 0x27, 0xB9, 0xFB, 0x59, 0x8D, 0xE0, 0xAE, 
	0x56, 0xED, 0xA7, 0x58, 0x1B, 0x18, 0xCB, 0xA4, 0xDF, 0x31, 
	0x88, 0xB4, 0xFA, 0xEA, 0xC8, 0x2A, 0x1C, 0x81, 0x6B, 0x36, 
	0x4E, 0x31, 0x47, 0x4B, 0x67, 0x9F, 0xE7, 0x2F, 0x8B, 0xA7, 
	0xB1, 0x0C, 0xFA, 0x07, 0x39, 0x4A, 0x36, 0xBA, 0x13, 0xF9, 
	0xE8, 0x3A, 0x39, 0x38, 0x96, 0x2B, 0x8C, 0x27, 0x6F, 0xAF, 
	0xC3, 0x8A, 0xA1, 0x59, 0x3F, 0x61, 0x2B, 0x38, 0x37, 0x59, 
	0x47, 0xFE, 0x06, 0x16, 0x85, 0xE9, 0xB5, 0xD9, 0xF7, 0xC9, 
	0xF4, 0x94, 0x4B, 0xE8, 0x4D, 0xB8, 0xC2, 0xD2, 0xD3, 0xA5, 
	0xDC, 0x65, 0x5D, 0x19, 0x18, 0xCC, 0x14, 0xD5, 0xAB, 0xCB, 
	0xEC, 0xF5, 0x89, 0xE5, 0x3E, 0x71, 0x3C, 0xB9, 0x74, 0xB3, 
	0x65, 0x7F, 0x11, 0xC6, 0xA0, 0x1B, 0x1D, 0xCD, 0x41, 0x8C, 
	0xF6, 0x43, 0x16, 0xDD, 0x64, 0xCB, 0x9E, 0xAE, 0x74, 0xE5, 
	0x5F, 0x65, 0x87, 0xB6, 0xD8, 0x84, 0x74, 0xB2, 0xB4, 0x64, 
	0xC5, 0xA9, 0x4D, 0x3A, 0xD6, 0x41, 0x69, 0x51, 0x85, 0x44, 
	0x7D, 0x54, 0xCB, 0x65, 0xCF, 0xE6, 0xE5, 0xD3, 0x58, 0x9B, 
	0x4C, 0xB2, 0x97, 0xF9, 0x85, 0x64, 0xCC, 0x93, 0x59, 0x09, 
	0x98, 0x05, 0xF5, 0x28, 0x2A, 0x58, 0xC0, 0x53, 0x23, 0x6A, 
	0xA3, 0xBA, 0x25, 0xF2, 0xED, 0x29, 0xFB, 0x21, 0x88, 0x4C, 
	0x22, 0xAA, 0xB0, 0xAA, 0x0B, 0x3C, 0xC9, 0x6A, 0xF6, 0xB0, 
	0x02, 0x3B, 0xC0, 0xCE, 0xCF, 0x30, 0x53, 0xE7, 0x16, 0x90, 
	0x7B, 0x00, 0x0F, 0x32, 0x34, 0xD0, 0x2B, 0x16, 0x32, 0x4C, 
	0x9F, 0x65, 0x2F, 0x74, 0xD3, 0x14, 0x88, 0x32, 0x3F, 0x23, 
	0x5B, 0x3C, 0x43, 0xC6, 0x5B, 0x3D, 0xEC, 0x48, 0xE7, 0xEC, 
	0xAA, 0x20, 0x74, 0x16, 0xAF, 0x1E, 0x7E, 0x8C, 0x4C, 0x10, 
	0xA5, 0x3B, 0x92, 0xB9, 0xF8, 0x63, 0x5A, 0xD0, 0xB9, 0x88, 
	0x52, 0xCC, 0x2D, 0x4B, 0x4A, 0x80, 0x46, 0x12, 0xD4, 0x9C, 
	0x3C, 0x32, 0x26, 0x13, 0x4D, 0x0D, 0xC0, 0xC9, 0x83, 0xA3, 
	0xE9, 0xEF, 0x9F, 0x2E, 0x4F, 0xFE, 0x3E, 0x39, 0x7B, 0x7F, 
	0xF1, 0xE7, 0x1F, 0x53, 0x27, 0x00, 0x7F, 0x0F, 0x16, 0x1D, 
	0x52, 0x35, 0x31, 0x95, 0xAE, 0xDC, 0x48, 0xF8, 0xFA, 0x22, 
	0xF2, 0x88, 0x97, 0x1E, 0xF1, 0x02, 0xBF, 0x81, 0xE0, 0x7F, 
	0x73, 0x2A, 0xD6, 0x7F, 0x36, 0xA7, 0x82, 0x75, 0x83, 0xBD, 
	0x3D, 0xB4, 0xF1, 0xB7, 0x6F, 0xE7, 0x1F, 0xEF, 0x66, 0x6C, 
	0xBE, 0xB7, 0xC7, 0x5B, 0xB0, 0x7D, 0xE5, 0x71, 0x16, 0x40, 
	0x4F, 0xFB, 0x65, 0xD2, 0xD1, 0xED, 0x1A, 0x70, 0xA6, 0xCD, 
	0x15, 0xC5, 0x4F, 0xDE, 0x44, 0x53, 0x74, 0x6B, 0x35, 0x50, 
	0x1C, 0x16, 0xA6, 0x4C, 0x02, 0x7E, 0x7F, 0x49, 0x60, 0x53, 
	0x4C, 0x74, 0xF2, 0x48, 0x77, 0x92, 0x07, 0xE9, 0x26, 0xBB, 
	0x8A, 0x03, 0xCC, 0xBA, 0xDB, 0x5C, 0x87, 0xF0, 0x56, 0x94, 
	0x0D, 0xBF, 0xC1, 0x33, 0x2A, 0xEF, 0xA2, 0x3E, 0x9F, 0x2A, 
	0x71, 0x8F, 0x7C, 0xA2, 0x7E, 0xFC, 0x4C, 0x8A, 0xB0, 0xF7, 
	0x3F, 0x6B, 0x96, 0x3C, 0x4C, 0xC1, 0xD5, 0x3C, 0x48, 0x18, 
	0x4E, 0xC2, 0xB0, 0x23, 0xC3, 0xCE, 0x48, 0xC1, 0xA9, 0xC1, 
	0x10, 0x4E, 0x72, 0x14, 0x89, 0x6D, 0xE1, 0x24, 0xA0, 0xFF, 
	0x68, 0x96, 0xCC, 0xC5, 0x5E, 0xBC, 0x0B, 0xD2, 0xE0, 0x3A, 
	0x08, 0x83, 0xEC, 0x61, 0x22, 0xD3, 0x33, 0x1C, 0xA1, 0x4E, 
	0x90, 0x26, 0xDE, 0x84, 0xA9, 0x9F, 0xB1, 0xC9, 0x4A, 0x06, 
	0xB8, 0xB7, 0x10, 0x03, 0x5C, 0x69, 0xDF, 0xBE, 0x75, 0xF8, 
	0xC3, 0x64, 0x36, 0x57, 0xD4, 0x42, 0x91, 0x13, 0x7C, 0x42, 
	0x1C, 0x42, 0xE5, 0xF4, 0x38, 0x43, 0x6C, 0xF3, 0x97, 0x8D, 
	0xFE, 0x78, 0x36, 0x57, 0x8B, 0x28, 0xE2, 0xFC, 0xFF, 0x88, 
	0xB5, 0x0C, 0x7C, 0x9F, 0x45, 0x72, 0x29, 0x07, 0xED, 0xE1, 
	0x8A, 0x18, 0x10, 0x46, 0x4A, 0xDE, 0x51, 0x92, 0x82, 0xA3, 
	0xAA, 0xEC, 0x41, 0xD6, 0x51, 0x1E, 0xEF, 0x93, 0x20, 0x63, 
	0x67, 0xD3, 0x69, 0xA7, 0x64, 0x96, 0xE5, 0xDE, 0x00, 0x53, 
	0x81, 0xAF, 0x0C, 0xF8, 0xCA, 0x8E, 0xCE, 0x3F, 0x7A, 0x39, 
	0x67, 0x19, 0x70, 0xF6, 0xC8, 0xA5, 0x7A, 0xD4, 0xC7, 0x33, 
	0xAC, 0x63, 0xEA, 0x78, 0x89, 0x32, 0xE0, 0xD9, 0xD6, 0xF0, 
	0x65, 0xD2, 0x5C, 0x35, 0xE1, 0x79, 0x08, 0x89, 0xE2, 0xD0, 
	0x9A, 0xAB, 0x56, 0x65, 0x8E, 0x3D, 0x9E, 0x8D, 0x34, 0x75, 
	0x04, 0x4F, 0x83, 0xF1, 0x6C, 0x00, 0xD7, 0x3D, 0x78, 0x1A, 
	0xC2, 0x38, 0x3C, 0xEA, 0x16, 0x3C, 0xEB, 0xDA, 0x78, 0x06, 
	0x91, 0x1F, 0xB2, 0x4A, 0xEC, 0x20, 0xF6, 0x43, 0xB8, 0xA1, 
	0xE2, 0x7D, 0x49, 0xB7, 0x69, 0x1A, 0x3C, 0xC0, 0x4A, 0x83, 
	0xE6, 0xC2, 0x42, 0x8B, 0x86, 0x0E, 0xC5, 0x90, 0x81, 0xAB, 
	0x81, 0xAC, 0x89, 0xCF, 0xB0, 0xD8, 0x84, 0xB5, 0xC8, 0x81, 
	0x01, 0xAC, 0xD9, 0xC0, 0x02, 0xC1, 0x4D, 0x82, 0xDB, 0xC4, 
	0x31, 0xB0, 0x36, 0x18, 0xDA, 0x1C, 0x6E, 0x13, 0x1C, 0xBA, 
	0xF0, 0x4C, 0xCC, 0xC1, 0xA4, 0x11, 0x3C, 0x03, 0x15, 0x7B, 
	0x04, 0x8C, 0xE2, 0x9C, 0x11, 0xE0, 0xA7, 0x85, 0x40, 0xD1, 
	0x36, 0x4D, 0x90, 0x13, 0x29, 0x5A, 0x90, 0x26, 0xC3, 0x4C, 
	0x13, 0x28, 0x1A, 0x90, 0x26, 0x0F, 0x47, 0x43, 0xE8, 0x00, 
	0x49, 0x78, 0x00, 0x36, 0x74, 0xE8, 0xA0, 0x3A, 0x2C, 0xC8, 
	0x9E, 0x0D, 0x5C, 0x02, 0x44, 0x6D, 0x0D, 0x12, 0x67, 0xCB, 
	0x80, 0xCE, 0x08, 0x47, 0x80, 0x33, 0x14, 0xC8, 0x3C, 0x44, 
	0xE1, 0x41, 0x61, 0x88, 0x14, 0x34, 0x89, 0x30, 0x1B, 0x9E, 
	0x2D, 0x94, 0x03, 0x79, 0xB4, 0x91, 0x02, 0x74, 0x2C, 0xEA, 
	0x00, 0x1E, 0x73, 0x38, 0x04, 0x20, 0x76, 0x80, 0xE3, 0x91, 
	0xAD, 0xAB, 0xE6, 0x00, 0xC8, 0x0D, 0x60, 0x0D, 0x20, 0x04, 
	0x0A, 0x20, 0xFB, 0x40, 0xE7, 0x1D, 0xC3, 0x00, 0x72, 0x43, 
	0x18, 0x39, 0x14, 0x5A, 0x47, 0x38, 0xA8, 0x1D, 0x15, 0x3D, 
	0x44, 0xD3, 0x19, 0x20, 0x05, 0x3C, 0x8F, 0x90, 0x20, 0x64, 
	0xF7, 0x06, 0xF2, 0x3A, 0x82, 0x49, 0xA3, 0xA1, 0xA1, 0x5A, 
	0xA3, 0xC1, 0xFC, 0xC9, 0x49, 0xEF, 0x83, 0xCC, 0x5B, 0x82, 
	0x6B, 0x79, 0x18, 0x5C, 0xAC, 0xB9, 0xF2, 0xE8, 0xB3, 0x85, 
	0xBB, 0x0E, 0xB3, 0x31, 0xC4, 0x93, 0x68, 0x56, 0xC0, 0xE7, 
	0x33, 0x7D, 0xAE, 0xF0, 0x90, 0x49, 0xA9, 0x8D, 0x9C, 0xE0, 
	0x55, 0x59, 0x7D, 0xFC, 0x3A, 0x16, 0x53, 0xF4, 0x79, 0xAF, 
	0x36, 0x5D, 0x9B, 0x1F, 0x18, 0xEA, 0x43, 0x3E, 0x6A, 0x34, 
	0x46, 0x75, 0x1C, 0x4D, 0xBE, 0x8E, 0xE1, 0x12, 0x92, 0x3C, 
	0xE0, 0x2F, 0x4F, 0x10, 0x1A, 0x18, 0xD4, 0x25, 0x65, 0xEF, 
	0xE3, 0xC6, 0xD2, 0x27, 0x11, 0xF1, 0xAA, 0xEC, 0x78, 0x41, 
	0x42, 0x89, 0xF5, 0xA3, 0x57, 0xE1, 0x48, 0xF5, 0x2A, 0x0C, 
	0xA8, 0x49, 0x13, 0xFD, 0x81, 0x01, 0xC9, 0x9E, 0x50, 0x00, 
	0x26, 0x55, 0x94, 0xF7, 0x8A, 0xDC, 0x34, 0xC1, 0x9C, 0x0B, 
	0xC3, 0x45, 0xA1, 0x17, 0xCF, 0x05, 0x92, 0xE0, 0xCB, 0xF5, 
	0x99, 0xD3, 0xCE, 0x56, 0x75, 0x74, 0x1A, 0xE4, 0x7A, 0xA6, 
	0xA6, 0x34, 0x74, 0xD2, 0xD4, 0x70, 0xCF, 0xA6, 0x29, 0xDF, 
	0x55, 0x0C, 0xA0, 0xDA, 0xA2, 0x1B, 0xC0, 0x80, 0x67, 0x0C, 
	0xF0, 0xEE, 0x5C, 0x43, 0x8E, 0xF9, 0xC5, 0x21, 0xB6, 0x61, 
	0x13, 0xF1, 0xD6, 0x10, 0xAD, 0xB5, 0xBB, 0x18, 0x4D, 0xA5, 
	0x99, 0x35, 0x09, 0x06, 0x46, 0xDF, 0x16, 0x3C, 0x42, 0x82, 
	0x94, 0x33, 0xA5, 0x1B, 0x76, 0x1B, 0x17, 0xBA, 0xA0, 0x6E, 
	0x8A, 0xD6, 0xDE, 0x9D, 0x0B, 0xA2, 0x53, 0x21, 0xDC, 0x6D, 
	0xBA, 0x93, 0x09, 0x92, 0xE7, 0x8C, 0x18, 0x76, 0xC1, 0x88, 
	0xD6, 0xAA, 0x8E, 0xE1, 0xEE, 0x84, 0x0D, 0xB0, 0xC1, 0x73, 
	0x74, 0xAD, 0xDE, 0x70, 0x54, 0xA8, 0xC0, 0x32, 0x4A, 0x15, 
	0xD8, 0xC3, 0x36, 0xCA, 0x87, 0x5B, 0x28, 0xEF, 0xE4, 0xBF, 
	0xFA, 0x70, 0x24, 0x70, 0xAA, 0xFF, 0x04, 0x8B, 0x36, 0xF8, 
	0x37, 0x60, 0x31, 0xAD, 0x36, 0xF1, 0x46, 0xFF, 0x44, 0xBC, 
	0xC3, 0x51, 0x0B, 0x4A, 0x73, 0x1B, 0xCA, 0x16, 0x5B, 0xD9, 
	0x35, 0x53, 0xF5, 0xF4, 0xC2, 0x23, 0xCA, 0xED, 0x62, 0x16, 
	0x0E, 0xB1, 0x45, 0xF8, 0x4D, 0xB4, 0x5D, 0x5B, 0xC3, 0xFD, 
	0xB6, 0x3B, 0xE6, 0x2A, 0xFB, 0xF6, 0xB6, 0x80, 0xD1, 0xAA, 
	0x91, 0xAE, 0x0E, 0xDE, 0xD6, 0xD0, 0xCA, 0xE8, 0x87, 0x19, 
	0xC6, 0x92, 0x7B, 0x8D, 0xDD, 0x43, 0xBB, 0x25, 0xA4, 0x18, 
	0x95, 0xED, 0x7A, 0xF8, 0x53, 0x34, 0xBA, 0x7A, 0x6D, 0x4B, 
	0xF6, 0x86, 0x5A, 0x0B, 0x19, 0x7D, 0x58, 0x92, 0xB1, 0x5A, 
	0x35, 0xA4, 0xFF, 0xB4, 0xCF, 0x90, 0xBA, 0x7E, 0x4A, 0x43, 
	0x7A, 0x43, 0x43, 0xA8, 0x8C, 0x7F, 0xBB, 0x8A, 0x46, 0xF5, 
	0x88, 0x65, 0xD8, 0x5B, 0xC8, 0x7C, 0x5F, 0x45, 0x3F, 0x10, 
	0xAE, 0xF5, 0xE6, 0x26, 0x38, 0xA4, 0xF3, 0xC4, 0x46, 0x8A, 
	0x76, 0xE1, 0xB4, 0xA5, 0xD7, 0x8E, 0xAC, 0x1F, 0x57, 0x5E, 
	0x3D, 0x24, 0xF6, 0x86, 0xF8, 0x49, 0x51, 0x93, 0x86, 0x51, 
	0x0D, 0x85, 0x66, 0x9B, 0x50, 0x83, 0xDD, 0x85, 0xB2, 0x1A, 
	0xE6, 0x1A, 0xEA, 0x1B, 0xF4, 0x30, 0xFD, 0x2A, 0x94, 0x68, 
	0xFC, 0x44, 0x80, 0xEB, 0x9A, 0x46, 0x7D, 0xEF, 0xF5, 0x46, 
	0xC6, 0x0E, 0xCE, 0xB5, 0x1B, 0xAE, 0x6E, 0x1D, 0xD7, 0x53, 
	0x9E, 0x97, 0x7B, 0x13, 0x31, 0xC5, 0x84, 0x4B, 0xC1, 0x0A, 
	0xAE, 0x02, 0x58, 0xC3, 0x50, 0xC4, 0x9D, 0xB4, 0xC8, 0xCE, 
	0x83, 0x3C, 0x3B, 0xCF, 0xB3, 0x9D, 0x8C, 0x7D, 0x6D, 0xA8, 
	0xA8, 0xE6, 0x69, 0x96, 0xD9, 0x1D, 0x68, 0xFF, 0x11, 0xF4, 
	0xE0, 0x27, 0xC7, 0x01, 0x59, 0x05, 0xAD, 0xEA, 0xB9, 0x91, 
	0xB7, 0x8C, 0x13, 0xB8, 0x0F, 0xDF, 0xC2, 0x8D, 0x03, 0x19, 
	0x17, 0xF5, 0x31, 0x5E, 0x62, 0x5B, 0xC4, 0x51, 0xD6, 0xBB, 
	0xE7, 0x35, 0x53, 0xB8, 0xEB, 0xC5, 0xA1, 0x9F, 0x03, 0xB1, 
	0x38, 0x09, 0x20, 0xD3, 0x86, 0x0B, 0x9F, 0x93, 0xF4, 0x11, 
	0x17, 0xBE, 0x56, 0x85, 0xEB, 0xCF, 0xC4, 0x83, 0x4B, 0x69, 
	0xA9, 0x9D, 0x84, 0x04, 0x7C, 0x9E, 0xDB, 0xCD, 0x54, 0xB1, 
	0x6B, 0x3D, 0x9B, 0x18, 0xBD, 0x6C, 0xF4, 0x9B, 0x09, 0x11, 
	0x64, 0x4D, 0x5D, 0x50, 0xF9, 0xA6, 0x2C, 0x82, 0x6D, 0x7C, 
	0xA1, 0x5E, 0x54, 0xFE, 0xF2, 0xF2, 0x62, 0xB3, 0xF8, 0x37, 
	0x58, 0x61, 0x1D, 0x9D, 0xAC, 0xDB, 0x8B, 0x13, 0x9F, 0xA1, 
	0x96, 0xF8, 0x94, 0x4D, 0x99, 0xB3, 0xAE, 0xDE, 0x10, 0xD9, 
	0xC9, 0x45, 0x06, 0x89, 0xFD, 0xE0, 0xAE, 0xA8, 0x16, 0xC0, 
	0x2D, 0xFA, 0x89, 0xAE, 0xDC, 0x4C, 0x4D, 0x14, 0x71, 0x35, 
	0xE7, 0xC5, 0x22, 0x13, 0xAE, 0xD5, 0x58, 0x65, 0xA8, 0x54, 
	0x87, 0xF6, 0x8F, 0xB0, 0x7C, 0x20, 0xD1, 0xFD, 0x70, 0x52, 
	0x4A, 0x00, 0x29, 0xCD, 0xEA, 0xAB, 0x53, 0x31, 0xCE, 0x38, 
	0xA2, 0xE2, 0x90, 0x83, 0xEF, 0xCF, 0x02, 0xCF, 0x0D, 0x7B, 
	0x6E, 0x18, 0xDC, 0x44, 0xE3, 0x2C, 0x5E, 0x39, 0xF2, 0xF1, 
	0x8B, 0xFD, 0x6E, 0x07, 0xF8, 0x53, 0xBA, 0xFB, 0xD2, 0x5E, 
	0x74, 0x9D, 0xAE, 0x1C, 0xE9, 0xE8, 0x00, 0xD1, 0x1E, 0x4B, 
	0x47, 0xC0, 0x98, 0x14, 0xF8, 0x13, 0x39, 0xBC, 0x0E, 0xFD, 
	0x4F, 0xBC, 0x7A, 0x2B, 0x51, 0x81, 0x04, 0x41, 0xF2, 0xF1, 
	0x7E, 0x97, 0x6A, 0x6B, 0x85, 0x4F, 0x2A, 0x5D, 0xF9, 0xE8, 
	0x00, 0xD6, 0x1C, 0xCB, 0x6A, 0x1C, 0x85, 0x41, 0xC4, 0xB8, 
	0x1B, 0xA6, 0x93, 0x8D, 0x0A, 0x20, 0x20, 0xC4, 0x72, 0x9A, 
	0xA8, 0xFF, 0xE5, 0x3D, 0x5E, 0x32, 0xE0, 0xF6, 0xE7, 0x05, 
	0x83, 0x02, 0x75, 0x5E, 0x19, 0x5C, 0x84, 0xB1, 0x9B, 0x8D, 
	0xE9, 0x1D, 0x9B, 0xFC, 0x24, 0x4A, 0x13, 0xA9, 0xA2, 0xA6, 
	0xF5, 0x62, 0xB5, 0x1C, 0x47, 0x5F, 0xD8, 0xC3, 0x1A, 0x5F, 
	0x14, 0xD0, 0x45, 0x76, 0x9F, 0x04, 0xA0, 0x02, 0xC5, 0xBE, 
	0x52, 0xD1, 0x1F, 0xB1, 0x9F, 0x2D, 0x83, 0xB4, 0x4F, 0xE4, 
	0x14, 0x47, 0x56, 0x9E, 0x00, 0x65, 0xA2, 0xBA, 0xE5, 0x5D, 
	0x38, 0x84, 0xCD, 0x15, 0x1E, 0xD5, 0xEA, 0x70, 0x4E, 0x98, 
	0xEF, 0x30, 0xB7, 0x6A, 0xC0, 0xA2, 0x76, 0xB4, 0x38, 0x93, 
	0x55, 0xAA, 0x73, 0x62, 0xE5, 0x30, 0xA3, 0xCA, 0x61, 0xC8, 
	0x99, 0x45, 0xCC, 0xFC, 0x2A, 0x9E, 0xA9, 0xA1, 0xA0, 0x45, 
	0x18, 0xAE, 0x93, 0x2A, 0x02, 0x2F, 0x4C, 0xA8, 0x50, 0x52, 
	0xBD, 0x8B, 0x13, 0x07, 0xB0, 0xD9, 0x7D, 0x4E, 0x32, 0xA5, 
	0xFA, 0x41, 0x59, 0x50, 0x5D, 0xDF, 0xCA, 0x65, 0x35, 0x15, 
	0x3A, 0x4F, 0x8A, 0x1A, 0x37, 0xBD, 0x2B, 0xCD, 0x5E, 0xA1, 
	0xD2, 0x50, 0x32, 0x94, 0x4A, 0xD7, 0x8E, 0x43, 0x12, 0x05, 
	0xD8, 0xF0, 0xD5, 0x88, 0xDD, 0x4B, 0x7F, 0xAE, 0xB0, 0x30, 
	0xD0, 0xE1, 0x25, 0xC4, 0x74, 0x2C, 0x01, 0xDF, 0x6A, 0xA8, 
	0x6A, 0x6A, 0x4D, 0xFA, 0xC9, 0x24, 0x7C, 0xA9, 0x8F, 0x35, 
	0xA5, 0xA5, 0x74, 0x59, 0xD6, 0x88, 0xE3, 0xFA, 0x1A, 0xAA, 
	0x78, 0x31, 0xD5, 0x17, 0x6D, 0x0C, 0x62, 0x6C, 0x58, 0xCC, 
	0x5B, 0xE2, 0x3B, 0x50, 0xDA, 0x67, 0x39, 0x16, 0x6E, 0x3C, 
	0x60, 0x7B, 0x1F, 0xE2, 0x60, 0xCD, 0x4C, 0x4E, 0x55, 0x35, 
	0xC1, 0x0A, 0x70, 0x61, 0xAD, 0xB3, 0xD8, 0x29, 0x55, 0x5D, 
	0x66, 0x49, 0x98, 0x4B, 0x5D, 0xDD, 0x3B, 0xB2, 0xF8, 0xA6, 
	0x2D, 0x64, 0x89, 0x74, 0x71, 0x55, 0x7C, 0xEB, 0x20, 0x73, 
	0x0E, 0xDD, 0xCD, 0xB2, 0xF2, 0xF1, 0xC5, 0xD5, 0x18, 0xB6, 
	0xC6, 0xF5, 0x31, 0xAF, 0x30, 0xAB, 0xA8, 0x42, 0xAB, 0xD4, 
	0x60, 0x4B, 0x9D, 0x1B, 0x49, 0x5F, 0x5C, 0xA1, 0xF5, 0x85, 
	0x69, 0x2A, 0x80, 0x5A, 0xA5, 0xDB, 0xAE, 0x16, 0xBA, 0x71, 
	0xD2, 0xD9, 0xE2, 0x06, 0xC2, 0xD4, 0x2C, 0x9C, 0x6F, 0xD4, 
	0xB7, 0xCD, 0xE3, 0xF0, 0xA5, 0x2C, 0xF5, 0x25, 0x90, 0x4C, 
	0x76, 0x1A, 0x45, 0xF8, 0xBC, 0xFA, 0x2D, 0x7E, 0x8E, 0xA7, 
	0xEB, 0xEB, 0x88, 0x65, 0xD2, 0xA5, 0x9B, 0x7E, 0x19, 0xFF, 
	0x10, 0xE3, 0x29, 0x2D, 0xAC, 0x30, 0x5E, 0x01, 0x7C, 0x9F, 
	0x71, 0x7D, 0x37, 0xC6, 0xD1, 0x82, 0xBC, 0xB2, 0xC4, 0xBF, 
	0x8C, 0xAD, 0x16, 0x97, 0x20, 0xCE, 0x71, 0x20, 0xEE, 0x7E, 
	0x6D, 0x7E, 0x3C, 0x01, 0xE7, 0xAA, 0x02, 0x8E, 0x26, 0xBA, 
	0x55, 0xDB, 0x81, 0x14, 0x1D, 0xAB, 0xE6, 0x2D, 0x67, 0xC3, 
	0x69, 0x27, 0x4C, 0x5A, 0x0D, 0xA7, 0x55, 0x71, 0x61, 0xEE, 
	0xEB, 0xA8, 0x12, 0x8F, 0xCA, 0x3E, 0x8F, 0x48, 0xDE, 0x92, 
	0x79, 0x5F, 0xAE, 0xE3, 0xAF, 0x18, 0xD6, 0x44, 0xE1, 0x93, 
	0x7B, 0x26, 0x4C, 0xBC, 0xB8, 0xBA, 0x2E, 0x02, 0xCB, 0x46, 
	0x9D, 0x8E, 0xC7, 0x16, 0x5A, 0xCE, 0xFC, 0x97, 0xFB, 0xA2, 
	0x18, 0xB9, 0x3F, 0xDE, 0xE7, 0xF5, 0xBB, 0x7D, 0xF0, 0x64, 
	0x8C, 0x0B, 0xF9, 0x0C, 0x64, 0x1A, 0x15, 0x88, 0x75, 0xDD, 
	0xE2, 0x11, 0x0B, 0x1B, 0x55, 0xFE, 0xEF, 0x9A, 0xBB, 0xBA, 
	0x64, 0x22, 0xB7, 0x8D, 0x1F, 0x40, 0x72, 0xE0, 0x3E, 0x8C, 
	0xA5, 0x80, 0xA2, 0x70, 0xEF, 0x3A, 0x8C, 0xBD, 0x2F, 0x8E, 
	0x54, 0x32, 0x86, 0x3B, 0xBB, 0xB3, 0x85, 0xD8, 0x4B, 0x39, 
	0x5D, 0xC6, 0xF7, 0x60, 0x25, 0x51, 0x63, 0x84, 0xA0, 0x4E, 
	0x5C, 0x72, 0x93, 0xF0, 0x69, 0x68, 0x1F, 0x7D, 0x52, 0xD1, 
	0xB1, 0x31, 0x57, 0xC8, 0xA4, 0x35, 0x5F, 0x94, 0x36, 0x5C, 
	0xED, 0x6E, 0xD3, 0xD5, 0x88, 0xFB, 0x4F, 0x79, 0xB5, 0x39, 
	0x2C, 0x2D, 0x50, 0x83, 0x6E, 0x77, 0xBA, 0x92, 0xF5, 0xB0, 
	0xAB, 0x93, 0xD7, 0xDD, 0x6D, 0xF5, 0x3A, 0x5E, 0x06, 0xAA, 
	0xF3, 0xD8, 0x99, 0xB2, 0x24, 0x70, 0x43, 0x45, 0xE6, 0x67, 
	0xEE, 0x5D, 0xB5, 0x3A, 0x5D, 0x56, 0xCD, 0xA3, 0x3C, 0xA1, 
	0xDA, 0x52, 0x25, 0x8F, 0x48, 0x3F, 0x49, 0xFD, 0xDD, 0x90, 
	0xF6, 0xCB, 0x04, 0xD6, 0x25, 0xF5, 0xFD, 0xB9, 0xC4, 0x2D, 
	0xE8, 0xF0, 0x64, 0xAE, 0x25, 0x90, 0xB3, 0x30, 0xBC, 0x09, 
	0xBC, 0x4F, 0xC5, 0x0B, 0x27, 0xFA, 0x8D, 0xF2, 0x5D, 0xB8, 
	0x65, 0x34, 0x8F, 0x9D, 0x63, 0x19, 0x6B, 0xBE, 0x34, 0x3A, 
	0x9F, 0xD1, 0x30, 0x36, 0x11, 0x36, 0xDA, 0x7C, 0xD2, 0x79, 
	0x66, 0x70, 0x4F, 0xB7, 0x95, 0x6F, 0x95, 0x93, 0xF0, 0x58, 
	0x7B, 0xA9, 0x0F, 0x20, 0xC6, 0x3B, 0x72, 0x7E, 0x6E, 0x79, 
	0xF9, 0xAB, 0xA4, 0xCA, 0x31, 0xE1, 0xE2, 0xC7, 0x33, 0x1A, 
	0xFC, 0x7D, 0xF6, 0xBD, 0x44, 0x04, 0x3D, 0x7D, 0x50, 0x03, 
	0xA0, 0x9B, 0x69, 0x63, 0x5D, 0x69, 0xC1, 0x19, 0x27, 0x52, 
	0x27, 0xC5, 0xEF, 0xBD, 0xF0, 0x3B, 0x98, 0x9F, 0x44, 0x4D, 
	0xA7, 0x13, 0x1D, 0x9E, 0x41, 0xBB, 0x8E, 0xC1, 0x7E, 0xDB, 
	0x55, 0xDC, 0x32, 0x98, 0x2B, 0x21, 0x50, 0x1C, 0xC2, 0x17, 
	0x13, 0xB3, 0x98, 0x8F, 0xF5, 0x5D, 0xDF, 0xEF, 0x54, 0xF9, 
	0x87, 0xF3, 0x4B, 0xAE, 0xBC, 0x32, 0x72, 0x27, 0x33, 0x50, 
	0x10, 0xA4, 0x2F, 0xB0, 0x11, 0xD2, 0x46, 0xA0, 0x4B, 0x61, 
	0x53, 0xD4, 0xB3, 0x0C, 0xF1, 0xE5, 0xFF, 0x2C, 0x9D, 0x57, 
	0x33, 0x0D, 0xBE, 0xF3, 0xC4, 0x00, 0x84, 0x56, 0xB4, 0x17, 
	0x26, 0x46, 0x0C, 0x9F, 0xBE, 0x7D, 0xD3, 0x68, 0x23, 0xD6, 
	0x86, 0xB9, 0xB7, 0xFA, 0x93, 0xEF, 0x2A, 0xAF, 0xFE, 0xB2, 
	0x88, 0xB4, 0xA7, 0x14, 0xFB, 0x3A, 0x25, 0x4A, 0xF5, 0x71, 
	0x7D, 0x2E, 0x8E, 0x7F, 0xC7, 0xC7, 0xD7, 0xBB, 0x93, 0x59, 
	0x75, 0xAE, 0x1A, 0xCE, 0xC9, 0xA2, 0x41, 0xD5, 0xA2, 0xE5, 
	0x04, 0xB8, 0xE8, 0xC8, 0x18, 0x79, 0xEA, 0xDC, 0x42, 0x78, 
	0xAE, 0xE2, 0xE0, 0xD9, 0x12, 0x18, 0xDE, 0x07, 0x13, 0xFA, 
	0xC9, 0x87, 0x70, 0xFA, 0x91, 0xEF, 0x40, 0xD5, 0xA5, 0x48, 
	0x88, 0x85, 0x65, 0x35, 0xD8, 0x9E, 0x3C, 0xD0, 0x92, 0xC6, 
	0x1B, 0xA9, 0x88, 0xDE, 0x48, 0x29, 0xD5, 0x8D, 0x8D, 0x93, 
	0x5A, 0x36, 0x76, 0xBB, 0xF9, 0x15, 0xD5, 0x9B, 0x24, 0x7D, 
	0x6E, 0xF4, 0x74, 0x96, 0xF4, 0xB9, 0x3B, 0x31, 0xFF, 0x22, 
	0xF2, 0xD9, 0xD7, 0x39, 0xDF, 0x31, 0xF9, 0x7D, 0xEC, 0x13, 
	0x90, 0x7A, 0xF6, 0x4D, 0x52, 0x01, 0xCE, 0xDF, 0xCC, 0x54, 
	0xF5, 0x5B, 0x1D, 0x84, 0xEE, 0xC6, 0x38, 0xEE, 0x63, 0x30, 
	0x99, 0x87, 0x86, 0xEF, 0x14, 0x2C, 0xB7, 0x05, 0x05, 0x65, 
	0x6F, 0xEF, 0xF9, 0xF1, 0xFA, 0x46, 0x57, 0x9B, 0x56, 0xF6, 
	0xE0, 0xC7, 0xE1, 0x5B, 0x68, 0x4B, 0xCC, 0xEB, 0x44, 0x70, 
	0x69, 0x80, 0x2D, 0xB0, 0xB7, 0xF7, 0x4B, 0x50, 0xC6, 0xB8, 
	0xBD, 0x3D, 0x72, 0x80, 0xDD, 0x5F, 0x17, 0x12, 0x9A, 0xEF, 
	0xBD, 0x32, 0x54, 0xCB, 0x17, 0x85, 0x6A, 0xCD, 0x29, 0x50, 
	0x13, 0x2A, 0xF2, 0xDA, 0xB4, 0x2E, 0x9F, 0x00, 0x71, 0x0B, 
	0x36, 0xED, 0x63, 0xF5, 0x0D, 0xE7, 0xC6, 0x5B, 0xD6, 0xA4, 
	0x9E, 0x38, 0x54, 0xB2, 0x93, 0x6D, 0x9B, 0x16, 0x36, 0xA4, 
	0x57, 0xDF, 0x25, 0xFC, 0xF5, 0x65, 0x34, 0x31, 0x9C, 0xA8, 
	0xB2, 0x89, 0xE1, 0xA2, 0x9B, 0x2F, 0x8B, 0x36, 0xF6, 0x71, 
	0x80, 0x9A, 0xE6, 0xAC, 0x85, 0xED, 0x51, 0x0A, 0x38, 0x6D, 
	0x58, 0x2D, 0x69, 0xC6, 0xAA, 0xED, 0x53, 0x9E, 0x3F, 0x13, 
	0x92, 0x32, 0xFA, 0x4F, 0xCA, 0xA8, 0xEF, 0xB4, 0xBD, 0xA2, 
	0xCF, 0x6F, 0x59, 0x21, 0x4F, 0x3F, 0xFC, 0xC9, 0x49, 0x92, 
	0xB8, 0x0F, 0xFD, 0x20, 0xA5, 0x76, 0x53, 0x22, 0xB8, 0x76, 
	0xF8, 0x2F, 0x9B, 0x50, 0x50, 0xD1, 0xB8, 0x09, 0x53, 0xEF, 
	0x26, 0xBD, 0xB8, 0xA7, 0xE3, 0xC1, 0x89, 0xF7, 0x66, 0xFC, 
	0x10, 0x78, 0x32, 0x41, 0x17, 0x88, 0x17, 0x52, 0x5C, 0x04, 
	0xC6, 0x73, 0xB0, 0xC1, 0xF9, 0x51, 0x73, 0x6D, 0xAE, 0xD6, 
	0x73, 0x9E, 0x57, 0x84, 0x8D, 0x80, 0x53, 0xA7, 0x7D, 0x3E, 
	0x57, 0xCF, 0xBF, 0x77, 0x92, 0x24, 0x8D, 0x1E, 0x6E, 0xBE, 
	0xC9, 0xB9, 0xB8, 0xE7, 0x60, 0xDE, 0x40, 0x86, 0xFA, 0x38, 
	0x81, 0xA8, 0xB7, 0xC1, 0xEC, 0x06, 0xC1, 0x2D, 0xDC, 0xF6, 
	0x74, 0x9E, 0x6A, 0xED, 0x3A, 0x79, 0x53, 0x8B, 0xDB, 0xE7, 
	0x52, 0x64, 0x85, 0x1C, 0x47, 0x5D, 0x61, 0x2D, 0x68, 0xD1, 
	0xD1, 0x8E, 0xE3, 0xBD, 0x3D, 0xF1, 0xED, 0xE8, 0xEC, 0x6E, 
	0xDE, 0x50, 0x67, 0x39, 0xF0, 0x9C, 0x22, 0x3F, 0x76, 0xCB, 
	0x79, 0xFF, 0x58, 0x89, 0xC0, 0xD8, 0x79, 0x97, 0x8C, 0x1D, 
	0x1F, 0x6B, 0xDF, 0xBE, 0xF9, 0x2D, 0x9A, 0x80, 0xB4, 0x7E, 
	0x03, 0xA6, 0x57, 0x59, 0x6F, 0xF7, 0x2B, 0x14, 0x68, 0xD2, 
	0x69, 0x19, 0xD3, 0xE7, 0xE3, 0x58, 0xD9, 0x22, 0xD9, 0xF9, 
	0xBF, 0x4B, 0x1A, 0xBF, 0xC2, 0x5F, 0x7C, 0x3C, 0xD1, 0x5E, 
	0x1A, 0x63, 0x7D, 0xBB, 0xC3, 0x82, 0xBB, 0xEF, 0xEA, 0xB2, 
	0xAB, 0x9F, 0xE2, 0x6F, 0x95, 0xF3, 0xD7, 0xED, 0x3E, 0x3D, 
	0x51, 0xF9, 0xF4, 0xA9, 0xFA, 0x6D, 0x53, 0xFE, 0xA6, 0xFF, 
	0x31, 0xAF, 0x29, 0xD0, 0x07, 0x48, 0xD5, 0xE8, 0x77, 0x1D, 
	0xFB, 0x0F, 0x8F, 0x54, 0x3A, 0x5A, 0xB8, 0xB7, 0x41, 0xF8, 
	0x30, 0x3E, 0xC1, 0xF4, 0x58, 0x3D, 0x87, 0x58, 0xC3, 0xB0, 
	0x76, 0xA4, 0xA6, 0x6E, 0x94, 0xF6, 0x52, 0x48, 0x9A, 0x17, 
	0x4E, 0xEF, 0x9E, 0x5D, 0x7F, 0x09, 0xB2, 0xDE, 0x2A, 0xC1, 
	0x1A, 0x98, 0x87, 0x5F, 0x10, 0xF7, 0x5C, 0xFF, 0xF3, 0x3A, 
	0xCD, 0xC6, 0xEC, 0xAB, 0xEB, 0x65, 0xCE, 0x13, 0x96, 0xD1, 
	0x6A, 0xF9, 0xEF, 0xD2, 0x94, 0x1E, 0xA5, 0x6B, 0x2A, 0x97, 
	0x8D, 0xA5, 0x17, 0x26, 0xFD, 0x91, 0xD2, 0x38, 0x0C, 0x7C, 
	0x49, 0x87, 0xAC, 0x5E, 0x5A, 0x41, 0x3E, 0x05, 0x9B, 0x6B, 
	0x6C, 0x63, 0xE7, 0xD6, 0x4D, 0x6E, 0x82, 0x68, 0x2C, 0x19, 
	0xB6, 0xA4, 0x49, 0xF0, 0xCF, 0x91, 0xF0, 0x9B, 0xF0, 0x9B, 
	0x24, 0x5E, 0x47, 0x3E, 0x27, 0x37, 0x7E, 0x71, 0x7D, 0x88, 
	0x7F, 0x1D, 0x81, 0xB3, 0x97, 0xB8, 0x7E, 0xB0, 0x4E, 0xF9, 
	0xF2, 0x4D, 0xEA, 0xFD, 0xF0, 0x5A, 0x7A, 0xCC, 0xA9, 0x03, 
	0x3D, 0x41, 0x19, 0x3F, 0xEE, 0x83, 0x3F, 0x4D, 0x24, 0x26, 
	0x22, 0xD9, 0xA0, 0x28, 0xBD, 0x60, 0xF4, 0xA7, 0xE4, 0x15, 
	0x58, 0xA3, 0xBF, 0x25, 0xC3, 0x39, 0x60, 0xCB, 0x45, 0x8C, 
	0x57, 0x56, 0xA9, 0x04, 0xE7, 0x31, 0xFC, 0xDC, 0x11, 0x56, 
	0x06, 0x11, 0x2F, 0x2C, 0xC2, 0x62, 0xBC, 0xDE, 0xB4, 0xF0, 
	0x8E, 0xD7, 0x6B, 0x54, 0xDE, 0x86, 0x0A, 0x5C, 0xDF, 0x5B, 
	0xF8, 0xA3, 0x56, 0x79, 0x17, 0x67, 0xB0, 0x82, 0xD7, 0xCC, 
	0x42, 0xB6, 0xC8, 0x9C, 0x52, 0xF5, 0x87, 0xF4, 0xA7, 0x4D, 
	0xF5, 0x46, 0xAB, 0xD8, 0x85, 0xD4, 0x2D, 0x3A, 0x6A, 0x63, 
	0x36, 0x4C, 0x80, 0xB2, 0x17, 0x32, 0x37, 0x11, 0x94, 0x9F, 
	0xA4, 0x56, 0xF6, 0x96, 0x16, 0xCC, 0x2B, 0x0C, 0x4D, 0xD8, 
	0x36, 0x27, 0xBE, 0x40, 0x17, 0x2E, 0xE6, 0xF5, 0xB2, 0x78, 
	0x05, 0xE6, 0xA3, 0xAF, 0x03, 0x5B, 0x26, 0x2F, 0x0D, 0x94, 
	0xB9, 0xA8, 0x85, 0x4A, 0x16, 0xCE, 0xAB, 0xEA, 0x5C, 0x2A, 
	0x94, 0x9E, 0x93, 0xD5, 0xC0, 0xBF, 0x00, 0x1F, 0x7A, 0x58, 
	0xAE, 0x05, 0xDD, 0x6E, 0x57, 0x83, 0xC6, 0x2C, 0xFF, 0xDA, 
	0x72, 0x24, 0xDE, 0xBD, 0xC7, 0xFF, 0x24, 0xB5, 0xAB, 0xF3, 
	0xA5, 0xA7, 0xEB, 0x4C, 0x7A, 0x5C, 0x89, 0xFF, 0xFF, 0x32, 
	0x96, 0x16, 0xC1, 0x57, 0xE6, 0xE3, 0x62, 0xFC, 0x2A, 0x79, 
	0x2C, 0x11, 0x9B, 0x54, 0xD9, 0x14, 0xCF, 0x2D, 0xAE, 0x67, 
	0x9D, 0x9D, 0xBC, 0xB1, 0xB5, 0x9C, 0xBA, 0x24, 0xC8, 0x17, 
	0x8E, 0xA8, 0xC3, 0x3A, 0x89, 0x73, 0xDE, 0x26, 0x2F, 0xC1, 
	0x7C, 0xFC, 0xEF, 0x8F, 0x2E, 0xE7, 0x20, 0x8A, 0x23, 0x58, 
	0xBE, 0xC5, 0x4B, 0x73, 0xED, 0x58, 0x80, 0x93, 0x0C, 0x23, 
	0xBE, 0xD1, 0x95, 0xC4, 0x37, 0xBA, 0x4D, 0xB1, 0x71, 0x62, 
	0x9B, 0xDF, 0xE2, 0x97, 0x74, 0x8F, 0x95, 0xDA, 0x03, 0xAF, 
	0x2B, 0x80, 0xE5, 0xFA, 0xCC, 0xCF, 0x1E, 0x2B, 0x05, 0x5D, 
	0xA7, 0x14, 0x18, 0x44, 0x5D, 0x2C, 0x16, 0x4E, 0x2E, 0x98, 
	0x26, 0x19, 0x60, 0x21, 0xC3, 0x11, 0x2C, 0xE5, 0xDD, 0xB6, 
	0xED, 0xCA, 0xFD, 0xBB, 0xB2, 0xB7, 0xB9, 0xA3, 0xB7, 0x99, 
	0x52, 0xEC, 0x9B, 0xB6, 0x6D, 0xB3, 0x92, 0x1E, 0x73, 0x95, 
	0xE7, 0xEB, 0x2B, 0x1E, 0xA5, 0xB7, 0xEF, 0xD0, 0xFF, 0xBC, 
	0x65, 0x7E, 0xE0, 0x4A, 0x14, 0x0D, 0xC1, 0x05, 0x85, 0xBD, 
	0x0B, 0xED, 0xA2, 0xB2, 0xA5, 0x5F, 0x82, 0xDB, 0x55, 0x9C, 
	0x64, 0x6E, 0x04, 0xC1, 0xF1, 0x49, 0xE6, 0x77, 0x54, 0xFC, 
	0x24, 0xAD, 0xA7, 0xF3, 0x4F, 0xD3, 0x30, 0x1F, 0xA2, 0xCF, 
	0xB2, 0x9C, 0xFF, 0x03, 0x89, 0xDB, 0x38, 0x3C, 0xF7, 0x40, 
	0x00, 0x00, 
};

	// Default Controller Configuration (len=278)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x01, 0x04, 0x06, 0x05, 0x61, 0x01, 0x00, 0x01, 0x00, 0x06, 
	0x05, 0x61, 0x01, 0x00, 0x02, 0x00, 0x06, 0x05, 0x61, 0x01, 
	0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 0x04, 0x00, 
	0x06, 0x05, 0x61, 0x01, 0x00, 0x05, 0x00, 0x06, 0x05, 0x61, 
	0x01, 0x00, 0x06, 0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 0x07, 
	0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 0x08, 0x00, 0x06, 0x05, 
	0x61, 0x01, 0x00, 0x09, 0x00, 0x06, 0x05, 0x61, 0x01, 0x00, 
	0x0A, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x01, 0x00, 0x06, 
	0x05, 0x61, 0x00, 0x00, 0x02, 0x00, 0x06, 0x05, 0x61, 0x00, 
	0x00, 0x03, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x04, 0x00, 
	0x06, 0x05, 0x61, 0x00, 0x00, 0x05, 0x00, 0x06, 0x05, 0x61, 
	0x00, 0x00, 0x06, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x07, 
	0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 0x08, 0x00, 0x06, 0x05, 
	0x61, 0x00, 0x00, 0x09, 0x00, 0x06, 0x05, 0x61, 0x00, 0x00, 
	0x0A, 0x00, 0x04, 0x03, 0x21, 0x12, 0x00, 0x04, 0x03, 0x21, 
	0x0E, 0x00, 0x09, 0x08, 0x41, 0x07, 0x00, 0x04, 0x51, 0x07, 
	0x01, 0x04, 0x04, 0x03, 0x21, 0x10, 0x00, 0x04, 0x03, 0x21, 
	0x0F, 0x00, 0x05, 0x04, 0x4F, 0x00, 0x01, 0x01, 0x0B, 0x0A, 
	0x61, 0x04, 0x00, 0x00, 0x00, 0x71, 0x04, 0x00, 0x02, 0x00, 
	0x0B, 0x0A, 0x61, 0x04, 0x00, 0x01, 0x00, 0x71, 0x04, 0x00, 
	0x03, 0x00, 0x0B, 0x0A, 0x61, 0x01, 0x00, 0x00, 0x00, 0x71, 
	0x01, 0x00, 0x15, 0x00, 0x0B, 0x0A, 0x61, 0x01, 0x00, 0x18, 
	0x00, 0x71, 0x01, 0x00, 0x19, 0x00, 0x12, 0x11, 0x61, 0x03, 
	0x00, 0x00, 0x00, 0x61, 0x03, 0x01, 0x00, 0x00, 0x61, 0x03, 
	0x02, 0x00, 0x00, 0x0F, 0x06, 0x0F, 0x0E, 0x41, 0x11, 0x00, 
	0x00, 0x61, 0x13, 0x01, 0x02, 0x00, 0x61, 0x0A, 0x00, 0x01, 
	0x00, 0xFF, 0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 
	0x05, 0x01, 0xC0, 0xA8, 0x0A, 0xF0, 0x00, 0x00, 
};

#endif


SkaarhojBI8 buttons;
SkaarhojBI8 buttons2;
SkaarhojBI8 buttons3;
SkaarhojBI8 buttons4;
#define SK_HWEN_SLIDER 1
#define SK_HWEN_SSWMENU 1
#define SK_HWEN_MENU 1