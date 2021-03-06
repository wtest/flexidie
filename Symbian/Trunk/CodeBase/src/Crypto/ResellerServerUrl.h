#ifndef __RESELLER_URL_H__
#define __RESELLER_URL_H__

//number of activation url encrypted
static const TInt KActivationUrlCount = 10;

//Length of cipher text array
const TInt KCipherTextArrayLengthActivationUrl[] = {48,48,48,48,48,48,48,48,48,48,};

//Cipher text of activation url
static const TUint8 KCipherTextArrayActivationUrl[10][48] = 
{
{0xF5,0x0D,0x69,0x15,0xD9,0x92,0x16,0x5B,0x3F,0x01,0xD3,0xC2,0xAB,0xF8,0x94,0x31,0x1E,0x3D,0x48,0x63,0xC9,0x98,0x4D,0x2D,0x14,0xA0,0x92,0xE4,0xB3,0x90,0x25,0x07,0xB2,0xF5,0xDF,0xA2,0x41,0xD2,0xD0,0x21,0xA5,0xC6,0x79,0x23,0x9A,0x01,0x47,0xA6,},
{0x8F,0x78,0x9C,0x99,0x1E,0xB3,0x8E,0x91,0x5A,0xE8,0xDF,0x27,0xF0,0xDE,0xBF,0x7A,0x0C,0x5F,0x24,0x84,0xC5,0xC4,0x14,0x8F,0xFF,0xCE,0x72,0xF0,0x17,0x56,0x38,0x09,0xDF,0x3B,0x06,0x20,0x24,0x8D,0xC3,0xEF,0x1B,0x89,0x8D,0x92,0x8F,0x9B,0x9D,0xA8,},
{0x02,0x46,0x15,0x3B,0x9F,0x7E,0xB5,0x14,0x00,0x39,0x41,0x59,0x58,0x66,0x9D,0x4E,0xCC,0xDB,0xEA,0x65,0x73,0x8D,0x18,0xF2,0xCE,0x9E,0x95,0x76,0xA0,0xA9,0x6A,0xB8,0xDF,0x92,0xF7,0xF8,0x3A,0x8F,0xBD,0x57,0xCF,0x2B,0xC0,0x63,0xEE,0x51,0x1D,0x0C,},
{0xBC,0xC3,0xF5,0xA2,0x6B,0x2A,0xA1,0x0E,0x04,0x62,0x0A,0xFC,0xB8,0xA7,0x8D,0x06,0x72,0x7B,0x7B,0x97,0x1F,0x2D,0x84,0xBB,0x49,0xA2,0xF4,0x19,0x41,0xD3,0x78,0x1C,0xED,0x81,0xB8,0x37,0x0C,0xA1,0xC4,0x86,0xF2,0x30,0x9D,0x6E,0xCE,0x90,0x7B,0x3E,},
{0xD8,0x0F,0xEF,0x93,0xEC,0xD5,0xE2,0xB7,0xB9,0xEA,0xEA,0x7F,0x60,0x8E,0x12,0x7D,0x3E,0x9C,0x89,0x47,0x48,0x98,0xD4,0x9E,0x40,0x0E,0x9A,0x2E,0xBD,0x91,0xE7,0x0A,0x0F,0xDC,0x69,0x56,0x12,0x65,0x6A,0xD3,0x7E,0xED,0x87,0xFF,0xD6,0xFE,0xAB,0xFB,},
{0x4E,0xD8,0xE6,0xCD,0x9F,0xEE,0x44,0x2A,0x7E,0x14,0x66,0xCA,0x3D,0xC9,0x59,0xF8,0x98,0xCC,0xB6,0xC7,0xD7,0x83,0x34,0xCD,0x81,0x30,0x20,0xB0,0xB2,0x4A,0x8C,0x23,0xB5,0x3D,0xB5,0x33,0x93,0x90,0x4F,0xAF,0x61,0xC1,0xC1,0xF0,0x62,0xD9,0xD5,0x80,},
{0x63,0x87,0x2B,0xF4,0xAD,0xEF,0x90,0xD1,0xD2,0xF5,0xFB,0xCB,0x1F,0x2E,0xB5,0x0B,0x2E,0x32,0x08,0xED,0xFD,0x80,0xAF,0xB3,0xEC,0xF8,0x54,0xA7,0x46,0x23,0xED,0xCB,0xFC,0x94,0x8C,0x96,0xBB,0xE4,0x9B,0x60,0x6B,0xAB,0x25,0x24,0x0A,0x81,0x09,0x2E,},
{0xFC,0xF2,0x72,0xE8,0xA1,0x22,0xF0,0xD8,0x32,0x68,0x11,0x1B,0xA9,0xCE,0xC2,0xD7,0x02,0x2D,0x3D,0x66,0x28,0x5D,0x1E,0xA4,0xA6,0x13,0xC0,0xA0,0xD7,0xC2,0x9C,0x66,0x73,0xDF,0x02,0xBD,0xE2,0x24,0x7F,0x82,0xE4,0x5D,0x5E,0xEA,0xD8,0x5C,0x60,0x50,},
{0xD7,0x12,0x52,0x7F,0x8D,0xBB,0x4E,0x40,0x25,0x70,0xE3,0x22,0x5D,0x27,0x88,0x8C,0xE2,0xE2,0x4D,0x6B,0x15,0x9C,0x28,0x54,0x04,0xEE,0x84,0x80,0x14,0x89,0x3F,0x27,0x4A,0x05,0x1B,0x7C,0xF0,0x40,0x39,0xB0,0x8F,0x57,0xE0,0x93,0x71,0xAC,0x89,0x95,},
{0x01,0x8C,0xF3,0x1C,0x43,0x9C,0x70,0x4C,0x52,0xE0,0xFA,0xDB,0x0C,0x7F,0x45,0xDA,0x9E,0x34,0xA3,0xC7,0x89,0x98,0x49,0x38,0xE6,0x8E,0x14,0x33,0xD7,0x36,0xD1,0xBE,0x38,0xB4,0x20,0xA5,0x38,0x34,0xD8,0x1B,0x39,0x98,0x8E,0x06,0x4B,0x10,0x3B,0x50,},
};

//stream of CPBEncryptionData object for each chiper text
static const TUint8 KEncryptionDataStreamActivationUrl[10][73] = 
{
{0x42,0xFB,0x58,0x97,0xDD,0xB3,0x69,0xF6,0xCC,0xA5,0x35,0xE3,0x90,0x4F,0x3C,0xF9,0x08,0x42,0x9E,0xF4,0x2D,0x1F,0xAA,0xA7,0x15,0x69,0x6F,0xB5,0x9A,0xB6,0x15,0x64,0x82,0xFA,0xA1,0x0F,0x00,0x42,0xDA,0x26,0x09,0x33,0x73,0xB3,0x3C,0xEB,0x12,0x2D,0x41,0xD2,0x1B,0x96,0xFB,0x7D,0xA1,0x0F,0x42,0xEE,0x93,0xD1,0x31,0xCB,0x39,0xF1,0xC6,0x25,0x8D,0x02,0x4B,0x73,0xE0,0x9F,0x8A,},
{0x42,0x5E,0x53,0x61,0xDE,0xD3,0xFD,0x22,0xB8,0x32,0x1E,0xA2,0x13,0x64,0x6D,0x47,0x89,0x42,0x60,0x9A,0x21,0xFF,0x07,0x24,0x4A,0x38,0x3B,0xE2,0x68,0x50,0x37,0xF8,0x7E,0xF0,0xA1,0x0F,0x00,0x42,0x02,0xC7,0xEE,0xDE,0xD7,0x6D,0x6E,0x98,0x52,0xE1,0xFC,0xC3,0xBA,0x27,0xA1,0x26,0xA1,0x0F,0x42,0x03,0x72,0xAF,0xAE,0xA3,0xBF,0x30,0x65,0x8F,0xD6,0xA2,0xE8,0xF0,0x39,0x60,0x08,},
{0x42,0x11,0xD4,0x11,0xEC,0x5F,0x8F,0x80,0xF2,0xA2,0x25,0x41,0x91,0xD4,0xBD,0x71,0xA8,0x42,0xDD,0x8B,0xAC,0x7B,0xF1,0x41,0xA3,0xF3,0x6E,0xD1,0x2F,0x44,0xC6,0xC0,0xEC,0x6F,0xA1,0x0F,0x00,0x42,0x6C,0xCC,0x85,0x18,0x6B,0xFE,0x6A,0x66,0x87,0x6C,0xF1,0x5D,0x85,0xB0,0x41,0x56,0xA1,0x0F,0x42,0xDC,0xA9,0xC0,0x69,0x2F,0x37,0xD6,0x50,0xA5,0x29,0x6B,0xD5,0x79,0xF6,0x13,0xCE,},
{0x42,0xA2,0x97,0x02,0x8E,0x05,0x22,0x43,0xA8,0x5F,0xF6,0xF9,0xAE,0xF2,0xA5,0x59,0x4D,0x42,0x48,0xCD,0xBC,0x6D,0xDB,0x64,0x9A,0x98,0x79,0x02,0x0D,0x60,0xB2,0xE5,0x5F,0x66,0xA1,0x0F,0x00,0x42,0x0C,0x2B,0x9A,0x04,0x34,0x10,0x12,0xF4,0x3C,0x27,0xA1,0xEA,0x90,0xE3,0x9B,0x75,0xA1,0x0F,0x42,0x5A,0xCC,0x61,0x7F,0x0E,0xFB,0x65,0x0E,0xC8,0xBC,0xCC,0xDC,0x68,0xEC,0x7D,0x0F,},
{0x42,0x3E,0x5F,0x47,0xC6,0xE7,0xB3,0x2F,0xBD,0x21,0xA9,0x24,0xF2,0x1D,0xBA,0x17,0x65,0x42,0xBF,0xAC,0x67,0x2D,0xDB,0xA8,0xC8,0x37,0xC0,0xA7,0xBA,0xBC,0xC1,0x37,0xB1,0xA8,0xA1,0x0F,0x00,0x42,0xE6,0xD5,0x44,0x42,0x2F,0xC9,0x2F,0x06,0x78,0xFC,0xF1,0xAC,0xC2,0x8B,0x8E,0x0A,0xA1,0x0F,0x42,0xB9,0x2D,0x97,0x13,0x40,0xAA,0x37,0xC9,0xCA,0x72,0x28,0xA8,0xA4,0xAA,0x3D,0x40,},
{0x42,0xE3,0x35,0x82,0x49,0x3B,0x80,0xCC,0x6E,0x24,0x57,0x95,0xD4,0xEB,0x38,0xC1,0x63,0x42,0x21,0xAE,0xC6,0x5C,0x09,0x19,0x2F,0x2C,0x82,0x78,0x66,0x01,0xF5,0x3F,0x94,0x5D,0xA1,0x0F,0x00,0x42,0xCB,0x84,0x85,0x09,0xB0,0x2F,0x15,0x99,0xEE,0x1D,0x82,0xBC,0x66,0x4E,0x8D,0xD3,0xA1,0x0F,0x42,0x90,0x9A,0x37,0xCB,0x75,0xB4,0xD7,0x5D,0x77,0x1C,0x8E,0x95,0xB8,0xB3,0xE4,0x61,},
{0x42,0xAE,0x2F,0x10,0x66,0x4B,0xE1,0x81,0x82,0xDB,0xD1,0x0E,0xE3,0x2B,0x52,0xF6,0x36,0x42,0xA8,0x25,0x1B,0xCA,0xDF,0x42,0xA0,0x2D,0xE9,0x7B,0x69,0xB7,0x85,0x44,0x10,0x1D,0xA1,0x0F,0x00,0x42,0x87,0xB5,0xCE,0x32,0x74,0xE4,0x2B,0x1C,0x5B,0xA8,0xDF,0x2E,0x1B,0xC6,0x0B,0x13,0xA1,0x0F,0x42,0x00,0x92,0xB4,0x8C,0xAA,0x61,0x38,0xB3,0x0D,0xF3,0xAD,0xAE,0xC8,0x3C,0x4E,0xB4,},
{0x42,0x8D,0x9D,0xB7,0x06,0x41,0xA8,0xCD,0x80,0x28,0x7D,0xC9,0x14,0x65,0x3D,0x72,0xC7,0x42,0xE4,0xE4,0xD9,0xF1,0x93,0x94,0xD1,0x32,0xC5,0x7F,0x59,0xA9,0x1B,0x2B,0x8E,0x66,0xA1,0x0F,0x00,0x42,0xEF,0x89,0x37,0x68,0x9D,0xE6,0xF8,0xA2,0x1B,0x40,0xEB,0x24,0x63,0x1E,0xD0,0xE3,0xA1,0x0F,0x42,0x82,0x56,0xC3,0x10,0xFD,0x52,0x77,0xC4,0xB0,0x26,0xBF,0x8A,0xCB,0x4E,0xBB,0x6B,},
{0x42,0x7F,0x5F,0xD0,0xD5,0x39,0x20,0x91,0xA2,0x37,0x87,0x72,0xD2,0x71,0xA8,0x21,0x1D,0x42,0x6D,0xEC,0x6D,0xFA,0xBF,0x37,0x22,0xAD,0x38,0x60,0x08,0xA9,0x89,0x27,0xC7,0x26,0xA1,0x0F,0x00,0x42,0xEE,0x2D,0x56,0x41,0xC3,0x39,0xAA,0x01,0x89,0xEA,0x1C,0x7B,0xDF,0xFE,0x8B,0x62,0xA1,0x0F,0x42,0x19,0x07,0x62,0x4F,0x74,0xD4,0xEF,0xD0,0xF5,0x37,0x9E,0xDD,0x82,0x7B,0xFA,0xF0,},
{0x42,0x11,0xD8,0x0D,0x59,0xF0,0xD8,0xC1,0x9F,0x89,0x98,0xBB,0xE5,0x78,0xA7,0x50,0x39,0x42,0x53,0xC4,0xD4,0x39,0xDE,0xD4,0xCC,0x05,0x0E,0x0F,0x25,0xEE,0xCE,0x88,0x2F,0x32,0xA1,0x0F,0x00,0x42,0x43,0x96,0xEE,0x73,0x47,0xEE,0xEB,0x81,0x97,0x6B,0x0A,0x4F,0xA0,0x89,0x77,0x33,0xA1,0x0F,0x42,0x76,0x54,0x0B,0x08,0xF8,0x29,0x0B,0x8D,0xF1,0x5D,0x08,0xFC,0x2C,0x58,0x43,0x9D,},
};

static const TInt KDeliveryUrlCount = 10;

const TInt KCipherTextArrayLengthDelivUrl[] = {32,32,32,32,32,32,32,32,32,32,};

static const TUint8 KCipherTextArrayDeliveryUrl[10][48] = 
{
{0xE6,0x94,0x08,0x6A,0x4B,0xA9,0xFC,0x36,0x95,0x0E,0x49,0x9B,0x3D,0x38,0x06,0x1F,0xE1,0x9E,0x45,0xB6,0x0F,0xBF,0x37,0x2D,0x98,0xB1,0x5B,0x77,0xA2,0x08,0x01,0xEB,},
{0x63,0x16,0xA7,0xC9,0x23,0xD9,0x8A,0x92,0xE6,0xD4,0xA9,0xCE,0x17,0x05,0x46,0x3A,0x2D,0xDC,0x79,0x03,0x84,0x23,0x6C,0xDE,0x70,0xEA,0x41,0x47,0xDD,0x58,0x5C,0x02,},
{0xAE,0xE2,0xF8,0x44,0xBB,0x7C,0x24,0x7B,0x8B,0x53,0xD5,0x30,0x64,0xD3,0x82,0x87,0x05,0x64,0xA4,0x1F,0x73,0x4C,0x8A,0x25,0xC3,0xA6,0x84,0x7B,0x78,0xFC,0xBD,0xAC,},
{0xB8,0x7D,0x00,0xE0,0x2B,0x5A,0xBA,0x64,0x96,0x69,0x63,0xBC,0xE5,0x4A,0x8F,0xC9,0x2E,0xC7,0x06,0x1E,0xFA,0x32,0x6F,0x92,0xA4,0x46,0xDC,0x69,0x61,0x6E,0x3C,0x7D,},
{0xD1,0xEA,0x2F,0x0F,0x94,0x47,0x07,0x34,0x58,0x2E,0xDE,0x9E,0x52,0x49,0xD0,0xB7,0x4E,0xE2,0xAC,0x24,0x5F,0x95,0xD5,0x0E,0x31,0x44,0x0C,0x76,0x19,0xF8,0xE3,0x24,},
{0xEE,0x29,0x71,0x1C,0x7D,0x6B,0x23,0xFB,0x1A,0xC9,0x88,0xE4,0x52,0x7C,0x39,0x64,0x05,0x1D,0xE5,0xC0,0x18,0x6B,0xE7,0xE9,0x80,0x71,0x12,0x54,0xB0,0xA1,0xA3,0x1C,},
{0xF9,0x37,0x6F,0xDC,0x11,0x24,0x2D,0x5B,0x16,0x5E,0x8A,0x50,0x69,0x9D,0x06,0xBC,0x91,0x6B,0x43,0xC3,0x79,0xDF,0xA7,0x0E,0xE7,0xED,0x44,0x56,0x90,0x68,0x23,0x45,},
{0xD1,0xB9,0xC1,0xDC,0x43,0x3F,0xD2,0x9B,0x08,0xF7,0xC2,0x6E,0x25,0x55,0x86,0x75,0x0A,0x0F,0x3D,0x41,0x7E,0x45,0xC6,0xB4,0xBB,0xAE,0x32,0x69,0x6E,0x4F,0x24,0x49,},
{0xCA,0xDF,0xC0,0x38,0x11,0x41,0x70,0x38,0x06,0xFC,0x98,0xA7,0x8B,0x01,0xAE,0x7D,0x70,0x56,0xF7,0x4A,0x09,0xF8,0x13,0xDB,0x6D,0x3E,0xE1,0x04,0xFD,0xAE,0xBC,0x19,},
{0x62,0xFA,0x96,0x7E,0x81,0x4A,0xB0,0x84,0x2F,0xC9,0x8F,0x76,0x93,0x9B,0xF2,0x1F,0xC9,0x15,0x57,0x10,0x6C,0x97,0x73,0xAF,0xB9,0xDE,0x17,0x99,0x6C,0xEB,0x87,0x6A,},
};

static const TInt KEncryptionDataStreamLength = 73;
static const TUint8 KEncryptionDataStreamDeliveryUrl[10][73] = 
{
{0x42,0xB7,0x16,0x82,0x81,0x5E,0x51,0xC5,0x5A,0xF0,0x90,0x7F,0x00,0x25,0x27,0xDF,0x0A,0x42,0x1E,0xE3,0x0E,0x08,0x6C,0x18,0x2C,0xEC,0x73,0xBF,0x4F,0xB5,0xF6,0xB0,0x5D,0x59,0xA1,0x0F,0x00,0x42,0xDF,0x23,0x73,0x58,0xC5,0xC1,0xAF,0xF2,0xF4,0x20,0xEF,0xF3,0x03,0xC0,0x82,0x9B,0xA1,0x0F,0x42,0x25,0xB4,0x2F,0xA2,0xE3,0x05,0xB8,0x54,0xDF,0x46,0x8F,0x92,0xC3,0x2A,0xE2,0x35,},
{0x42,0x19,0x0D,0x63,0x0C,0x88,0xEB,0xD2,0x8D,0xDC,0x40,0xB2,0x38,0x1C,0x4C,0xE2,0xBD,0x42,0x8F,0xA5,0x80,0x0E,0x45,0x81,0x3A,0x27,0x69,0x4A,0xAF,0xEB,0xCA,0x31,0xA1,0x73,0xA1,0x0F,0x00,0x42,0x16,0xA1,0x0D,0x96,0x2A,0x8B,0xDE,0xAC,0xD6,0x4C,0x63,0x86,0x4A,0xE6,0x96,0x7A,0xA1,0x0F,0x42,0xE2,0x16,0xCA,0x02,0x16,0x30,0x0C,0xFB,0x49,0xDE,0xC0,0x1A,0xAF,0x0D,0x24,0xC5,},
{0x42,0x59,0x5D,0x2C,0x2B,0x18,0x8C,0x1C,0x84,0x9E,0xCF,0x58,0x08,0x0F,0x6E,0x40,0x2B,0x42,0xC2,0x31,0x7C,0xE6,0xB7,0x42,0x2E,0x37,0x8B,0xE0,0xD5,0xA3,0x69,0x77,0x35,0xBE,0xA1,0x0F,0x00,0x42,0xFE,0x34,0xC8,0x59,0x39,0x45,0x21,0xE9,0x9F,0x57,0xC4,0xBC,0x7A,0xF3,0xC0,0x6F,0xA1,0x0F,0x42,0x2B,0x7A,0xBD,0xD6,0xF0,0xED,0x76,0x3C,0x63,0xF5,0x7E,0xE9,0xF8,0xD2,0x58,0x55,},
{0x42,0x7F,0x3D,0xCF,0x6D,0x62,0x4B,0x8B,0x4D,0xF2,0x29,0xAB,0xCC,0x1A,0x09,0xA9,0x94,0x42,0x35,0x40,0xAE,0xE0,0x04,0xE6,0x7E,0x3E,0x10,0xF2,0x37,0x87,0xAE,0xD4,0x6E,0x13,0xA1,0x0F,0x00,0x42,0x47,0x05,0xF5,0x87,0x4C,0xB4,0x74,0x1A,0x5B,0xE1,0x2A,0x30,0x03,0x60,0x1F,0xFD,0xA1,0x0F,0x42,0xFB,0xB7,0xBA,0x51,0x4B,0x4E,0x8C,0xCD,0x73,0x44,0x3F,0xCC,0xB3,0x01,0xF0,0x53,},
{0x42,0xCA,0x48,0x15,0x3E,0x11,0x99,0x9D,0xE9,0x43,0x3F,0x60,0x98,0x0A,0xF9,0x68,0x16,0x42,0xDB,0xEA,0xE9,0x9B,0x7E,0x09,0x11,0x25,0xB8,0x91,0xC8,0xD8,0x43,0x19,0x03,0x42,0xA1,0x0F,0x00,0x42,0xC4,0x08,0x2C,0x62,0x52,0x6C,0xE1,0x44,0x6F,0xA0,0x25,0xCC,0x94,0x13,0x76,0x23,0xA1,0x0F,0x42,0x54,0xF6,0x34,0x84,0xA8,0xDE,0xD0,0x03,0xD1,0xE7,0x1F,0x32,0xB4,0xC3,0xB8,0x35,},
{0x42,0x73,0xD1,0xD2,0xA9,0xBF,0x4A,0x0C,0x39,0xBB,0x54,0xC2,0x7E,0x6F,0xE2,0x5D,0xD6,0x42,0xB5,0x33,0x35,0xBC,0x44,0x90,0xEC,0x12,0x59,0xA9,0x34,0x6A,0x84,0xA9,0x2C,0x5D,0xA1,0x0F,0x00,0x42,0x7A,0x02,0x42,0xA6,0x39,0x31,0xE6,0x9D,0x11,0x65,0x8E,0x56,0x0F,0x9B,0x31,0xFE,0xA1,0x0F,0x42,0x21,0xED,0xAB,0xBE,0x29,0xF5,0xAD,0xFD,0xBF,0xD6,0xD0,0xC4,0x3D,0xEA,0x12,0xBB,},
{0x42,0x60,0x2F,0x86,0xF6,0x94,0xD6,0x6E,0x70,0xE4,0x13,0x50,0x03,0x18,0x16,0x5C,0x93,0x42,0xA6,0x82,0x52,0x66,0xDC,0x0F,0x74,0x9E,0x1A,0xCB,0xCD,0xDA,0xBB,0xF5,0x8B,0x0B,0xA1,0x0F,0x00,0x42,0x51,0x4A,0x92,0x39,0x58,0x7F,0x2B,0x48,0xF4,0x75,0xD4,0xB2,0x63,0x7B,0x49,0x03,0xA1,0x0F,0x42,0x5D,0xA5,0x73,0xD8,0x1D,0x1F,0x1B,0xFC,0x66,0x29,0x7B,0x96,0xF3,0xC3,0x71,0x1F,},
{0x42,0x01,0x16,0xD2,0x4C,0xDD,0x65,0xE3,0x63,0x66,0x53,0xC1,0x2E,0x82,0xD5,0xCC,0x41,0x42,0x6E,0x48,0xAC,0x50,0xB7,0x3D,0x0F,0x5D,0x52,0xE0,0xAA,0x2F,0x38,0x6C,0xD9,0xA4,0xA1,0x0F,0x00,0x42,0x8D,0xB5,0x22,0x6D,0xB5,0x9F,0xDE,0xE3,0x3B,0x75,0x7C,0x9A,0x14,0x99,0x22,0x06,0xA1,0x0F,0x42,0xAC,0xD9,0x5D,0xB5,0xEB,0x97,0x0C,0x1A,0x4E,0x90,0x24,0x47,0x0A,0x5C,0x77,0xFF,},
{0x42,0x17,0xEF,0xF1,0x1E,0xF7,0x5A,0x36,0x25,0x5A,0x8B,0xF3,0x59,0x16,0xBC,0x86,0xEF,0x42,0x12,0x99,0x16,0xE5,0x7E,0xA5,0x9B,0x30,0xD2,0xAB,0xD1,0xA6,0x3A,0xB4,0x04,0x12,0xA1,0x0F,0x00,0x42,0x19,0x45,0x10,0x5D,0xFC,0xA8,0x7B,0x95,0x82,0x02,0xB0,0x1D,0x76,0x11,0x78,0xC3,0xA1,0x0F,0x42,0x90,0xCC,0xA4,0xA4,0x3B,0x9C,0xE0,0xDB,0xE6,0xDB,0xCB,0x78,0x76,0x72,0xE8,0x9F,},
{0x42,0x5B,0xDE,0x5E,0xA2,0x1E,0x5C,0x37,0x6A,0xFB,0x45,0xC7,0x9F,0xB1,0x8A,0x43,0xAF,0x42,0xAF,0x2A,0x7B,0xE0,0xDF,0xEC,0x62,0x4C,0x42,0xF6,0x28,0x55,0x36,0xE0,0xF6,0x8F,0xA1,0x0F,0x00,0x42,0x42,0x39,0x5A,0x3E,0x55,0xF5,0xD9,0xA6,0x5B,0xF7,0xFA,0xEF,0xED,0x19,0x66,0xFD,0xA1,0x0F,0x42,0xF9,0x5C,0xB1,0x7C,0xDB,0x2C,0xCE,0x37,0x41,0xA7,0x09,0x7D,0x56,0x2C,0xBB,0xA8,},
};

#endif
