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
static const unsigned char htmlSVG[] PROGMEM = "<svg viewBox=\"0 0 2268 1064\" width=\"100%\" id=\"ctrlimg\"><defs><linearGradient id=\"grad1\" x1=\"0%\" y1=\"0%\" x2=\"0%\" y2=\"100%\"><stop offset=\"0%\" style=\"stop-color:rgb(0,0,208);stop-opacity:1\" /><stop offset=\"40%\" style=\"stop-color:rgb(0,0,150);stop-opacity:1\" /><stop offset=\"100%\" style=\"stop-color:rgb(0,0,190);stop-opacity:1\" /></linearGradient></defs><rect width=\"2108\" height=\"1030\" x=80 y=17 style=\"fill:url(#grad1);\" /><rect width=\"2108\" height=\"10\" x=80 y=85 style=\"fill:rgb(0,0,100);\" /><rect width=\"2108\" height=\"10\" x=80 y=979 style=\"fill:rgb(0,0,100);\" /><rect width=\"90\" height=\"1064\" x=0 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /><rect width=\"90\" height=\"1064\" x=2178 y=0 rx=\"30\" ry=\"30\" style=\"fill:rgb(0,0,0);\" /></svg>";

	// JavaScript generic code (script.min.js) + configuration data for controller / devices. GZIP'ed
	// Orig size: 16613, GZIP size: 5486 
static const unsigned char JSscriptData[] PROGMEM = {
	
	0x1F, 0x8B, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
	0xB5, 0x3B, 0x6D, 0x73, 0x9B, 0x48, 0x93, 0xDF, 0x9F, 0x5F, 
	0xC1, 0x92, 0x5A, 0x5B, 0x9C, 0x90, 0xCC, 0xAB, 0x24, 0x0B, 
	0xCB, 0x39, 0xDB, 0x49, 0xD6, 0xAE, 0x8D, 0x37, 0xAE, 0x55, 
	0x5E, 0xF6, 0x4E, 0xA5, 0xDA, 0xC2, 0x30, 0xB2, 0x48, 0x30, 
	0xE8, 0x00, 0xD9, 0xF1, 0x39, 0xFE, 0xEF, 0xD7, 0xDD, 0x33, 
	0xA0, 0x01, 0x49, 0x8E, 0x92, 0x7D, 0x2E, 0xA9, 0x68, 0x98, 
	0x9E, 0x99, 0x7E, 0x9F, 0x9E, 0x9E, 0x86, 0xDC, 0xF9, 0x99, 
	0x72, 0xFE, 0x29, 0x18, 0x4D, 0x26, 0xA6, 0x6E, 0x1B, 0x86, 
	0x3E, 0x30, 0x7B, 0xBA, 0x6A, 0xAA, 0xBA, 0x35, 0xD5, 0x01, 
	0xE2, 0xB8, 0x56, 0xD7, 0xE1, 0x30, 0xAB, 0x84, 0xF5, 0x0C, 
	0xA7, 0x3B, 0xE0, 0x30, 0xBB, 0x84, 0xF5, 0xDD, 0x7E, 0xD7, 
	0xE2, 0x30, 0xA7, 0x84, 0x1D, 0x1A, 0x87, 0xDD, 0x1E, 0x87, 
	0xB9, 0x25, 0xCC, 0x34, 0x7A, 0x62, 0x5A, 0xAF, 0x02, 0x59, 
	0xA6, 0x53, 0xD2, 0xE8, 0x57, 0x40, 0xBB, 0xD7, 0x2B, 0x89, 
	0x0C, 0x2A, 0xA0, 0x6B, 0x1E, 0x96, 0x54, 0x0E, 0x2B, 0x60, 
	0xAF, 0x6F, 0x96, 0x64, 0x4C, 0xA3, 0x84, 0xA2, 0x24, 0x3D, 
	0xC3, 0x5C, 0x93, 0x84, 0x60, 0x0D, 0x49, 0x08, 0xD6, 0x90, 
	0x84, 0x60, 0x0D, 0x49, 0x08, 0x56, 0x97, 0x84, 0x40, 0x4D, 
	0x49, 0x08, 0xD8, 0x94, 0x84, 0x80, 0x4D, 0x49, 0x08, 0xD8, 
	0x94, 0x84, 0xB3, 0x5D, 0x49, 0x62, 0x1E, 0xF6, 0x7B, 0xA5, 
	0x7A, 0xCE, 0x3E, 0xBC, 0x6F, 0x80, 0x69, 0xF2, 0xC9, 0x87, 
	0xF7, 0xEF, 0x4A, 0xF8, 0xC0, 0xB6, 0x01, 0x6C, 0xD9, 0x87, 
	0x00, 0xAE, 0xD8, 0x1F, 0xB8, 0xC0, 0x01, 0xC1, 0x4E, 0xEB, 
	0xF3, 0xEC, 0x43, 0x58, 0x7E, 0x56, 0x9F, 0x47, 0xB0, 0x57, 
	0x0D, 0x99, 0x68, 0xF1, 0xF8, 0xFC, 0xE2, 0x8D, 0x60, 0xC0, 
	0x01, 0x6E, 0x7B, 0xB6, 0x6E, 0xBB, 0x2E, 0x80, 0xE3, 0x28, 
	0x64, 0x19, 0xC0, 0x71, 0xC0, 0xD2, 0x1D, 0xDB, 0xD5, 0xAD, 
	0xBE, 0x01, 0xF0, 0x5B, 0x3F, 0x2B, 0x2E, 0x59, 0xB2, 0x54, 
	0x75, 0xD7, 0x80, 0x21, 0x1B, 0xB9, 0xB6, 0x0D, 0xDD, 0x32, 
	0x60, 0xD1, 0xAB, 0x28, 0x5F, 0xC4, 0xFE, 0x83, 0x0A, 0x96, 
	0x12, 0x43, 0x83, 0x41, 0x39, 0x04, 0x36, 0xEB, 0x57, 0x0B, 
	0x2A, 0xA8, 0x45, 0xD0, 0xA9, 0xF7, 0xAF, 0x3B, 0xF0, 0xD8, 
	0x90, 0xDD, 0xBD, 0xCD, 0x0B, 0x72, 0x5A, 0xF5, 0xE4, 0xFD, 
	0xEB, 0x4B, 0x55, 0x37, 0x91, 0x5D, 0xE4, 0xE6, 0x21, 0x2F, 
	0xD8, 0xAD, 0x2A, 0x4D, 0x7C, 0xB3, 0x4C, 0xD0, 0xBD, 0x27, 
	0x26, 0xCC, 0xBD, 0xCA, 0xD2, 0x9B, 0xCC, 0xBF, 0x55, 0xC6, 
	0x59, 0xA0, 0xEA, 0x1D, 0x53, 0xEF, 0x58, 0xFA, 0x44, 0x55, 
	0x75, 0xF5, 0x3C, 0x8D, 0x43, 0xE5, 0x55, 0x7A, 0x9F, 0xC0, 
	0xF3, 0xFB, 0xF4, 0xE6, 0x26, 0x66, 0xF0, 0x70, 0xF6, 0x10, 
	0x40, 0x3B, 0x45, 0xC4, 0xB4, 0x94, 0xDD, 0x45, 0xEC, 0x7E, 
	0x6D, 0x69, 0x73, 0xD6, 0xDD, 0xC1, 0x55, 0x76, 0xF3, 0x9D, 
	0x59, 0x27, 0x1F, 0xFE, 0x52, 0xDE, 0x2D, 0x8B, 0xC5, 0xB2, 
	0x10, 0x13, 0xED, 0xE7, 0x39, 0x21, 0xE0, 0x6F, 0x59, 0xBA, 
	0x5C, 0x28, 0x27, 0xF5, 0xEE, 0xE9, 0x1A, 0xEE, 0x0F, 0x8B, 
	0xBC, 0xC8, 0x18, 0xC8, 0xF8, 0x3B, 0x7B, 0x40, 0xB3, 0x20, 
	0x13, 0x8E, 0xDE, 0x71, 0x37, 0x0E, 0x2B, 0x6F, 0xA2, 0x38, 
	0xAE, 0xE6, 0x58, 0x9B, 0xE7, 0xC0, 0xEF, 0xDA, 0x14, 0xE4, 
	0xB0, 0x41, 0xA7, 0xB7, 0x22, 0xD2, 0x1C, 0x2D, 0xC9, 0xF4, 
	0xB6, 0x23, 0x10, 0x54, 0xA4, 0x19, 0x97, 0x57, 0xCA, 0xB8, 
	0xE0, 0xEB, 0xFA, 0xB4, 0xA7, 0x71, 0x60, 0x17, 0x63, 0x59, 
	0x03, 0x5D, 0x6D, 0x95, 0xAB, 0x15, 0x1A, 0xD0, 0x56, 0x48, 
	0xC0, 0x45, 0x0A, 0x70, 0x4C, 0x75, 0x5A, 0x76, 0x5F, 0x27, 
	0x21, 0x76, 0x0C, 0xF0, 0x75, 0xF0, 0xDA, 0x93, 0x65, 0x91, 
	0x2A, 0x17, 0x49, 0xC1, 0xB2, 0x3B, 0x3F, 0x56, 0x05, 0xC5, 
	0x3F, 0xFD, 0x24, 0x4C, 0x6F, 0xA9, 0x57, 0x11, 0x7C, 0x87, 
	0xE4, 0xDF, 0xCD, 0x66, 0x35, 0x86, 0x6A, 0xF4, 0xCF, 0xE2, 
	0x68, 0xC1, 0x09, 0x5B, 0x35, 0x70, 0x9A, 0x14, 0x59, 0x1A, 
	0xF3, 0x91, 0xCE, 0x40, 0x48, 0x7B, 0xB6, 0x2C, 0x50, 0xC9, 
	0xA5, 0x83, 0x00, 0x17, 0x52, 0xF7, 0xCD, 0xFB, 0x53, 0xA9, 
	0xF7, 0x3E, 0xF3, 0x93, 0x3C, 0x2A, 0xA2, 0x34, 0x01, 0x11, 
	0x1F, 0x90, 0x19, 0x34, 0xCE, 0x21, 0xD1, 0xA8, 0x8D, 0x5E, 
	0xA5, 0xB9, 0xB4, 0xEC, 0x0A, 0xF6, 0x9B, 0x72, 0xE9, 0x07, 
	0x19, 0x60, 0xA6, 0x00, 0x86, 0xE2, 0x5C, 0xD1, 0x26, 0x04, 
	0x95, 0xA4, 0x8B, 0x35, 0x87, 0x13, 0x2A, 0x16, 0x9A, 0xE5, 
	0x9A, 0x78, 0x9B, 0xC2, 0xC4, 0x95, 0x94, 0x7F, 0xB2, 0x20, 
	0xCD, 0x42, 0x8E, 0x55, 0x23, 0xB4, 0x96, 0xB1, 0x1A, 0x1D, 
	0xA7, 0xCB, 0x2C, 0x60, 0x95, 0x05, 0x26, 0xEA, 0xE5, 0xC1, 
	0x6B, 0x05, 0x76, 0x37, 0xB5, 0xB0, 0x9F, 0x69, 0x1F, 0x98, 
	0xA2, 0x2D, 0xFB, 0xB6, 0x68, 0x1D, 0xD1, 0xBA, 0xA2, 0xED, 
	0x21, 0x0B, 0x1D, 0xD9, 0x7C, 0x9D, 0x1F, 0x36, 0x1E, 0xF4, 
	0x3E, 0xFA, 0xD9, 0x83, 0x52, 0x44, 0xB7, 0x51, 0x72, 0xA3, 
	0x58, 0xC6, 0xAF, 0x0D, 0x88, 0x0B, 0x90, 0x1D, 0xAD, 0x4C, 
	0x56, 0x0A, 0x23, 0x32, 0x93, 0x01, 0xFF, 0xCC, 0x9D, 0x9C, 
	0xB3, 0x2F, 0x56, 0x29, 0x1F, 0xD3, 0x78, 0x79, 0x4B, 0xA6, 
	0x33, 0x64, 0xF0, 0xA9, 0x1F, 0xFB, 0x49, 0x50, 0xC1, 0x2D, 
	0xA7, 0x1C, 0x78, 0xCB, 0xEE, 0x58, 0x9C, 0x4B, 0xF3, 0x25, 
	0x3B, 0xFF, 0xE9, 0x17, 0xDC, 0x09, 0x26, 0x82, 0x12, 0x68, 
	0x38, 0xFA, 0xAA, 0x62, 0x94, 0x45, 0xAB, 0x7E, 0x8A, 0x16, 
	0x08, 0x7A, 0xF5, 0xF1, 0xB5, 0xCA, 0x5D, 0x89, 0x5C, 0xDF, 
	0xC2, 0xD8, 0xFD, 0x06, 0x82, 0x21, 0xCB, 0x25, 0x83, 0x6A, 
	0x1C, 0xCF, 0xB6, 0xE1, 0x46, 0x64, 0xB8, 0xF2, 0x61, 0x02, 
	0x2E, 0x81, 0xC8, 0x60, 0xAE, 0x9C, 0x7C, 0x6D, 0x6F, 0x57, 
	0xF3, 0x7A, 0x62, 0x9E, 0x0D, 0xB8, 0xD3, 0x60, 0x49, 0xF2, 
	0xD8, 0x5C, 0x9E, 0x8B, 0x2C, 0xAA, 0xBA, 0x30, 0x3C, 0x66, 
	0x49, 0x9E, 0x66, 0xCA, 0x6F, 0x7E, 0x94, 0x10, 0x54, 0x92, 
	0xCD, 0x08, 0xAF, 0xE1, 0xB7, 0x47, 0xBF, 0xA6, 0xC5, 0x9B, 
	0x01, 0x34, 0x53, 0xB1, 0x72, 0xBE, 0x2C, 0x0A, 0x1E, 0xF9, 
	0xE4, 0x55, 0xE6, 0x81, 0x6B, 0x50, 0xD3, 0xE3, 0x4D, 0xDF, 
	0xA5, 0xE6, 0x90, 0xF7, 0x4C, 0x43, 0xB4, 0x96, 0x68, 0xC5, 
	0x64, 0x73, 0xC0, 0x5B, 0x4B, 0xF4, 0x6D, 0xB1, 0xDA, 0x15, 
	0xF3, 0xFB, 0x96, 0x5B, 0xAE, 0x17, 0x0B, 0x1C, 0x31, 0xD3, 
	0x42, 0x88, 0x60, 0xE9, 0xD3, 0x3C, 0x2A, 0x98, 0x6C, 0x5B, 
	0x99, 0x31, 0x40, 0x6D, 0xFC, 0x8E, 0xED, 0x80, 0xB7, 0x90, 
	0xBB, 0xF0, 0xD6, 0x12, 0xAD, 0x23, 0xDA, 0x1E, 0x6F, 0x1D, 
	0x31, 0xEE, 0x88, 0x75, 0x8E, 0x58, 0xE7, 0x0A, 0xB8, 0x2B, 
	0xD6, 0xB9, 0x62, 0x9D, 0x2B, 0xD6, 0xF5, 0xC4, 0x78, 0x4F, 
	0xAC, 0xEB, 0x8B, 0x7E, 0x5F, 0xF4, 0x07, 0xD4, 0x17, 0x4E, 
	0xFA, 0x36, 0x9A, 0x51, 0x3C, 0x72, 0x56, 0x06, 0xFA, 0xCD, 
	0xBF, 0xBD, 0xF5, 0xD7, 0x60, 0xDC, 0x3C, 0x12, 0xE8, 0x7C, 
	0xC9, 0x24, 0xAB, 0x52, 0xB0, 0xF3, 0xF3, 0x42, 0x02, 0x8D, 
	0xFD, 0x62, 0x99, 0xF9, 0xE8, 0xB8, 0xA5, 0x26, 0xFE, 0x48, 
	0xB3, 0x5B, 0xD8, 0xAF, 0xE0, 0xA2, 0x2C, 0xE7, 0x83, 0x2C, 
	0x94, 0x9C, 0xEE, 0xD4, 0xCF, 0x72, 0x0A, 0x1F, 0xDF, 0xDF, 
	0x95, 0x90, 0xA5, 0x7C, 0x84, 0x6C, 0x24, 0x55, 0xDE, 0xFB, 
	0x71, 0x8C, 0xE7, 0x09, 0x9E, 0xAA, 0xE2, 0xD0, 0x57, 0xAB, 
	0x33, 0x5C, 0xE5, 0x89, 0xC0, 0x01, 0x76, 0xCB, 0x65, 0x7C, 
	0x97, 0x95, 0xCB, 0x68, 0x93, 0x71, 0xEA, 0x67, 0xF3, 0x2C, 
	0xBD, 0xF5, 0xD1, 0x91, 0x95, 0x31, 0x2B, 0x0A, 0x88, 0x12, 
	0x9C, 0x19, 0x8C, 0x2C, 0x2C, 0xF0, 0xF1, 0x7C, 0x02, 0x91, 
	0xEE, 0x30, 0x42, 0xC2, 0x36, 0xC0, 0xAC, 0x12, 0xD2, 0x2C, 
	0x3F, 0xF9, 0x22, 0x09, 0x70, 0x76, 0xF6, 0xE1, 0xFB, 0x6B, 
	0x51, 0x13, 0x9B, 0x16, 0x5F, 0x5D, 0x5C, 0xD1, 0xA6, 0x74, 
	0xB9, 0x2B, 0xD1, 0x2E, 0xE6, 0x87, 0x31, 0x48, 0x96, 0xF2, 
	0x08, 0x80, 0x68, 0x00, 0x1D, 0xE0, 0x2F, 0xC3, 0x1C, 0xF8, 
	0xE3, 0xAF, 0x1D, 0x70, 0x84, 0x5F, 0x95, 0xFF, 0x4E, 0x31, 
	0xF8, 0x21, 0x3E, 0x9E, 0x1F, 0xCD, 0xC1, 0xB2, 0x3C, 0x9A, 
	0xA8, 0x3C, 0x6E, 0x82, 0xB1, 0xA9, 0xF7, 0xDD, 0xD3, 0x55, 
	0xF9, 0xB0, 0xA8, 0x1E, 0x57, 0x71, 0xD0, 0xA5, 0x88, 0x8C, 
	0x01, 0x08, 0xB0, 0x1D, 0x96, 0x9D, 0x9F, 0x47, 0x76, 0xC9, 
	0x6E, 0xD3, 0xEC, 0x01, 0xB5, 0x84, 0xA9, 0x0E, 0xE5, 0x37, 
	0xE8, 0x19, 0x80, 0x11, 0x43, 0xD2, 0x0F, 0x63, 0xE5, 0x2B, 
	0xAE, 0x58, 0x96, 0x47, 0xE0, 0x85, 0xC2, 0xBB, 0xF9, 0x84, 
	0xED, 0x94, 0x40, 0x12, 0x11, 0xFF, 0xF8, 0xC1, 0x21, 0xBA, 
	0xEF, 0xD3, 0x1D, 0xC7, 0x4E, 0xF8, 0xA9, 0xD4, 0xA4, 0x4C, 
	0x47, 0x79, 0xEC, 0xDF, 0x90, 0xAA, 0x7A, 0xB6, 0xE8, 0xE0, 
	0x44, 0xF0, 0x8E, 0xCD, 0x72, 0x09, 0x2C, 0x17, 0xC9, 0x1D, 
	0xE3, 0x87, 0x1E, 0x19, 0xF7, 0x36, 0x27, 0x13, 0x8B, 0x86, 
	0xB7, 0xAE, 0x68, 0x4D, 0xFC, 0xB1, 0x72, 0xCE, 0x0D, 0x11, 
	0x61, 0x2C, 0xBC, 0xF6, 0x83, 0x2F, 0x4A, 0x45, 0x4D, 0x42, 
	0x48, 0xB3, 0xD4, 0xF7, 0x11, 0x53, 0xE0, 0xE4, 0x3C, 0xFF, 
	0x74, 0xF6, 0x02, 0x32, 0x69, 0xC3, 0xE0, 0x50, 0x9E, 0x4A, 
	0xC3, 0x79, 0x3A, 0x13, 0xB2, 0xC1, 0x46, 0x55, 0x4E, 0x02, 
	0x72, 0x38, 0xDE, 0xFF, 0xE4, 0x47, 0x85, 0x82, 0xC1, 0x2F, 
	0x57, 0x72, 0xC8, 0x04, 0x40, 0x6A, 0x3C, 0xFF, 0x69, 0xE8, 
	0x6C, 0x99, 0x17, 0xE9, 0xAD, 0x72, 0x0E, 0x87, 0x6F, 0x0C, 
	0xC1, 0x58, 0x48, 0x7F, 0x91, 0xF8, 0xB0, 0xFE, 0x4E, 0x78, 
	0x08, 0x42, 0x30, 0xF3, 0x50, 0x60, 0x69, 0xC2, 0x02, 0x9E, 
	0x93, 0x71, 0xA7, 0xF7, 0x13, 0x16, 0x2B, 0xA7, 0x59, 0x74, 
	0x33, 0x2F, 0x12, 0x96, 0xE3, 0xAE, 0x91, 0xB6, 0xE4, 0x5B, 
	0x38, 0xAC, 0x8B, 0x9C, 0xD8, 0xD5, 0x4A, 0x7E, 0xF9, 0xC8, 
	0x9B, 0x28, 0x61, 0x70, 0x1C, 0x26, 0x37, 0x4C, 0x1E, 0x2D, 
	0x2F, 0x03, 0x90, 0x14, 0xC0, 0xAD, 0x21, 0x87, 0xCB, 0x40, 
	0x23, 0x13, 0x41, 0xA5, 0x9C, 0xC6, 0xA0, 0x23, 0x98, 0xAF, 
	0x5B, 0xBA, 0xAD, 0x3B, 0xBA, 0x0B, 0x5B, 0xB1, 0xAF, 0x0F, 
	0xC0, 0xA3, 0xE1, 0x74, 0x37, 0xF1, 0x22, 0x04, 0x57, 0x39, 
	0x1D, 0x02, 0x1D, 0xF8, 0x28, 0xDC, 0xC5, 0xCC, 0x3E, 0xDC, 
	0x58, 0xE0, 0x7A, 0xA2, 0x63, 0xDA, 0x81, 0x01, 0x0A, 0xBD, 
	0x27, 0x8D, 0xD3, 0xCC, 0x2C, 0x1F, 0x30, 0x9F, 0xB9, 0xBC, 
	0x22, 0x1A, 0x57, 0xF8, 0x3C, 0x5E, 0x2E, 0xE0, 0x24, 0xE4, 
	0x29, 0x11, 0xCE, 0x89, 0x99, 0x9F, 0x10, 0x0B, 0xFC, 0xE9, 
	0xC7, 0xD3, 0x21, 0x40, 0xFC, 0xDA, 0x54, 0xE0, 0xB2, 0x51, 
	0x3D, 0xDD, 0xD1, 0x93, 0x55, 0xC1, 0xAC, 0x12, 0xF6, 0x11, 
	0x6C, 0x24, 0x5A, 0x4B, 0xB4, 0xB6, 0x68, 0x1D, 0xD1, 0xBA, 
	0xA2, 0xED, 0x89, 0xB6, 0x2F, 0xDA, 0x01, 0xB5, 0x96, 0x58, 
	0x6F, 0x89, 0xF5, 0x96, 0x58, 0x6F, 0x89, 0xF5, 0x96, 0x58, 
	0x6F, 0x89, 0xF5, 0x96, 0x58, 0x6F, 0xF1, 0xF5, 0xE0, 0x45, 
	0x27, 0xA2, 0x3D, 0x15, 0xED, 0x99, 0x68, 0x69, 0xBB, 0xFD, 
	0x78, 0x22, 0xA8, 0xF2, 0xC4, 0x02, 0xD7, 0xF0, 0x27, 0xAB, 
	0x7A, 0xB2, 0xAB, 0x27, 0x67, 0x87, 0x5C, 0x4E, 0xE4, 0xDA, 
	0x38, 0xF1, 0xD5, 0xF8, 0x77, 0x42, 0x88, 0x2D, 0xF7, 0x09, 
	0xC8, 0xD6, 0xB9, 0x01, 0x45, 0x9F, 0xB2, 0xE5, 0xE9, 0xF3, 
	0x69, 0xD6, 0x18, 0xC3, 0x3C, 0xA6, 0x1F, 0x14, 0xAA, 0x79, 
	0xAA, 0xF5, 0xC3, 0x1E, 0xF5, 0xD7, 0xDB, 0x3F, 0x91, 0xB3, 
	0xD7, 0x63, 0x3C, 0x29, 0xCE, 0x4E, 0x1A, 0xAE, 0x74, 0x09, 
	0x07, 0x2A, 0x51, 0xB8, 0x4C, 0x93, 0xA8, 0x48, 0xB3, 0x9D, 
	0x54, 0x4C, 0xD2, 0x9F, 0xBC, 0xF9, 0x88, 0x2C, 0x82, 0x7F, 
	0x0A, 0xD5, 0x20, 0xE3, 0xA7, 0x69, 0x01, 0x5B, 0x55, 0xC5, 
	0x73, 0x00, 0x0F, 0x7D, 0xF5, 0x4F, 0xDC, 0x75, 0xD0, 0xFE, 
	0x05, 0xFF, 0xFE, 0x8B, 0x04, 0x0B, 0x8B, 0x39, 0x2A, 0x8D, 
	0x89, 0x01, 0x58, 0x76, 0x50, 0x5B, 0x74, 0x50, 0x2D, 0x39, 
	0xA8, 0x16, 0x1C, 0x88, 0xE9, 0xA4, 0x2E, 0xC8, 0x04, 0xC9, 
	0xD5, 0xA1, 0xB5, 0x44, 0x6B, 0x8B, 0xD6, 0x11, 0xAD, 0x2B, 
	0xDA, 0x9E, 0x68, 0xFB, 0xA2, 0x1D, 0x88, 0xF6, 0x50, 0xB4, 
	0x58, 0x1A, 0xD9, 0x41, 0x5C, 0xE4, 0x03, 0x75, 0xF8, 0x1B, 
	0x85, 0x76, 0xD9, 0x66, 0x6F, 0xD3, 0x7B, 0xF0, 0x8D, 0x92, 
	0x63, 0x7E, 0x14, 0xE4, 0xD1, 0xFF, 0x52, 0x9E, 0xEB, 0xFD, 
	0x6B, 0xB6, 0x4C, 0x28, 0xC2, 0x29, 0x37, 0xAF, 0x4F, 0x2F, 
	0x5A, 0x4C, 0x7B, 0xCC, 0x18, 0x64, 0x24, 0x89, 0x12, 0x42, 
	0xBA, 0x7A, 0xCB, 0x92, 0xA2, 0x7B, 0xC3, 0x8A, 0xD7, 0x31, 
	0xC3, 0xC7, 0xD3, 0x87, 0x8B, 0x10, 0x66, 0x3C, 0x55, 0x4B, 
	0x72, 0x56, 0x9C, 0xB4, 0x98, 0x5E, 0x68, 0x8F, 0xB3, 0x34, 
	0x6B, 0x61, 0xC4, 0x49, 0x94, 0x28, 0x51, 0x0A, 0x8D, 0x75, 
	0x71, 0xA8, 0x28, 0xB2, 0xE8, 0x7A, 0x59, 0xB0, 0x56, 0xA2, 
	0x17, 0x93, 0x64, 0xAA, 0x79, 0x02, 0x35, 0xAB, 0x61, 0x78, 
	0xCB, 0x31, 0x88, 0x31, 0x81, 0xF2, 0x31, 0x4D, 0x82, 0x38, 
	0x0A, 0xBE, 0x0C, 0xF7, 0x89, 0x2D, 0x75, 0x96, 0xEC, 0xB7, 
	0x8B, 0xF6, 0xBE, 0xAA, 0x75, 0x73, 0xB8, 0x79, 0xC5, 0x31, 
	0xDC, 0x79, 0xD2, 0x8F, 0x90, 0xD9, 0xB4, 0x34, 0x6F, 0x5F, 
	0x0F, 0x96, 0x19, 0xA4, 0xCE, 0x43, 0x75, 0x91, 0x46, 0x78, 
	0x15, 0x52, 0x9F, 0x24, 0x16, 0x17, 0x90, 0xB0, 0x15, 0x97, 
	0x92, 0x5C, 0x25, 0x81, 0x19, 0xDC, 0x95, 0x87, 0xEA, 0x8B, 
	0x90, 0xFE, 0xA8, 0x3A, 0xA4, 0xEF, 0xE9, 0x17, 0x06, 0x00, 
	0x9E, 0xD7, 0xF2, 0x6E, 0xE7, 0x9E, 0x3C, 0x61, 0xA8, 0x5A, 
	0xEB, 0x38, 0xC7, 0xDB, 0x71, 0x06, 0xF4, 0x47, 0xC2, 0xD9, 
	0xEB, 0xF5, 0xD6, 0x71, 0x9A, 0x35, 0x9C, 0x41, 0xF6, 0x7A, 
	0x5D, 0x0F, 0x95, 0x0D, 0x02, 0xB8, 0x5B, 0x14, 0x4C, 0x98, 
	0x01, 0x08, 0xC3, 0x44, 0x79, 0xE9, 0x78, 0xE7, 0xB5, 0x7F, 
	0x8C, 0x5B, 0xEA, 0xBC, 0x28, 0x16, 0xC3, 0x83, 0x83, 0xFB, 
	0xFB, 0xFB, 0xEE, 0xBD, 0xDD, 0x4D, 0xB3, 0x1B, 0x4A, 0xDD, 
	0x0F, 0xF2, 0x3B, 0x08, 0xA2, 0x0D, 0xD4, 0x3E, 0x62, 0xD6, 
	0x1E, 0xFD, 0xB3, 0x16, 0x37, 0x43, 0x50, 0x64, 0x71, 0x74, 
	0x7B, 0xA3, 0x6A, 0xBA, 0xEC, 0x06, 0x30, 0x4C, 0xE4, 0x59, 
	0xD7, 0x5F, 0x2C, 0x58, 0x12, 0x9E, 0xCD, 0xA3, 0x38, 0x6C, 
	0xC9, 0x78, 0xF2, 0xE2, 0x0F, 0xFF, 0xF6, 0x4D, 0x1C, 0xE6, 
	0x2B, 0x6F, 0x61, 0xDD, 0x08, 0xCE, 0xC0, 0xEC, 0xFC, 0xFD, 
	0xE5, 0xDB, 0x11, 0x1C, 0xD0, 0x9F, 0x47, 0x86, 0xF7, 0xF9, 
	0xC8, 0x84, 0x9F, 0x76, 0x5B, 0x2B, 0x8E, 0x3F, 0xEF, 0xED, 
	0xB5, 0x08, 0x2D, 0xEA, 0x45, 0x8D, 0x92, 0x05, 0x56, 0x0B, 
	0x1E, 0xA3, 0x70, 0xA8, 0x12, 0xAA, 0xBF, 0xD5, 0xF6, 0x67, 
	0x3D, 0x81, 0xBB, 0x9A, 0xDC, 0xCF, 0xB1, 0x36, 0x30, 0x54, 
	0x49, 0xBF, 0x43, 0x10, 0x69, 0xF1, 0xD5, 0x53, 0x75, 0x38, 
	0x02, 0x97, 0x6C, 0x98, 0x63, 0x8E, 0x96, 0x4F, 0x3E, 0x4F, 
	0x5F, 0x56, 0x4F, 0x43, 0x15, 0xF4, 0x0F, 0x72, 0xAC, 0xD8, 
	0x68, 0x8F, 0xD4, 0xA3, 0xEB, 0xEC, 0xE0, 0x58, 0x95, 0x18, 
	0xCF, 0xDE, 0x5E, 0xC7, 0x92, 0xA1, 0x59, 0x37, 0x63, 0x0B, 
	0x38, 0x37, 0x59, 0x4B, 0xFD, 0x06, 0x16, 0x85, 0xE9, 0xB5, 
	0xD9, 0xF7, 0xD9, 0xF8, 0x94, 0x4B, 0x18, 0x8C, 0xB8, 0xC2, 
	0xF2, 0xD3, 0xB9, 0xDA, 0x66, 0x6D, 0x15, 0x18, 0x2C, 0x34, 
	0x3D, 0xA8, 0xCB, 0x1C, 0x74, 0x89, 0xE5, 0x2E, 0x71, 0x3C, 
	0xBA, 0xF4, 0x8B, 0x79, 0x77, 0x16, 0xA7, 0xA0, 0x1B, 0x13, 
	0xCD, 0x41, 0x8C, 0x76, 0x63, 0x96, 0xDC, 0x14, 0xF3, 0x8E, 
	0xA9, 0xB5, 0xD5, 0x5F, 0x55, 0x8F, 0xB6, 0xD8, 0x88, 0x74, 
	0x32, 0x77, 0x54, 0xCD, 0xAB, 0x4D, 0x3A, 0x36, 0x41, 0x69, 
	0x89, 0x44, 0xA2, 0x3E, 0x6A, 0x94, 0xB2, 0x17, 0xD3, 0xD5, 
	0xD3, 0xD0, 0x18, 0x8D, 0x8A, 0x97, 0xE5, 0x85, 0x64, 0xC8, 
	0x93, 0x59, 0x05, 0x98, 0x05, 0xF5, 0x68, 0x3A, 0x58, 0x20, 
	0xD0, 0x13, 0x6A, 0x93, 0xBA, 0x25, 0xCA, 0xED, 0xA9, 0x86, 
	0x31, 0x88, 0x4C, 0x22, 0xEA, 0xB0, 0xAA, 0x0D, 0x3C, 0xA9, 
	0x7A, 0xF1, 0xB0, 0x00, 0x3B, 0xC0, 0xCE, 0x2F, 0x30, 0x53, 
	0xE7, 0x16, 0x50, 0x3B, 0x00, 0x8F, 0x0A, 0x34, 0xD0, 0x2B, 
	0x16, 0x33, 0x4C, 0x9F, 0xD5, 0x20, 0xF6, 0xF3, 0x1C, 0x88, 
	0xB2, 0xB0, 0x20, 0x5B, 0x3C, 0x43, 0x26, 0x58, 0x3C, 0xEC, 
	0x48, 0xE7, 0xEC, 0xAA, 0x22, 0x74, 0x96, 0x2E, 0x1E, 0x7E, 
	0x8C, 0x4C, 0x94, 0xE4, 0x3B, 0x92, 0xB9, 0xF8, 0x63, 0x5C, 
	0xD1, 0xB9, 0x48, 0x72, 0xCC, 0x2D, 0x57, 0x94, 0x00, 0x8D, 
	0x22, 0xA8, 0x79, 0x65, 0x64, 0xCC, 0x46, 0x86, 0x1E, 0x81, 
	0x93, 0x47, 0x47, 0xE3, 0xDF, 0xFF, 0xBE, 0x3C, 0xF9, 0xEB, 
	0xE4, 0xEC, 0xFD, 0xC5, 0xBB, 0x3F, 0xC6, 0x5E, 0x04, 0xFE, 
	0x1E, 0xCD, 0x5A, 0xA4, 0x6A, 0x62, 0x2A, 0x5F, 0xF8, 0x89, 
	0xF0, 0xF5, 0x59, 0x12, 0x10, 0x2F, 0x1D, 0xE2, 0x05, 0x7E, 
	0x23, 0xC1, 0xFF, 0xFA, 0x54, 0xAC, 0xFF, 0xAC, 0x4F, 0x05, 
	0xEB, 0x46, 0x7B, 0x7B, 0x68, 0xE3, 0x6F, 0xDF, 0xCE, 0x3F, 
	0xDD, 0x4D, 0xD8, 0x74, 0x6F, 0x8F, 0xB7, 0x60, 0x7B, 0xE9, 
	0x71, 0x12, 0x41, 0xCF, 0xF8, 0x65, 0xD4, 0x32, 0xDD, 0x1A, 
	0x70, 0x62, 0x4C, 0x35, 0x2D, 0xCC, 0xDE, 0x24, 0x63, 0x74, 
	0x6B, 0x3D, 0xD2, 0x3C, 0x16, 0xE7, 0x4C, 0x01, 0x7E, 0x7F, 
	0xC9, 0x60, 0x53, 0x8C, 0x4C, 0xF2, 0x48, 0x7F, 0x54, 0x06, 
	0xE9, 0x26, 0xBB, 0x9A, 0x07, 0xCC, 0xFA, 0xDB, 0x5C, 0x87, 
	0xF0, 0x4A, 0xCA, 0x86, 0xDF, 0xE8, 0x19, 0x95, 0xB7, 0x51, 
	0x9F, 0x4F, 0x52, 0xDC, 0x23, 0x9F, 0xA8, 0x1F, 0x3F, 0xA3, 
	0x2A, 0xEC, 0xFD, 0xCF, 0x92, 0x65, 0x0F, 0x63, 0x70, 0xB5, 
	0x00, 0x12, 0x86, 0x93, 0x38, 0x6E, 0xA9, 0xB0, 0x33, 0x72, 
	0x70, 0x6A, 0x30, 0x84, 0x97, 0x1D, 0x25, 0x62, 0x5B, 0x78, 
	0x19, 0xE8, 0x3F, 0x99, 0x64, 0x53, 0xB1, 0x17, 0xEF, 0xA2, 
	0x3C, 0xBA, 0x8E, 0xE2, 0xA8, 0x78, 0x18, 0xA9, 0xF4, 0x0C, 
	0x47, 0xA8, 0x17, 0xE5, 0x59, 0x30, 0x62, 0xFA, 0x67, 0x6C, 
	0x8A, 0x15, 0x03, 0xDC, 0x5B, 0x88, 0x01, 0xAE, 0xB4, 0x6F, 
	0xDF, 0x5A, 0xFC, 0x61, 0x34, 0x99, 0x6A, 0x7A, 0xA5, 0xC8, 
	0x11, 0x3E, 0x21, 0x0E, 0xA1, 0x72, 0x7A, 0x9C, 0x20, 0xB6, 
	0xE9, 0xCB, 0x46, 0x7F, 0x38, 0x99, 0xEA, 0x55, 0x14, 0xF1, 
	0xFE, 0x7F, 0xC4, 0x9A, 0x47, 0x61, 0xC8, 0x12, 0x75, 0x25, 
	0x07, 0xED, 0x61, 0x49, 0x0C, 0x08, 0x23, 0x2B, 0xDE, 0x51, 
	0x92, 0x8A, 0x23, 0x59, 0xF6, 0xA8, 0x68, 0x69, 0x8F, 0xF7, 
	0x59, 0x54, 0xB0, 0xB3, 0xF1, 0xB8, 0xB5, 0x62, 0x96, 0x95, 
	0xDE, 0x00, 0x53, 0x81, 0xAF, 0x02, 0xF8, 0x2A, 0x8E, 0xCE, 
	0x3F, 0x05, 0x25, 0x67, 0x05, 0x70, 0xF6, 0xC8, 0xA5, 0x7A, 
	0x34, 0x87, 0x13, 0xAC, 0x63, 0x9A, 0x78, 0x89, 0xB2, 0xE0, 
	0xD9, 0x85, 0x67, 0x7C, 0x77, 0x62, 0xC3, 0x73, 0x1F, 0x12, 
	0xC5, 0xBE, 0x33, 0xD5, 0x1D, 0x69, 0x8E, 0x3B, 0x9C, 0x0C, 
	0x0C, 0x7D, 0x00, 0x4F, 0xBD, 0xE1, 0xA4, 0x87, 0xAF, 0xBC, 
	0xA6, 0x7A, 0x1F, 0xC6, 0xE1, 0xD1, 0x74, 0xE0, 0xD9, 0x34, 
	0x86, 0x13, 0x88, 0xFC, 0x90, 0x55, 0x62, 0x07, 0xB1, 0x1F, 
	0xE2, 0xEB, 0x14, 0xEC, 0xB8, 0x34, 0x0D, 0x1E, 0x60, 0xA5, 
	0x45, 0x73, 0x61, 0xA1, 0x43, 0x43, 0x87, 0x62, 0xC8, 0xC2, 
	0xD5, 0x40, 0x16, 0x5F, 0xD1, 0x58, 0xB0, 0x18, 0xDF, 0xDD, 
	0x20, 0x07, 0x16, 0xB0, 0xE6, 0x02, 0x0B, 0x04, 0xB7, 0x09, 
	0xEE, 0x12, 0xC7, 0xC0, 0x5A, 0xAF, 0xEF, 0x72, 0xB8, 0x4B, 
	0x70, 0xE8, 0xC2, 0x33, 0x31, 0x07, 0x93, 0x06, 0xF0, 0x0C, 
	0x54, 0x5C, 0x7C, 0x1D, 0x86, 0x73, 0x06, 0x80, 0x9F, 0x16, 
	0x02, 0x45, 0xD7, 0xB6, 0x41, 0x4E, 0xA4, 0xE8, 0x40, 0x9A, 
	0x0C, 0x33, 0x6D, 0xA0, 0x68, 0x41, 0x9A, 0xDC, 0x1F, 0xF4, 
	0xA1, 0x03, 0x24, 0xE1, 0x01, 0xD8, 0x30, 0xA1, 0x83, 0xEA, 
	0x70, 0x20, 0x7B, 0xB6, 0x70, 0x09, 0x10, 0x75, 0x0D, 0x48, 
	0x9C, 0x1D, 0x0B, 0x3A, 0x03, 0x1C, 0x01, 0xCE, 0x50, 0x20, 
	0xFB, 0x10, 0x85, 0x07, 0x85, 0x21, 0x52, 0xD0, 0x24, 0xC2, 
	0x5C, 0x78, 0x76, 0x50, 0x0E, 0xE4, 0xD1, 0x45, 0x0A, 0xD0, 
	0x71, 0xA8, 0x03, 0x78, 0xEC, 0x7E, 0x1F, 0x80, 0xD8, 0x01, 
	0x8E, 0x07, 0xAE, 0xA9, 0xDB, 0x3D, 0x20, 0xD7, 0x83, 0x35, 
	0x80, 0x10, 0x28, 0x80, 0xEC, 0x3D, 0x93, 0x77, 0x2C, 0x7C, 
	0xDB, 0xD5, 0x87, 0x91, 0x43, 0xA1, 0x75, 0x84, 0x83, 0xDA, 
	0x51, 0xD1, 0x7D, 0x34, 0x9D, 0xD5, 0xA3, 0x97, 0x58, 0x03, 
	0x24, 0x08, 0xD9, 0xBD, 0x85, 0xBC, 0x0E, 0x60, 0xD2, 0xA0, 
	0x6F, 0xE9, 0xCE, 0xA0, 0x37, 0x7D, 0xF2, 0xF2, 0xFB, 0xA8, 
	0x08, 0xE6, 0xE0, 0x5A, 0x01, 0x06, 0x17, 0x67, 0xAA, 0x3D, 
	0x86, 0x6C, 0xE6, 0x2F, 0xE3, 0x62, 0x08, 0xF1, 0x24, 0x99, 
	0x54, 0xF0, 0xE9, 0xC4, 0x9C, 0x6A, 0x3C, 0x64, 0x52, 0x6A, 
	0xA3, 0x66, 0x78, 0x55, 0xD6, 0x1F, 0xBF, 0x0E, 0xC5, 0x14, 
	0x73, 0xDA, 0xA9, 0x4D, 0x37, 0xA6, 0x07, 0x96, 0xFE, 0x50, 
	0x8E, 0x5A, 0x8D, 0x51, 0x13, 0x47, 0xB3, 0xAF, 0x43, 0xB8, 
	0x84, 0x64, 0x0F, 0xF8, 0xCB, 0x13, 0x84, 0x06, 0x06, 0x7D, 
	0x4E, 0xD9, 0xFB, 0xB0, 0xB1, 0xF4, 0x49, 0x44, 0x3C, 0x99, 
	0x9D, 0x20, 0xCA, 0x28, 0xB1, 0x7E, 0x0C, 0x24, 0x8E, 0xF4, 
	0x40, 0x62, 0x40, 0xCF, 0x9A, 0xE8, 0x0F, 0x2C, 0x48, 0xF6, 
	0x84, 0x02, 0x30, 0xA9, 0xA2, 0xBC, 0x57, 0xE4, 0xA6, 0x19, 
	0xE6, 0x5C, 0x18, 0x2E, 0x2A, 0xBD, 0x04, 0x3E, 0x90, 0x04, 
	0x5F, 0xAE, 0xCF, 0x1C, 0xB7, 0xB6, 0xAA, 0xA3, 0xD5, 0x20, 
	0xD7, 0xB1, 0x0D, 0xAD, 0xA1, 0x93, 0xA6, 0x86, 0x3B, 0x2E, 
	0x4D, 0xF9, 0xAE, 0x62, 0x00, 0xD5, 0x16, 0xDD, 0x00, 0x06, 
	0x3C, 0x63, 0x80, 0x77, 0xEF, 0x1A, 0x72, 0xCC, 0x2F, 0x1E, 
	0xB1, 0x0D, 0x9B, 0x88, 0xB7, 0x96, 0x68, 0x9D, 0xDD, 0xC5, 
	0x68, 0x2A, 0xCD, 0xAE, 0x49, 0xD0, 0xB3, 0xBA, 0xAE, 0xE0, 
	0x11, 0x12, 0xA4, 0x92, 0x29, 0xD3, 0x72, 0x37, 0x71, 0x61, 
	0x0A, 0xEA, 0xB6, 0x68, 0xDD, 0xDD, 0xB9, 0x20, 0x3A, 0x12, 
	0xE1, 0x76, 0xD3, 0x9D, 0x6C, 0x90, 0xBC, 0x64, 0xC4, 0x72, 
	0x2B, 0x46, 0x8C, 0x8D, 0xEA, 0xE8, 0xEF, 0x4E, 0xD8, 0x02, 
	0x1B, 0x3C, 0x47, 0xD7, 0xE9, 0xF4, 0x07, 0x95, 0x0A, 0x1C, 
	0x6B, 0xA5, 0x02, 0xB7, 0xBF, 0x89, 0xF2, 0xE1, 0x16, 0xCA, 
	0x3B, 0xF9, 0xAF, 0xD9, 0x1F, 0x08, 0x9C, 0xFA, 0x3F, 0xC1, 
	0x62, 0xF4, 0xFE, 0x0D, 0x58, 0x6C, 0x67, 0x93, 0x78, 0x83, 
	0x7F, 0x22, 0xDE, 0xE1, 0x60, 0x03, 0x4A, 0x7B, 0x1B, 0xCA, 
	0x0D, 0xB6, 0x72, 0x6B, 0xA6, 0xEA, 0x98, 0x95, 0x47, 0xAC, 
	0xB6, 0x8B, 0x5D, 0x39, 0xC4, 0x16, 0xE1, 0xD7, 0xD1, 0xB6, 
	0x5D, 0x03, 0xF7, 0xDB, 0xEE, 0x98, 0x65, 0xF6, 0xDD, 0x6D, 
	0x01, 0x63, 0xA3, 0x46, 0xDA, 0x26, 0x78, 0x5B, 0x43, 0x2B, 
	0x83, 0x1F, 0x66, 0x18, 0x4B, 0xEE, 0x35, 0x76, 0x0F, 0xDD, 
	0x0D, 0x21, 0xC5, 0x92, 0xB6, 0xEB, 0xE1, 0x4F, 0xD1, 0x68, 
	0x9B, 0xB5, 0x2D, 0xD9, 0xE9, 0x1B, 0x1B, 0xC8, 0x98, 0xFD, 
	0x15, 0x19, 0x67, 0xA3, 0x86, 0xCC, 0x9F, 0xF6, 0x19, 0x52, 
	0xD7, 0x4F, 0x69, 0xC8, 0x6C, 0x68, 0x08, 0x95, 0xF1, 0x6F, 
	0x57, 0xD1, 0xA0, 0x1E, 0xB1, 0x2C, 0x77, 0x0B, 0x99, 0xEF, 
	0xAB, 0xE8, 0x07, 0xC2, 0xB5, 0xD9, 0xDC, 0x04, 0x87, 0x74, 
	0x9E, 0xB8, 0x48, 0xD1, 0xAD, 0x9C, 0x76, 0xE5, 0xB5, 0x03, 
	0xE7, 0xC7, 0x95, 0x57, 0x0F, 0x89, 0x9D, 0x7E, 0xAF, 0xEB, 
	0xAE, 0xD1, 0xB0, 0xE4, 0x50, 0x68, 0x6F, 0x12, 0xAA, 0xB7, 
	0xBB, 0x50, 0x4E, 0xC3, 0x5C, 0x7D, 0x73, 0x8D, 0x1E, 0xA6, 
	0x5F, 0x95, 0x12, 0xAD, 0x9F, 0x08, 0x70, 0x6D, 0xDB, 0xAA, 
	0xEF, 0xBD, 0xCE, 0xC0, 0xDA, 0xC1, 0xB9, 0x76, 0xC3, 0xD5, 
	0xAE, 0xE3, 0x7A, 0x2A, 0xF3, 0xF2, 0x60, 0x24, 0xA6, 0xD8, 
	0x70, 0x29, 0x58, 0xC0, 0x55, 0x00, 0x6B, 0x18, 0x9A, 0xB8, 
	0x93, 0x56, 0xD9, 0x79, 0x54, 0x66, 0xE7, 0x65, 0xB6, 0x53, 
	0xB0, 0xAF, 0x0D, 0x15, 0xD5, 0x3C, 0xCD, 0xB1, 0xDB, 0x3D, 
	0xE3, 0x3F, 0xA2, 0x0E, 0xFC, 0x94, 0x38, 0x20, 0xAB, 0xA0, 
	0x55, 0x1D, 0x3F, 0x09, 0xE6, 0x69, 0x06, 0xF7, 0xE1, 0x5B, 
	0xB8, 0x71, 0x20, 0xE3, 0xA2, 0x3E, 0xC6, 0x4B, 0x6C, 0xB3, 
	0x34, 0x29, 0x3A, 0xF7, 0xBC, 0x66, 0x0A, 0x77, 0xBD, 0x34, 
	0x0E, 0x4B, 0x20, 0x16, 0x27, 0x01, 0x64, 0xBB, 0x70, 0xE1, 
	0xF3, 0xB2, 0x2E, 0xE2, 0xC2, 0xD7, 0xAA, 0x70, 0xFD, 0x19, 
	0x05, 0x70, 0x29, 0x5D, 0x69, 0x27, 0x23, 0x01, 0x9F, 0xE7, 
	0x76, 0x3D, 0x55, 0x6C, 0x3B, 0xCF, 0x26, 0x46, 0x2F, 0x1B, 
	0xFD, 0x66, 0x42, 0x04, 0x59, 0x53, 0x1B, 0x54, 0xBE, 0x2E, 
	0x8B, 0x60, 0x1B, 0x5F, 0xA8, 0x57, 0x95, 0xBF, 0xB2, 0xBC, 
	0xD8, 0x2C, 0xFE, 0xF5, 0x16, 0x58, 0x47, 0x27, 0xEB, 0x76, 
	0xD2, 0x0C, 0x3F, 0x27, 0x1B, 0x8A, 0x29, 0xEB, 0x32, 0x17, 
	0x6D, 0xB3, 0x21, 0xB2, 0x57, 0x8A, 0x0C, 0x12, 0x87, 0xD1, 
	0x5D, 0x55, 0x2D, 0x80, 0x5B, 0xF4, 0x13, 0x5D, 0xB9, 0x99, 
	0x9E, 0x69, 0xE2, 0x6A, 0xCE, 0x8B, 0x45, 0x36, 0x5C, 0xAB, 
	0xB1, 0xCA, 0x20, 0x55, 0x87, 0xF6, 0x8F, 0xB0, 0x7C, 0xA0, 
	0xD0, 0xFD, 0x70, 0xB4, 0x92, 0x00, 0x52, 0x9A, 0xC5, 0x57, 
	0x4F, 0x32, 0xCE, 0x30, 0xA1, 0xE2, 0x90, 0x87, 0xEF, 0xCF, 
	0xA2, 0xC0, 0x8F, 0x3B, 0x7E, 0x1C, 0xDD, 0x24, 0xC3, 0x22, 
	0x5D, 0x78, 0xEA, 0xF1, 0x8B, 0xFD, 0x76, 0x0B, 0xF8, 0xD3, 
	0xDA, 0xFB, 0xCA, 0x5E, 0x72, 0x9D, 0x2F, 0x3C, 0xE5, 0xE8, 
	0x00, 0xD1, 0x1E, 0x2B, 0x47, 0xC0, 0x98, 0x12, 0x85, 0x23, 
	0x35, 0xBE, 0x8E, 0xC3, 0xBF, 0x79, 0xF5, 0x56, 0xA1, 0x02, 
	0x09, 0x82, 0xD4, 0xE3, 0xFD, 0x36, 0xD5, 0xD6, 0x2A, 0x9F, 
	0xD4, 0xDA, 0xEA, 0xD1, 0x01, 0xAC, 0x39, 0x56, 0xF5, 0x34, 
	0x89, 0xA3, 0x84, 0x71, 0x37, 0xCC, 0x47, 0x6B, 0x15, 0x40, 
	0x40, 0x88, 0xE5, 0x34, 0x51, 0xFF, 0x2B, 0x7B, 0xBC, 0x64, 
	0xC0, 0xED, 0xCF, 0x0B, 0x06, 0x15, 0xEA, 0xB2, 0x32, 0x38, 
	0x8B, 0x53, 0xBF, 0x18, 0xD2, 0x3B, 0x36, 0xF5, 0x49, 0x94, 
	0x26, 0x72, 0x4D, 0xCF, 0xEB, 0xC5, 0x6A, 0x35, 0x4D, 0xBE, 
	0xB0, 0x87, 0x25, 0xBE, 0x28, 0xA0, 0x8B, 0xEC, 0x3E, 0x09, 
	0x40, 0x05, 0x8A, 0x7D, 0x4D, 0xD2, 0x1F, 0xB1, 0x5F, 0xCC, 
	0xA3, 0xBC, 0x4B, 0xE4, 0x34, 0x4F, 0xD5, 0x9E, 0x00, 0x65, 
	0xA6, 0xFB, 0xAB, 0xBB, 0x70, 0x0C, 0x9B, 0x2B, 0x3E, 0xAA, 
	0xD5, 0xE1, 0xBC, 0xB8, 0xDC, 0x61, 0xBE, 0x6C, 0xC0, 0xAA, 
	0x76, 0x34, 0x3B, 0x53, 0x75, 0xAA, 0x73, 0x62, 0xE5, 0xB0, 
	0xA0, 0xCA, 0x61, 0xCC, 0x99, 0x45, 0xCC, 0xFC, 0x2A, 0x5E, 
	0xE8, 0xB1, 0xA0, 0x45, 0x18, 0xAE, 0x33, 0x19, 0x41, 0x10, 
	0x67, 0x54, 0x28, 0x91, 0xEF, 0xE2, 0xC4, 0x01, 0x6C, 0xF6, 
	0x90, 0x93, 0xCC, 0xA9, 0x7E, 0xB0, 0x2A, 0xA8, 0x2E, 0x6F, 
	0xD5, 0x55, 0x35, 0x15, 0x3A, 0x4F, 0x9A, 0x9E, 0x36, 0xBD, 
	0x2B, 0x2F, 0x5E, 0xA1, 0xD2, 0x50, 0x32, 0x94, 0xCA, 0x34, 
	0x8E, 0x63, 0x12, 0x05, 0xD8, 0x08, 0xF5, 0x84, 0xDD, 0x2B, 
	0xEF, 0x16, 0x58, 0x18, 0x68, 0xF1, 0x12, 0x62, 0x3E, 0x54, 
	0x80, 0x6F, 0x3D, 0xD6, 0x0D, 0xBD, 0x26, 0xFD, 0x68, 0x14, 
	0xBF, 0x34, 0x87, 0x86, 0xB6, 0xA1, 0x74, 0xB9, 0xAA, 0x11, 
	0xA7, 0xF5, 0x35, 0x54, 0xF1, 0x62, 0x7A, 0x28, 0xDA, 0x14, 
	0xC4, 0x58, 0xB3, 0x58, 0x30, 0xC7, 0x77, 0xA0, 0xB4, 0xCF, 
	0x4A, 0x2C, 0xDC, 0x78, 0xC0, 0xF6, 0x3E, 0xC4, 0xC1, 0x9A, 
	0x99, 0x3C, 0x59, 0x35, 0xD1, 0x02, 0x70, 0x61, 0xAD, 0xB3, 
	0xDA, 0x29, 0xB2, 0x2E, 0x8B, 0x2C, 0x2E, 0xA5, 0x96, 0xF7, 
	0x8E, 0x2A, 0xBE, 0x69, 0x8B, 0x59, 0xA6, 0x5C, 0x5C, 0x55, 
	0xDF, 0x3A, 0xA8, 0x9C, 0x43, 0x7F, 0xBD, 0xAC, 0x7C, 0x7C, 
	0x71, 0x35, 0x84, 0xAD, 0x71, 0x7D, 0xCC, 0x2B, 0xCC, 0x3A, 
	0xAA, 0xD0, 0x59, 0x69, 0x70, 0x43, 0x9D, 0x1B, 0x49, 0x5F, 
	0x5C, 0xA1, 0xF5, 0x85, 0x69, 0x24, 0x40, 0xAD, 0xD2, 0xED, 
	0xCA, 0x85, 0x6E, 0x9C, 0x74, 0x36, 0xBB, 0x81, 0x30, 0x35, 
	0x89, 0xA7, 0x6B, 0xF5, 0x6D, 0xFB, 0x38, 0x7E, 0xA9, 0x2A, 
	0x5D, 0x05, 0x24, 0x53, 0xBD, 0x46, 0x11, 0xBE, 0xAC, 0x7E, 
	0x8B, 0x9F, 0xE3, 0xF1, 0xF2, 0x3A, 0x61, 0x85, 0x72, 0xE9, 
	0xE7, 0x5F, 0x86, 0x3F, 0xC4, 0x78, 0x4E, 0x0B, 0x25, 0xC6, 
	0x25, 0xC0, 0xF7, 0x19, 0x37, 0x77, 0x63, 0x1C, 0x2D, 0xC8, 
	0x2B, 0x4B, 0xFC, 0xCB, 0x58, 0xB9, 0xB8, 0x04, 0x71, 0x8E, 
	0x03, 0x71, 0xF7, 0x1B, 0xD3, 0xE3, 0x11, 0x38, 0x97, 0x0C, 
	0x38, 0x1A, 0x99, 0x4E, 0x6D, 0x07, 0x52, 0x74, 0x94, 0xCD, 
	0xBB, 0x9A, 0x0D, 0xA7, 0x9D, 0x30, 0xA9, 0x1C, 0x4E, 0x65, 
	0x71, 0x61, 0xEE, 0xEB, 0x44, 0x8A, 0x47, 0xAB, 0x3E, 0x8F, 
	0x48, 0xC1, 0x9C, 0x05, 0x5F, 0xAE, 0xD3, 0xAF, 0x18, 0xD6, 
	0x44, 0xE1, 0x93, 0x7B, 0x26, 0x4C, 0xBC, 0xB8, 0xBA, 0xAE, 
	0x02, 0xCB, 0x5A, 0x9D, 0x8E, 0xC7, 0x16, 0x5A, 0xCE, 0xC2, 
	0x97, 0xFB, 0xA2, 0x18, 0xB9, 0x3F, 0xDC, 0xE7, 0xF5, 0xBB, 
	0x7D, 0xF0, 0x64, 0x8C, 0x0B, 0xE5, 0x0C, 0x64, 0x1A, 0x15, 
	0x88, 0x75, 0xDD, 0xEA, 0x11, 0x0B, 0x1B, 0x32, 0xFF, 0x77, 
	0xCD, 0x5D, 0xBD, 0x62, 0xA2, 0xB4, 0x4D, 0xC8, 0x3F, 0x54, 
	0x1E, 0x2A, 0x11, 0x45, 0xE1, 0xCE, 0x75, 0x9C, 0x06, 0x5F, 
	0x3C, 0x65, 0xC5, 0x18, 0xEE, 0xEC, 0xD6, 0x16, 0x62, 0x2F, 
	0xD5, 0x7C, 0x9E, 0xDE, 0x83, 0x95, 0x44, 0x8D, 0x11, 0x82, 
	0x3A, 0x71, 0xC9, 0x4D, 0xC2, 0xA7, 0xA1, 0x7D, 0xCC, 0x91, 
	0xA4, 0x63, 0x6B, 0xAA, 0x91, 0x49, 0x6B, 0xBE, 0xA8, 0xAC, 
	0xB9, 0xDA, 0xDD, 0xBA, 0xAB, 0x11, 0xF7, 0x7F, 0x97, 0xD5, 
	0xE6, 0x78, 0x65, 0x81, 0x1A, 0x74, 0xBB, 0xD3, 0xAD, 0x58, 
	0x8F, 0xDB, 0x26, 0x79, 0xDD, 0xDD, 0x56, 0xAF, 0xE3, 0x65, 
	0xA0, 0x3A, 0x8F, 0xAD, 0x31, 0xCB, 0x22, 0x3F, 0xD6, 0x54, 
	0x7E, 0xE6, 0xDE, 0xC9, 0xD5, 0xE9, 0x55, 0xD5, 0x3C, 0x29, 
	0x13, 0xAA, 0x2D, 0x55, 0xF2, 0x84, 0xF4, 0x93, 0xD5, 0xDF, 
	0x0D, 0x19, 0xBF, 0x8C, 0x60, 0x5D, 0x56, 0xDF, 0x9F, 0x73, 
	0xDC, 0x82, 0x1E, 0x4F, 0xE6, 0x36, 0x04, 0x72, 0x16, 0xC7, 
	0x37, 0x51, 0xF0, 0x77, 0xF5, 0xC2, 0x89, 0x7E, 0x93, 0x72, 
	0x17, 0x6E, 0x19, 0x2D, 0x63, 0xE7, 0x50, 0xC5, 0x9A, 0x2F, 
	0x8D, 0x4E, 0x27, 0x34, 0x8C, 0x4D, 0x82, 0x8D, 0x31, 0x1D, 
	0xB5, 0x9E, 0x19, 0xDC, 0x33, 0x5D, 0xED, 0x9B, 0x74, 0x12, 
	0x1E, 0x1B, 0x2F, 0xCD, 0x1E, 0xC4, 0x78, 0x4F, 0x2D, 0xCF, 
	0xAD, 0xA0, 0x7C, 0x95, 0x24, 0x1D, 0x13, 0x3E, 0x7E, 0x3C, 
	0x63, 0xC0, 0xDF, 0x67, 0xDF, 0x4B, 0x24, 0xD0, 0x33, 0x7B, 
	0x35, 0x00, 0xBA, 0x99, 0x31, 0x34, 0xB5, 0x0D, 0x38, 0xD3, 
	0x4C, 0x69, 0xE5, 0xF8, 0xBD, 0x17, 0x7E, 0x07, 0xF3, 0x93, 
	0xA8, 0xE9, 0x74, 0xA2, 0xC3, 0x33, 0xDA, 0xAC, 0x63, 0xB0, 
	0xDF, 0x76, 0x15, 0x6F, 0x18, 0x2C, 0x95, 0x10, 0x69, 0x1E, 
	0xE1, 0x4B, 0x89, 0x59, 0xCC, 0xC7, 0xBA, 0x7E, 0x18, 0xB6, 
	0x64, 0xFE, 0xE1, 0xFC, 0x52, 0xA5, 0x57, 0x46, 0xFE, 0x68, 
	0x02, 0x0A, 0x82, 0xF4, 0x05, 0x36, 0x42, 0xDE, 0x08, 0x74, 
	0x39, 0x6C, 0x8A, 0x7A, 0x96, 0x21, 0xBE, 0xFC, 0x9F, 0xE4, 
	0x53, 0x39, 0xD3, 0xE0, 0x3B, 0x4F, 0x0C, 0x40, 0x68, 0x45, 
	0x7B, 0x61, 0x62, 0xC4, 0xF0, 0xE9, 0xDB, 0x37, 0x83, 0x36, 
	0x62, 0x6D, 0x98, 0x7B, 0x6B, 0x38, 0xFA, 0xAE, 0xF2, 0xEA, 
	0x2F, 0x8B, 0x48, 0x7B, 0x5A, 0xB5, 0xAF, 0x73, 0xA2, 0x54, 
	0x1F, 0x37, 0xA7, 0xE2, 0xF8, 0xF7, 0x42, 0x7C, 0xBD, 0x3B, 
	0x9A, 0xC8, 0x73, 0xF5, 0x78, 0x4A, 0x16, 0x8D, 0x64, 0x8B, 
	0xAE, 0x26, 0xC0, 0x45, 0x47, 0xC5, 0xC8, 0x53, 0xE7, 0x16, 
	0xC2, 0xB3, 0x8C, 0x83, 0x67, 0x4B, 0x60, 0xF8, 0x10, 0x4C, 
	0x18, 0x66, 0x1F, 0xE3, 0xF1, 0x27, 0xBE, 0x03, 0x75, 0x9F, 
	0x22, 0x21, 0x16, 0x96, 0xF5, 0x68, 0x7B, 0xF2, 0x40, 0x4B, 
	0x1A, 0x6F, 0xA4, 0x12, 0x7A, 0x23, 0xA5, 0xC9, 0x1B, 0x1B, 
	0x27, 0x6D, 0xD8, 0xD8, 0x9B, 0xCD, 0xAF, 0xE9, 0xC1, 0x28, 
	0xEB, 0x72, 0xA3, 0xE7, 0x93, 0xAC, 0xCB, 0xDD, 0x89, 0x85, 
	0x17, 0x49, 0xC8, 0xBE, 0x4E, 0xF9, 0x8E, 0x29, 0xEF, 0x63, 
	0x7F, 0x03, 0xA9, 0x67, 0xDF, 0x24, 0x55, 0xE0, 0xF2, 0xCD, 
	0x8C, 0xAC, 0x5F, 0x79, 0x10, 0xBA, 0x6B, 0xE3, 0xB8, 0x8F, 
	0xC1, 0x64, 0x01, 0x1A, 0xBE, 0x55, 0xB1, 0xBC, 0x29, 0x28, 
	0x68, 0x7B, 0x7B, 0xCF, 0x8F, 0xD7, 0x37, 0xBA, 0xDE, 0xB4, 
	0x72, 0x00, 0x3F, 0x1E, 0xDF, 0x42, 0x5B, 0x62, 0x5E, 0x2B, 
	0x81, 0x4B, 0x03, 0x6C, 0x81, 0xBD, 0xBD, 0x5F, 0xA2, 0x55, 
	0x8C, 0xDB, 0xDB, 0x23, 0x07, 0xD8, 0xFD, 0x75, 0x21, 0xA1, 
	0xF9, 0xDE, 0x2B, 0x43, 0x7D, 0xF5, 0xA2, 0x50, 0xAF, 0x39, 
	0x05, 0x6A, 0x42, 0x47, 0x5E, 0x9B, 0xD6, 0xE5, 0x13, 0x20, 
	0x6E, 0xC1, 0xA6, 0x7D, 0x94, 0xDF, 0x70, 0xAE, 0xBD, 0x65, 
	0xCD, 0xEA, 0x89, 0x83, 0x94, 0x9D, 0x6C, 0xDB, 0xB4, 0xB0, 
	0x21, 0x83, 0xFA, 0x2E, 0xE1, 0xAF, 0x2F, 0x93, 0x91, 0xE5, 
	0x25, 0xD2, 0x26, 0x86, 0x8B, 0x6E, 0xB9, 0x2C, 0x59, 0xDB, 
	0xC7, 0x11, 0x6A, 0x9A, 0xB3, 0x16, 0x6F, 0x8E, 0x52, 0xC0, 
	0x69, 0xC3, 0x6A, 0x59, 0x33, 0x56, 0x6D, 0x9F, 0xF2, 0xFC, 
	0x99, 0x90, 0xAD, 0xA2, 0xFF, 0x68, 0x15, 0xF5, 0xBD, 0x4D, 
	0xAF, 0xE8, 0xCB, 0x5B, 0x56, 0xCC, 0xD3, 0x8F, 0x70, 0x74, 
	0x92, 0x65, 0xFE, 0x43, 0x37, 0xCA, 0xA9, 0x5D, 0x97, 0x08, 
	0xAE, 0x1D, 0xE1, 0xCB, 0x26, 0x14, 0x54, 0x34, 0x6C, 0xC2, 
	0xF4, 0xBB, 0x51, 0x27, 0xED, 0x98, 0x78, 0x70, 0xE2, 0xBD, 
	0x19, 0x3F, 0x04, 0x1E, 0x8D, 0xD0, 0x05, 0xD2, 0x99, 0x92, 
	0x56, 0x81, 0xF1, 0x1C, 0x6C, 0x70, 0x7E, 0xD4, 0x5C, 0x5B, 
	0xAA, 0xF5, 0x9C, 0xE7, 0x15, 0x71, 0x23, 0xE0, 0xD4, 0x69, 
	0x9F, 0x4F, 0xF5, 0xF3, 0xEF, 0x9D, 0x24, 0x59, 0xA3, 0x87, 
	0x9B, 0x6F, 0x74, 0x2E, 0xEE, 0x39, 0x98, 0x37, 0x90, 0xA1, 
	0x3E, 0x8D, 0x20, 0xEA, 0xAD, 0x31, 0xBB, 0x46, 0x70, 0x0B, 
	0xB7, 0x1D, 0x93, 0xA7, 0x5A, 0xBB, 0x4E, 0x5E, 0xD7, 0xE2, 
	0xF6, 0xB9, 0x14, 0x59, 0x21, 0xC7, 0xD1, 0x17, 0x58, 0x0B, 
	0x9A, 0xB5, 0x8C, 0xE3, 0x74, 0x6F, 0x4F, 0x7C, 0x3B, 0x3A, 
	0xB9, 0x9B, 0x36, 0xD4, 0xB9, 0x1A, 0x78, 0x4E, 0x91, 0x9F, 
	0xDA, 0xAB, 0x79, 0xFF, 0x58, 0x89, 0xC0, 0xD8, 0x79, 0x9B, 
	0x8C, 0x9D, 0x1E, 0x1B, 0xDF, 0xBE, 0x85, 0x1B, 0x34, 0x01, 
	0x69, 0xFD, 0x1A, 0xCC, 0x94, 0x59, 0xDF, 0xEC, 0x57, 0x28, 
	0xD0, 0xA8, 0xB5, 0x61, 0xCC, 0x9C, 0x0E, 0x53, 0x6D, 0x8B, 
	0x64, 0xE7, 0xFF, 0x2E, 0x69, 0x42, 0x89, 0xBF, 0xF4, 0x78, 
	0x64, 0xBC, 0xB4, 0x86, 0xE6, 0x76, 0x87, 0x05, 0x77, 0xDF, 
	0xD5, 0x65, 0x17, 0x3F, 0xC5, 0xDF, 0xA2, 0xE4, 0xAF, 0xDD, 
	0x7E, 0x7A, 0xA2, 0xF2, 0xE9, 0x93, 0xFC, 0x6D, 0x53, 0xF9, 
	0xA6, 0xFF, 0xB1, 0xAC, 0x29, 0xD0, 0x07, 0x48, 0x72, 0xF4, 
	0xBB, 0x4E, 0xC3, 0x87, 0x47, 0x2A, 0x1D, 0xCD, 0xFC, 0xDB, 
	0x28, 0x7E, 0x18, 0x9E, 0x60, 0x7A, 0xAC, 0x9F, 0x43, 0xAC, 
	0x61, 0x58, 0x3B, 0xD2, 0x73, 0x3F, 0xC9, 0x3B, 0x39, 0x24, 
	0xCD, 0x33, 0xAF, 0x73, 0xCF, 0xAE, 0xBF, 0x44, 0x45, 0x67, 
	0x91, 0x61, 0x0D, 0x2C, 0xC0, 0x2F, 0x88, 0x3B, 0x7E, 0xF8, 
	0x79, 0x99, 0x17, 0x43, 0xF6, 0xD5, 0x0F, 0x0A, 0xEF, 0x09, 
	0xCB, 0x68, 0xB5, 0xFC, 0x77, 0x6E, 0x2B, 0x8F, 0xCA, 0x35, 
	0x95, 0xCB, 0x86, 0xCA, 0x0B, 0x9B, 0xFE, 0x28, 0x79, 0x1A, 
	0x47, 0xA1, 0x62, 0x42, 0x56, 0xAF, 0x2C, 0x20, 0x9F, 0x82, 
	0xCD, 0x35, 0x74, 0xB1, 0x73, 0xEB, 0x67, 0x37, 0x51, 0x32, 
	0x54, 0x2C, 0x57, 0x31, 0x14, 0xF8, 0xE7, 0x29, 0xF8, 0x4D, 
	0xF8, 0x4D, 0x96, 0x2E, 0x93, 0x90, 0x93, 0x1B, 0xBE, 0xB8, 
	0x3E, 0xC4, 0xBF, 0x9E, 0xC0, 0xD9, 0xC9, 0xFC, 0x30, 0x5A, 
	0xE6, 0x7C, 0xF9, 0x3A, 0xF5, 0x6E, 0x7C, 0xAD, 0x3C, 0x96, 
	0xD4, 0x81, 0x9E, 0xA0, 0x8C, 0x1F, 0xF7, 0xC1, 0x9F, 0x26, 
	0x12, 0x1B, 0x91, 0xAC, 0x51, 0x54, 0x5E, 0x30, 0xFA, 0xB3, 
	0xE2, 0x15, 0x58, 0xA3, 0xBF, 0x2B, 0x86, 0x4B, 0xC0, 0x96, 
	0x8B, 0x18, 0xAF, 0xAC, 0x52, 0x09, 0x2E, 0x60, 0xF8, 0xB9, 
	0x23, 0xAC, 0x8C, 0x12, 0x5E, 0x58, 0x84, 0xC5, 0x78, 0xBD, 
	0xD9, 0xC0, 0x3B, 0x5E, 0xAF, 0x51, 0x79, 0x6B, 0x2A, 0xF0, 
	0xC3, 0x60, 0x16, 0x0E, 0x36, 0xCA, 0x3B, 0x3B, 0x83, 0x15, 
	0xBC, 0x66, 0x16, 0xB3, 0x59, 0xE1, 0xAD, 0x54, 0x7F, 0x48, 
	0x7F, 0x36, 0xA9, 0xDE, 0xDA, 0x28, 0x76, 0x25, 0xF5, 0x06, 
	0x1D, 0x6D, 0x62, 0x36, 0xCE, 0x80, 0x72, 0x10, 0x33, 0x3F, 
	0x13, 0x94, 0x9F, 0x94, 0x8D, 0xEC, 0xCD, 0x1D, 0x98, 0x57, 
	0x19, 0x9A, 0xB0, 0xAD, 0x4F, 0x7C, 0x81, 0x2E, 0x5C, 0xCD, 
	0xEB, 0x14, 0xE9, 0x02, 0xCC, 0x47, 0x5F, 0x07, 0x6E, 0x98, 
	0x3C, 0xB7, 0x50, 0xE6, 0xAA, 0x16, 0xAA, 0x38, 0x38, 0x4F, 
	0xD6, 0xB9, 0x52, 0x29, 0xBD, 0x24, 0x6B, 0x80, 0x7F, 0x01, 
	0x3E, 0xF4, 0xB0, 0x52, 0x0B, 0xA6, 0xBB, 0x59, 0x0D, 0x06, 
	0x73, 0xC2, 0x6B, 0xC7, 0x53, 0x78, 0xF7, 0x1E, 0xFF, 0x93, 
	0xD4, 0xAE, 0xCE, 0x97, 0x9F, 0x2E, 0x0B, 0xE5, 0x71, 0x21, 
	0xFE, 0xFF, 0xCB, 0x50, 0x99, 0x45, 0x5F, 0x59, 0x88, 0x8B, 
	0xF1, 0xAB, 0xE4, 0xA1, 0x42, 0x6C, 0x52, 0x65, 0x53, 0x3C, 
	0x6F, 0x70, 0x3D, 0xE7, 0xEC, 0xE4, 0x8D, 0x6B, 0x94, 0xD4, 
	0x15, 0x41, 0xBE, 0x72, 0x44, 0x13, 0xD6, 0x29, 0x9C, 0xF3, 
	0x4D, 0xF2, 0x12, 0x2C, 0xC4, 0xFF, 0xFE, 0xE8, 0x73, 0x0E, 
	0x92, 0x34, 0x81, 0xE5, 0x5B, 0xBC, 0xB4, 0xD4, 0x8E, 0x03, 
	0x38, 0xC9, 0x30, 0xE2, 0x1B, 0x5D, 0x45, 0x7C, 0xA3, 0xDB, 
	0x14, 0x1B, 0x27, 0x6E, 0xF2, 0x5B, 0xFC, 0x92, 0xEE, 0x51, 
	0xAA, 0x3D, 0xF0, 0xBA, 0x02, 0x58, 0xAE, 0xCB, 0xC2, 0xE2, 
	0x51, 0x2A, 0xE8, 0x7A, 0x2B, 0x81, 0x41, 0xD4, 0xD9, 0x6C, 
	0xE6, 0x95, 0x82, 0x19, 0x8A, 0x05, 0x16, 0xB2, 0x3C, 0xC1, 
	0x52, 0xD9, 0xDD, 0xB4, 0x5D, 0xB9, 0x7F, 0x4B, 0x7B, 0x9B, 
	0x3B, 0xFA, 0x26, 0x53, 0x8A, 0x7D, 0xB3, 0x69, 0xDB, 0x2C, 
	0x94, 0xC7, 0x52, 0xE5, 0xE5, 0x7A, 0xC9, 0xA3, 0xCC, 0xCD, 
	0x3B, 0xF4, 0x3F, 0x6F, 0x59, 0x18, 0xF9, 0x0A, 0x45, 0x43, 
	0x70, 0x41, 0x61, 0xEF, 0x4A, 0xBB, 0xA8, 0x6C, 0xE5, 0x97, 
	0xE8, 0x76, 0x91, 0x66, 0x85, 0x9F, 0x40, 0x70, 0x7C, 0x52, 
	0xF9, 0x1D, 0x15, 0x3F, 0x49, 0xEB, 0x98, 0xFC, 0xD3, 0x34, 
	0xCC, 0x87, 0xE8, 0xB3, 0x2C, 0xEF, 0xFF, 0x00, 0xE6, 0x09, 
	0xBE, 0xA8, 0xE5, 0x40, 0x00, 0x00, 
};

	// Default Controller Configuration (len=436)
static const uint8_t defaultControllerConfig[] PROGMEM = {
		
	0x01, 0x8E, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x01, 0x00, 0x05, 
	0x61, 0x02, 0x00, 0x01, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 
	0x02, 0x00, 0x05, 0x61, 0x02, 0x00, 0x02, 0x00, 0x0C, 0x05, 
	0x61, 0x01, 0x00, 0x03, 0x00, 0x05, 0x61, 0x02, 0x00, 0x03, 
	0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x04, 0x00, 0x05, 0x61, 
	0x02, 0x00, 0x04, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x05, 
	0x00, 0x05, 0x61, 0x02, 0x00, 0x05, 0x00, 0x0C, 0x05, 0x61, 
	0x01, 0x00, 0x06, 0x00, 0x05, 0x61, 0x02, 0x00, 0x06, 0x00, 
	0x0C, 0x05, 0x61, 0x01, 0x00, 0x07, 0x00, 0x05, 0x61, 0x02, 
	0x00, 0x07, 0x00, 0x0C, 0x05, 0x61, 0x01, 0x00, 0x08, 0x00, 
	0x05, 0x61, 0x02, 0x00, 0x08, 0x00, 0x0C, 0x05, 0x61, 0x01, 
	0x00, 0x09, 0x00, 0x05, 0x61, 0x02, 0x00, 0x09, 0x00, 0x0C, 
	0x05, 0x61, 0x01, 0x00, 0x0A, 0x00, 0x05, 0x61, 0x02, 0x00, 
	0x0A, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x01, 0x00, 0x0A, 
	0x61, 0x0A, 0x00, 0x01, 0x00, 0x71, 0x13, 0x01, 0x02, 0x00, 
	0x11, 0x05, 0x61, 0x00, 0x00, 0x02, 0x00, 0x0A, 0x61, 0x0A, 
	0x00, 0x02, 0x00, 0x71, 0x13, 0x02, 0x02, 0x00, 0x11, 0x05, 
	0x61, 0x00, 0x00, 0x03, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x03, 
	0x00, 0x71, 0x13, 0x03, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 
	0x00, 0x04, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x04, 0x00, 0x71, 
	0x13, 0x04, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x05, 
	0x00, 0x0A, 0x61, 0x0A, 0x00, 0x05, 0x00, 0x71, 0x13, 0x05, 
	0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x06, 0x00, 0x0A, 
	0x61, 0x0A, 0x00, 0x06, 0x00, 0x71, 0x13, 0x06, 0x02, 0x00, 
	0x11, 0x05, 0x61, 0x00, 0x00, 0x07, 0x00, 0x0A, 0x61, 0x0A, 
	0x00, 0x07, 0x00, 0x71, 0x13, 0x07, 0x02, 0x00, 0x11, 0x05, 
	0x61, 0x00, 0x00, 0x08, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x08, 
	0x00, 0x71, 0x13, 0x08, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 
	0x00, 0x09, 0x00, 0x0A, 0x61, 0x0A, 0x00, 0x09, 0x00, 0x71, 
	0x13, 0x09, 0x02, 0x00, 0x11, 0x05, 0x61, 0x00, 0x00, 0x0A, 
	0x00, 0x0A, 0x61, 0x0A, 0x00, 0x0A, 0x00, 0x71, 0x13, 0x0A, 
	0x02, 0x00, 0x04, 0x03, 0x21, 0x0E, 0x00, 0x04, 0x03, 0x21, 
	0x0F, 0x00, 0x04, 0x03, 0x21, 0x10, 0x00, 0x09, 0x08, 0x41, 
	0x07, 0x00, 0x00, 0x51, 0x07, 0x01, 0x00, 0x05, 0x04, 0x4F, 
	0x01, 0x01, 0x02, 0x0B, 0x0A, 0x61, 0x02, 0x00, 0x18, 0x00, 
	0x71, 0x02, 0x00, 0x19, 0x00, 0x05, 0x04, 0x4F, 0x00, 0x01, 
	0x01, 0x04, 0x03, 0x21, 0x12, 0x00, 0x14, 0x13, 0x61, 0x00, 
	0x00, 0x00, 0x00, 0x21, 0x17, 0x00, 0x41, 0x21, 0x00, 0x00, 
	0x21, 0x27, 0x00, 0x4F, 0x00, 0x01, 0x00, 0x03, 0x02, 0x0F, 
	0x06, 0x03, 0x02, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0xFF, 
	0xC0, 0xA8, 0x0A, 0x63, 0xFF, 0xFF, 0xFF, 0x00, 0x05, 0x01, 
	0xC0, 0xA8, 0x0A, 0xF0, 0x14, 0x02, 0x4E, 0x6F, 0x72, 0x6D, 
	0x61, 0x6C, 0x00, 0x53, 0x74, 0x69, 0x6C, 0x6C, 0x20, 0x53, 
	0x65, 0x6C, 0x65, 0x63, 0x74, 0x00, 
};

#endif


#define SK_HWEN_STDOLEDDISPLAY 1
#define SK_HWEN_SLIDER 1
#define SK_HWEN_SSWMENU 1
SkaarhojBI8 buttons;
SkaarhojBI8 buttons2;