
#ifndef  Nokia6610LCDFONTS_H
#define  Nokia6610LCDFONTS_H

#ifdef __cplusplus
extern "C"
{
#endif

unsigned char Nokia6610_fnt8x8[][8] =
{
{ 0x08, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00 },             // columns, rows, num_bytes_per_char
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },             //DEL[32]
		{ 0x00, 0x06, 0x5F, 0x5F, 0x06, 0x00, 0x00, 0x00 },             //!  [33]
		{ 0x00, 0x07, 0x07, 0x00, 0x07, 0x07, 0x00, 0x00 },             //"  [34]
		{ 0x14, 0x7F, 0x7F, 0x14, 0x7F, 0x7F, 0x14, 0x00 },             //#  [35]
		{ 0x24, 0x2E, 0x6B, 0x6B, 0x3A, 0x12, 0x00, 0x00 },             //$  [36]
		{ 0x46, 0x66, 0x30, 0x18, 0x0C, 0x66, 0x62, 0x00 },             //%  [37]
		{ 0x30, 0x7A, 0x4F, 0x5D, 0x37, 0x7A, 0x48, 0x00 },             //&  [38]
		{ 0x04, 0x07, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00 },             //'  [39]
		{ 0x00, 0x1C, 0x3E, 0x63, 0x41, 0x00, 0x00, 0x00 },             //(  [40]
		{ 0x00, 0x41, 0x63, 0x3E, 0x1C, 0x00, 0x00, 0x00 },             //)  [41]
		{ 0x08, 0x2A, 0x3E, 0x1C, 0x1C, 0x3E, 0x2A, 0x08 },             //*  [42]
		{ 0x08, 0x08, 0x3E, 0x3E, 0x08, 0x08, 0x00, 0x00 },             //+  [43]
		{ 0x00, 0x80, 0xE0, 0x60, 0x00, 0x00, 0x00, 0x00 },             //,  [44]
		{ 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x00 },             //-  [45]
		{ 0x00, 0x00, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00 },             //.  [46]
		{ 0x60, 0x30, 0x18, 0x0C, 0x06, 0x03, 0x01, 0x00 },             ///  [47]
		{ 0x3E, 0x7F, 0x41, 0x49, 0x41, 0x7F, 0x3E, 0x00 },             //0  [48]
		{ 0x40, 0x42, 0x7F, 0x7F, 0x40, 0x40, 0x00, 0x00 },             //1  [49]
		{ 0x62, 0x73, 0x59, 0x49, 0x6F, 0x66, 0x00, 0x00 },             //2  [50]
		{ 0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00 },             //3  [51]
		{ 0x18, 0x1C, 0x16, 0x53, 0x7F, 0x7F, 0x50, 0x00 },             //4  [52]
		{ 0x27, 0x67, 0x45, 0x45, 0x7D, 0x39, 0x00, 0x00 },             //5  [53]
		{ 0x3C, 0x7E, 0x4B, 0x49, 0x79, 0x30, 0x00, 0x00 },             //6  [54]
		{ 0x03, 0x03, 0x71, 0x79, 0x0F, 0x07, 0x00, 0x00 },             //7  [55]
		{ 0x36, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00, 0x00 },             //8  [56]
		{ 0x06, 0x4F, 0x49, 0x69, 0x3F, 0x1E, 0x00, 0x00 },             //9  [57]
		{ 0x00, 0x00, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00 },             //:  [58]
		{ 0x00, 0x80, 0xE6, 0x66, 0x00, 0x00, 0x00, 0x00 },             //;  [59]
		{ 0x08, 0x1C, 0x36, 0x63, 0x41, 0x00, 0x00, 0x00 },             //<  [60]
		{ 0x24, 0x24, 0x24, 0x24, 0x24, 0x24, 0x00, 0x00 },             //=  [61]
		{ 0x00, 0x41, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00 },             //>  [62]
		{ 0x02, 0x03, 0x51, 0x59, 0x0F, 0x06, 0x00, 0x00 },             //?  [63]
		{ 0x3E, 0x7F, 0x41, 0x5D, 0x5D, 0x1F, 0x1E, 0x00 },             //@  [64]
		{ 0x7C, 0x7E, 0x13, 0x13, 0x7E, 0x7C, 0x00, 0x00 },             //A  [65]
		{ 0x41, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00 },             //B  [66]
		{ 0x1C, 0x3E, 0x63, 0x41, 0x41, 0x63, 0x22, 0x00 },             //C  [67]
		{ 0x41, 0x7F, 0x7F, 0x41, 0x63, 0x3E, 0x1C, 0x00 },             //D  [68]
		{ 0x41, 0x7F, 0x7F, 0x49, 0x5D, 0x41, 0x63, 0x00 },             //E  [69]
		{ 0x41, 0x7F, 0x7F, 0x49, 0x1D, 0x01, 0x03, 0x00 },             //F  [70]
		{ 0x1C, 0x3E, 0x63, 0x41, 0x51, 0x73, 0x72, 0x00 },             //G  [71]
		{ 0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00, 0x00 },             //H  [72]
		{ 0x00, 0x41, 0x7F, 0x7F, 0x41, 0x00, 0x00, 0x00 },             //I  [73]
		{ 0x30, 0x70, 0x40, 0x41, 0x7F, 0x3F, 0x01, 0x00 },             //J  [74]
		{ 0x41, 0x7F, 0x7F, 0x08, 0x1C, 0x77, 0x63, 0x00 },             //K  [75]
		{ 0x41, 0x7F, 0x7F, 0x41, 0x40, 0x60, 0x70, 0x00 },             //L  [76]
		{ 0x7F, 0x7F, 0x0E, 0x1C, 0x0E, 0x7F, 0x7F, 0x00 },             //M  [77]
		{ 0x7F, 0x7F, 0x06, 0x0C, 0x18, 0x7F, 0x7F, 0x00 },             //N  [78]
		{ 0x1C, 0x3E, 0x63, 0x41, 0x63, 0x3E, 0x1C, 0x00 },             //O  [79]
		{ 0x41, 0x7F, 0x7F, 0x49, 0x09, 0x0F, 0x06, 0x00 },             //P  [80]
		{ 0x1E, 0x3F, 0x21, 0x71, 0x7F, 0x5E, 0x00, 0x00 },             //Q  [81]
		{ 0x41, 0x7F, 0x7F, 0x09, 0x19, 0x7F, 0x66, 0x00 },             //R  [82]
		{ 0x26, 0x6F, 0x4D, 0x59, 0x73, 0x32, 0x00, 0x00 },             //S  [83]
		{ 0x03, 0x41, 0x7F, 0x7F, 0x41, 0x03, 0x00, 0x00 },             //T  [84]
		{ 0x7F, 0x7F, 0x40, 0x40, 0x7F, 0x7F, 0x00, 0x00 },             //U  [85]
		{ 0x1F, 0x3F, 0x60, 0x60, 0x3F, 0x1F, 0x00, 0x00 },             //V  [86]
		{ 0x7F, 0x7F, 0x30, 0x18, 0x30, 0x7F, 0x7F, 0x00 },             //W  [87]
		{ 0x43, 0x67, 0x3C, 0x18, 0x3C, 0x67, 0x43, 0x00 },             //X  [88]
		{ 0x07, 0x4F, 0x78, 0x78, 0x4F, 0x07, 0x00, 0x00 },             //Y  [89]
		{ 0x47, 0x63, 0x71, 0x59, 0x4D, 0x67, 0x73, 0x00 },             //Z  [90]
		{ 0x00, 0x7F, 0x7F, 0x41, 0x41, 0x00, 0x00, 0x00 },             //[  [91]
		{ 0x01, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00 },             //\  [92]
		{ 0x00, 0x41, 0x41, 0x7F, 0x7F, 0x00, 0x00, 0x00 },             //]  [93]
		{ 0x08, 0x0C, 0x06, 0x03, 0x06, 0x0C, 0x08, 0x00 },             //^  [94]
		{ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80 },             //_  [95]
		{ 0x00, 0x00, 0x03, 0x07, 0x04, 0x00, 0x00, 0x00 },             //`  [96]
		{ 0x20, 0x74, 0x54, 0x54, 0x3C, 0x78, 0x40, 0x00 },             //a  [97]
		{ 0x41, 0x7F, 0x3F, 0x48, 0x48, 0x78, 0x30, 0x00 },             //b  [98]
		{ 0x38, 0x7C, 0x44, 0x44, 0x6C, 0x28, 0x00, 0x00 },             //c  [99]
		{ 0x30, 0x78, 0x48, 0x49, 0x3F, 0x7F, 0x40, 0x00 },             //d  [100]
		{ 0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18, 0x00, 0x00 },             //e  [101]
		{ 0x48, 0x7E, 0x7F, 0x49, 0x03, 0x02, 0x00, 0x00 },             //f  [102]
		{ 0x98, 0xBC, 0xA4, 0xA4, 0xF8, 0x7C, 0x04, 0x00 },             //g  [103]
		{ 0x41, 0x7F, 0x7F, 0x08, 0x04, 0x7C, 0x78, 0x00 },             //h  [104]
		{ 0x00, 0x44, 0x7D, 0x7D, 0x40, 0x00, 0x00, 0x00 },             //i  [105]
		{ 0x60, 0xE0, 0x80, 0x80, 0xFD, 0x7D, 0x00, 0x00 },             //j  [106]
		{ 0x41, 0x7F, 0x7F, 0x10, 0x38, 0x6C, 0x44, 0x00 },             //k  [107]
		{ 0x00, 0x41, 0x7F, 0x7F, 0x40, 0x00, 0x00, 0x00 },             //l  [108]
		{ 0x7C, 0x7C, 0x18, 0x38, 0x1C, 0x7C, 0x78, 0x00 },             //m  [109]
		{ 0x7C, 0x7C, 0x04, 0x04, 0x7C, 0x78, 0x00, 0x00 },             //n  [110]
		{ 0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, 0x00, 0x00 },             //o  [111]
		{ 0x84, 0xFC, 0xF8, 0xA4, 0x24, 0x3C, 0x18, 0x00 },             //p  [112]
		{ 0x18, 0x3C, 0x24, 0xA4, 0xF8, 0xFC, 0x84, 0x00 },             //q  [113]
		{ 0x44, 0x7C, 0x78, 0x4C, 0x04, 0x1C, 0x18, 0x00 },             //r  [114]
		{ 0x48, 0x5C, 0x54, 0x54, 0x74, 0x24, 0x00, 0x00 },             //s  [115]
		{ 0x00, 0x04, 0x3E, 0x7F, 0x44, 0x24, 0x00, 0x00 },             //t  [116]
		{ 0x3C, 0x7C, 0x40, 0x40, 0x3C, 0x7C, 0x40, 0x00 },             //u  [117]
		{ 0x1C, 0x3C, 0x60, 0x60, 0x3C, 0x1C, 0x00, 0x00 },             //v  [118]
		{ 0x3C, 0x7C, 0x70, 0x38, 0x70, 0x7C, 0x3C, 0x00 },             //w  [119]
		{ 0x44, 0x6C, 0x38, 0x10, 0x38, 0x6C, 0x44, 0x00 },             //x  [120]
		{ 0x9C, 0xBC, 0xA0, 0xA0, 0xFC, 0x7C, 0x00, 0x00 },             //y  [121]
		{ 0x4C, 0x64, 0x74, 0x5C, 0x4C, 0x64, 0x00, 0x00 },             //z  [122]
		{ 0x08, 0x08, 0x3E, 0x77, 0x41, 0x41, 0x00, 0x00 },             //{  [123]
		{ 0x00, 0x00, 0x00, 0x7F, 0x7F, 0x00, 0x00, 0x00 },             //|  [124]
		{ 0x41, 0x41, 0x77, 0x3E, 0x08, 0x08, 0x00, 0x00 },             //}  [125]
		{ 0x02, 0x03, 0x01, 0x03, 0x02, 0x03, 0x01, 0x00 },             //~  [126]
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 },             //   [127]

		{ 0x00, 0x7C, 0x7E, 0x13, 0x11, 0x7F, 0x7F, 0x00 },             //А [192]
		{ 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x79, 0x30, 0x00 },             //Р‘  [193]
		{ 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x7F, 0x36, 0x00 },             //Р’  [194]
		{ 0x00, 0x7F, 0x7F, 0x01, 0x01, 0x01, 0x01, 0x00 },             //Р“  [195]
		{ 0xC0, 0xFE, 0x7F, 0x41, 0x7F, 0xFE, 0xC0, 0x00 },             //Р”  [196]
		{ 0x00, 0x7F, 0x7F, 0x49, 0x49, 0x49, 0x41, 0x00 },             //Р•  [197]
		{ 0x63, 0x77, 0x1C, 0x7F, 0x7F, 0x1C, 0x77, 0x63 },             //Р–  [198]
		{ 0x00, 0x22, 0x63, 0x49, 0x49, 0x7F, 0x36, 0x00 },             //Р—  [199]
		{ 0x00, 0x7F, 0x7F, 0x18, 0x0C, 0x7F, 0x7F, 0x00 },             //Р�  [200]
		{ 0x00, 0x7E, 0x7F, 0x19, 0x0D, 0x7F, 0x7E, 0x00 },             //Р™  [201]
		{ 0x00, 0x7F, 0x7F, 0x1C, 0x36, 0x63, 0x41, 0x00 },             //Рљ  [202]
		{ 0x00, 0x7C, 0x7E, 0x03, 0x01, 0x7F, 0x7F, 0x00 },             //Р›  [203]
		{ 0x7F, 0x7F, 0x0E, 0x1C, 0x0E, 0x7F, 0x7F, 0x00 },             //Рњ  [204]
		{ 0x00, 0x7F, 0x7F, 0x08, 0x08, 0x7F, 0x7F, 0x00 },             //Рќ  [205]
		{ 0x00, 0x3E, 0x7F, 0x41, 0x41, 0x7F, 0x3E, 0x00 },             //Рћ  [206]
		{ 0x00, 0x7F, 0x7F, 0x01, 0x01, 0x7F, 0x7F, 0x00 },             //Рџ  [207]
		{ 0x00, 0x7F, 0x7F, 0x11, 0x11, 0x1F, 0x0E, 0x00 },             //Р   [208]
		{ 0x00, 0x3E, 0x7F, 0x41, 0x41, 0x63, 0x22, 0x00 },             //РЎ  [209]
		{ 0x00, 0x01, 0x01, 0x7F, 0x7F, 0x01, 0x01, 0x00 },             //Рў  [210]
		{ 0x00, 0x27, 0x6F, 0x48, 0x48, 0x7F, 0x3F, 0x00 },             //РЈ  [211]
		{ 0x0E, 0x1F, 0x11, 0x7F, 0x7F, 0x11, 0x1F, 0x0E },             //Р¤  [212]
		{ 0x00, 0x63, 0x77, 0x1C, 0x1C, 0x77, 0x63, 0x00 },             //РҐ  [213]
		{ 0x00, 0x7F, 0x7F, 0x40, 0x40, 0x7F, 0xFF, 0xC0 },             //Р¦  [214]
		{ 0x00, 0x07, 0x0F, 0x08, 0x08, 0x7F, 0x7F, 0x00 },             //Р§  [215]
		{ 0x7F, 0x7F, 0x40, 0x7F, 0x7F, 0x40, 0x7F, 0x7F },             //РЁ  [216]
		{ 0x7F, 0x7F, 0x40, 0x7F, 0x7F, 0x40, 0xFF, 0xFF },             //Р©  [217]
		{ 0x01, 0x7F, 0x7F, 0x48, 0x48, 0x78, 0x30, 0x00 },             //РЄ  [218]
		{ 0x7F, 0x7F, 0x48, 0x78, 0x30, 0x7F, 0x7F, 0x00 },             //Р«  [219]
		{ 0x00, 0x7F, 0x7F, 0x48, 0x48, 0x78, 0x30, 0x00 },             //Р¬  [220]
		{ 0x22, 0x41, 0x49, 0x49, 0x6B, 0x3E, 0x1C, 0x00 },             //Р­  [221]
		{ 0x7F, 0x7F, 0x08, 0x3E, 0x7F, 0x41, 0x7F, 0x3E },             //Р®  [222]
		{ 0x00, 0x4E, 0x7F, 0x31, 0x11, 0x7F, 0x7F, 0x00 },             //РЇ  [223]
		{ 0x20, 0x74, 0x54, 0x54, 0x3C, 0x78, 0x40, 0x00 },             //Р°  [224]
		{ 0x00, 0x34, 0x7E, 0x4A, 0x4A, 0x7A, 0x30, 0x00 },             //Р±  [225]
		{ 0x00, 0x7C, 0x7C, 0x54, 0x54, 0x7C, 0x28, 0x00 },             //РІ  [226]
		{ 0x00, 0x7C, 0x7C, 0x04, 0x04, 0x04, 0x04, 0x00 },             //Рі  [227]
		{ 0xC0, 0xF8, 0x7C, 0x44, 0x7C, 0xFC, 0xC0, 0x00 },             //Рґ  [228]
		{ 0x00, 0x38, 0x7C, 0x54, 0x54, 0x5C, 0x18, 0x00 },             //Рµ  [229]
		{ 0x44, 0x6C, 0x38, 0x7C, 0x7C, 0x38, 0x6C, 0x44 },             //Р¶  [230]
		{ 0x00, 0x28, 0x6C, 0x44, 0x54, 0x7C, 0x28, 0x00 },             //Р·  [231]
		{ 0x00, 0x7C, 0x7C, 0x30, 0x18, 0x7C, 0x7C, 0x00 },             //Рё  [232]
		{ 0x00, 0x7C, 0x7C, 0x32, 0x1A, 0x7C, 0x7C, 0x00 },             //Р№  [233]
		{ 0x00, 0x7C, 0x7C, 0x10, 0x38, 0x6C, 0x44, 0x00 },             //Рє  [234]
		{ 0x00, 0x70, 0x78, 0x0C, 0x04, 0x7C, 0x7C, 0x00 },             //Р»  [235]
		{ 0x7C, 0x7C, 0x18, 0x38, 0x18, 0x7C, 0x7C, 0x00 },             //Рј  [236]
		{ 0x00, 0x7C, 0x7C, 0x10, 0x10, 0x7C, 0x7C, 0x00 },             //РЅ  [237]
		{ 0x00, 0x38, 0x7C, 0x44, 0x44, 0x7C, 0x38, 0x00 },             //Рѕ  [238]
		{ 0x00, 0x7C, 0x7C, 0x04, 0x04, 0x7C, 0x7C, 0x00 },             //Рї  [239]
		{ 0x00, 0x7C, 0x7C, 0x24, 0x24, 0x3C, 0x18, 0x00 },             //СЂ  [240]
		{ 0x00, 0x38, 0x7C, 0x44, 0x44, 0x6C, 0x28, 0x00 },             //СЃ  [241]
		{ 0x00, 0x04, 0x04, 0x7C, 0x7C, 0x04, 0x04, 0x00 },             //С‚  [242]
		{ 0x00, 0x0C, 0x5C, 0x50, 0x50, 0x7C, 0x3C, 0x00 },             //Сѓ  [243]
		{ 0x18, 0x3C, 0x24, 0x7C, 0x7C, 0x24, 0x3C, 0x18 },             //С„  [244]
		{ 0x00, 0x44, 0x6C, 0x38, 0x38, 0x6C, 0x44, 0x00 },             //С…  [245]
		{ 0x00, 0x7C, 0x7C, 0x40, 0x40, 0x7C, 0xFC, 0xC0 },             //С†  [246]
		{ 0x00, 0x0C, 0x1C, 0x10, 0x10, 0x7C, 0x7C, 0x00 },             //С‡  [247]
		{ 0x7C, 0x7C, 0x40, 0x7C, 0x7C, 0x40, 0x7C, 0x7C },             //С€  [248]
		{ 0x7C, 0x7C, 0x40, 0x7C, 0x7C, 0x40, 0xFC, 0xFC },             //С‰  [249]
		{ 0x04, 0x7C, 0x7C, 0x50, 0x50, 0x70, 0x20, 0x00 },             //СЉ  [250]
		{ 0x7C, 0x7C, 0x50, 0x70, 0x20, 0x7C, 0x7C, 0x00 },             //С‹  [251]
		{ 0x00, 0x7C, 0x7C, 0x50, 0x50, 0x70, 0x20, 0x00 },             //СЊ  [252]
		{ 0x00, 0x44, 0x54, 0x54, 0x54, 0x7C, 0x38, 0x00 },             //СЌ  [253]
		{ 0x7C, 0x7C, 0x10, 0x38, 0x7C, 0x44, 0x7C, 0x38 },             //СЋ  [254]
		{ 0x00, 0x48, 0x7C, 0x34, 0x14, 0x7C, 0x7C, 0x00 }             //СЏ  [255]

};

unsigned char Nokia6610_fnt6x8[97][8] =
{
{ 0x06, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00 }, // columns, rows, num_bytes_per_char
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // space 0x20
		{ 0x20, 0x20, 0x20, 0x20, 0x20, 0x00, 0x20, 0x00 }, // !
		{ 0x50, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00 }, // "
		{ 0x50, 0x50, 0xF8, 0x50, 0xF8, 0x50, 0x50, 0x00 }, // #
		{ 0x20, 0x78, 0xA0, 0x70, 0x28, 0xF0, 0x20, 0x00 }, // $
		{ 0xC0, 0xC8, 0x10, 0x20, 0x40, 0x98, 0x18, 0x00 }, // %
		{ 0x40, 0xA0, 0xA0, 0x40, 0xA8, 0x90, 0x68, 0x00 }, // &
		{ 0x30, 0x30, 0x20, 0x40, 0x00, 0x00, 0x00, 0x00 }, // '
		{ 0x10, 0x20, 0x40, 0x40, 0x40, 0x20, 0x10, 0x00 }, // (
		{ 0x40, 0x20, 0x10, 0x10, 0x10, 0x20, 0x40, 0x00 }, // )
		{ 0x00, 0x20, 0xA8, 0x70, 0x70, 0xA8, 0x20, 0x00 }, // *
		{ 0x00, 0x20, 0x20, 0xF8, 0x20, 0x20, 0x00, 0x00 }, // +
		{ 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x20, 0x40 }, // ,
		{ 0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00 }, // -
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x00 }, // .
		{ 0x00, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00 }, // / (forward slash)
		{ 0x70, 0x88, 0x88, 0xA8, 0x88, 0x88, 0x70, 0x00 }, // 0 0x30
		{ 0x20, 0x60, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00 }, // 1
		{ 0x70, 0x88, 0x08, 0x70, 0x80, 0x80, 0xF8, 0x00 }, // 2
		{ 0xF8, 0x08, 0x10, 0x30, 0x08, 0x88, 0x70, 0x00 }, // 3
		{ 0x10, 0x30, 0x50, 0x90, 0xF8, 0x10, 0x10, 0x00 }, // 4
		{ 0xF8, 0x80, 0xF0, 0x08, 0x08, 0x88, 0x70, 0x00 }, // 5
		{ 0x38, 0x40, 0x80, 0xF0, 0x88, 0x88, 0x70, 0x00 }, // 6
		{ 0xF8, 0x08, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00 }, // 7
		{ 0x70, 0x88, 0x88, 0x70, 0x88, 0x88, 0x70, 0x00 }, // 8
		{ 0x70, 0x88, 0x88, 0x78, 0x08, 0x10, 0xE0, 0x00 }, // 9
		{ 0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x00, 0x00 }, // :
		{ 0x00, 0x00, 0x20, 0x00, 0x20, 0x20, 0x40, 0x00 }, // ;
		{ 0x08, 0x10, 0x20, 0x40, 0x20, 0x10, 0x08, 0x00 }, // <
		{ 0x00, 0x00, 0xF8, 0x00, 0xF8, 0x00, 0x00, 0x00 }, // =
		{ 0x40, 0x20, 0x10, 0x08, 0x10, 0x20, 0x40, 0x00 }, // >
		{ 0x70, 0x88, 0x08, 0x30, 0x20, 0x00, 0x20, 0x00 }, // ?
		{ 0x70, 0x88, 0xA8, 0xB8, 0xB0, 0x80, 0x78, 0x00 }, // @ 0x40
		{ 0x20, 0x50, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x00 }, // A
		{ 0xF0, 0x88, 0x88, 0xF0, 0x88, 0x88, 0xF0, 0x00 }, // B
		{ 0x70, 0x88, 0x80, 0x80, 0x80, 0x88, 0x70, 0x00 }, // C
		{ 0xF0, 0x88, 0x88, 0x88, 0x88, 0x88, 0xF0, 0x00 }, // D
		{ 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0xF8, 0x00 }, // E
		{ 0xF8, 0x80, 0x80, 0xF0, 0x80, 0x80, 0x80, 0x00 }, // F
		{ 0x78, 0x88, 0x80, 0x80, 0x98, 0x88, 0x78, 0x00 }, // G
		{ 0x88, 0x88, 0x88, 0xF8, 0x88, 0x88, 0x88, 0x00 }, // H
		{ 0x70, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00 }, // I
		{ 0x38, 0x10, 0x10, 0x10, 0x10, 0x90, 0x60, 0x00 }, // J
		{ 0x88, 0x90, 0xA0, 0xC0, 0xA0, 0x90, 0x88, 0x00 }, // K
		{ 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0x00 }, // L
		{ 0x88, 0xD8, 0xA8, 0xA8, 0xA8, 0x88, 0x88, 0x00 }, // M
		{ 0x88, 0x88, 0xC8, 0xA8, 0x98, 0x88, 0x88, 0x00 }, // N
		{ 0x70, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00 }, // O
		{ 0xF0, 0x88, 0x88, 0xF0, 0x80, 0x80, 0x80, 0x00 }, // P 0x50
		{ 0x70, 0x88, 0x88, 0x88, 0xA8, 0x90, 0x68, 0x00 }, // Q
		{ 0xF0, 0x88, 0x88, 0xF0, 0xA0, 0x90, 0x88, 0x00 }, // R
		{ 0x70, 0x88, 0x80, 0x70, 0x08, 0x88, 0x70, 0x00 }, // S
		{ 0xF8, 0xA8, 0x20, 0x20, 0x20, 0x20, 0x20, 0x00 }, // T
		{ 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x70, 0x00 }, // U
		{ 0x88, 0x88, 0x88, 0x88, 0x88, 0x50, 0x20, 0x00 }, // V
		{ 0x88, 0x88, 0x88, 0xA8, 0xA8, 0xA8, 0x50, 0x00 }, // W
		{ 0x88, 0x88, 0x50, 0x20, 0x50, 0x88, 0x88, 0x00 }, // X
		{ 0x88, 0x88, 0x50, 0x20, 0x20, 0x20, 0x20, 0x00 }, // Y
		{ 0xF8, 0x08, 0x10, 0x70, 0x40, 0x80, 0xF8, 0x00 }, // Z
		{ 0x78, 0x40, 0x40, 0x40, 0x40, 0x40, 0x78, 0x00 }, // [
		{ 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x00, 0x00 }, // \ (back slash)
		{ 0x78, 0x08, 0x08, 0x08, 0x08, 0x08, 0x78, 0x00 }, // ] 0x20,0x50,0x88,0x00,0x00,0x00,0x00,0x00}, // ^
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x00 }, // _
		{ 0x60, 0x60, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00 }, // ` 0x60
		{ 0x00, 0x00, 0x60, 0x10, 0x70, 0x90, 0x78, 0x00 }, // a
		{ 0x80, 0x80, 0xB0, 0xC8, 0x88, 0xC8, 0xB0, 0x00 }, // b
		{ 0x00, 0x00, 0x70, 0x88, 0x80, 0x88, 0x70, 0x00 }, // c
		{ 0x08, 0x08, 0x68, 0x98, 0x88, 0x98, 0x68, 0x00 }, // d
		{ 0x00, 0x00, 0x70, 0x88, 0xF8, 0x80, 0x70, 0x00 }, // e
		{ 0x10, 0x28, 0x20, 0x70, 0x20, 0x20, 0x20, 0x00 }, // f
		{ 0x00, 0x00, 0x70, 0x98, 0x98, 0x68, 0x08, 0x70 }, // g
		{ 0x80, 0x80, 0xB0, 0xC8, 0x88, 0x88, 0x88, 0x00 }, // h
		{ 0x20, 0x00, 0x60, 0x20, 0x20, 0x20, 0x70, 0x00 }, // i
		{ 0x10, 0x00, 0x10, 0x10, 0x10, 0x90, 0x60, 0x00 }, // j
		{ 0x80, 0x80, 0x90, 0xA0, 0xC0, 0xA0, 0x90, 0x00 }, // k
		{ 0x60, 0x20, 0x20, 0x20, 0x20, 0x20, 0x70, 0x00 }, // l
		{ 0x00, 0x00, 0xD0, 0xA8, 0xA8, 0xA8, 0xA8, 0x00 }, // m
		{ 0x00, 0x00, 0xB0, 0xC8, 0x88, 0x88, 0x88, 0x00 }, // n
		{ 0x00, 0x00, 0x70, 0x88, 0x88, 0x88, 0x70, 0x00 }, // o
		{ 0x00, 0x00, 0xB0, 0xC8, 0xC8, 0xB0, 0x80, 0x80 }, // p 0x70
		{ 0x00, 0x00, 0x68, 0x98, 0x98, 0x68, 0x08, 0x08 }, // q
		{ 0x00, 0x00, 0xB0, 0xC8, 0x80, 0x80, 0x80, 0x00 }, // r
		{ 0x00, 0x00, 0x78, 0x80, 0x70, 0x08, 0xF0, 0x00 }, // s
		{ 0x20, 0x20, 0xF8, 0x20, 0x20, 0x28, 0x10, 0x00 }, // t
		{ 0x00, 0x00, 0x88, 0x88, 0x88, 0x98, 0x68, 0x00 }, // u
		{ 0x00, 0x00, 0x88, 0x88, 0x88, 0x50, 0x20, 0x00 }, // v
		{ 0x00, 0x00, 0x88, 0x88, 0xA8, 0xA8, 0x50, 0x00 }, // w
		{ 0x00, 0x00, 0x88, 0x50, 0x20, 0x50, 0x88, 0x00 }, // x
		{ 0x00, 0x00, 0x88, 0x88, 0x78, 0x08, 0x88, 0x70 }, // y
		{ 0x00, 0x00, 0xF8, 0x10, 0x20, 0x40, 0xF8, 0x00 }, // z
		{ 0x10, 0x20, 0x20, 0x40, 0x20, 0x20, 0x10, 0x00 }, // {
		{ 0x20, 0x20, 0x20, 0x00, 0x20, 0x20, 0x20, 0x00 }, // |
		{ 0x40, 0x20, 0x20, 0x10, 0x20, 0x20, 0x40, 0x00 }, // }
		{ 0x40, 0xA8, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00 }, // ~
		{ 0x70, 0xD8, 0xD8, 0x70, 0x00, 0x00, 0x00, 0x00 }  // DEL

};

unsigned char Nokia6610_fnt8x16[97][16] =
{
{ 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // columns, rows, num_bytes_per_char
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // space 0x20
		{ 0x00, 0x00, 0x18, 0x3C, 0x3C, 0x3C, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 }, // !
		{ 0x00, 0x63, 0x63, 0x63, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // "
		{ 0x00, 0x00, 0x00, 0x36, 0x36, 0x7F, 0x36, 0x36, 0x36, 0x7F, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00 }, // #
		{ 0x0C, 0x0C, 0x3E, 0x63, 0x61, 0x60, 0x3E, 0x03, 0x03, 0x43, 0x63, 0x3E, 0x0C, 0x0C, 0x00, 0x00 }, // $
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x63, 0x06, 0x0C, 0x18, 0x33, 0x63, 0x00, 0x00, 0x00, 0x00 }, // %
		{ 0x00, 0x00, 0x00, 0x1C, 0x36, 0x36, 0x1C, 0x3B, 0x6E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00 }, // &
		{ 0x00, 0x30, 0x30, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // '
		{ 0x00, 0x00, 0x0C, 0x18, 0x18, 0x30, 0x30, 0x30, 0x30, 0x18, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00 }, // (
		{ 0x00, 0x00, 0x18, 0x0C, 0x0C, 0x06, 0x06, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x00, 0x00, 0x00, 0x00 }, // )
		{ 0x00, 0x00, 0x00, 0x00, 0x42, 0x66, 0x3C, 0xFF, 0x3C, 0x66, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00 }, // *
		{ 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0xFF, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00 }, // +
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x30, 0x00, 0x00 }, // ,
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // -
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 }, // .
		{ 0x00, 0x00, 0x01, 0x03, 0x07, 0x0E, 0x1C, 0x38, 0x70, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00 }, // / (forward slash)
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x63, 0x6B, 0x6B, 0x63, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // 0 0x30
		{ 0x00, 0x00, 0x0C, 0x1C, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3F, 0x00, 0x00, 0x00, 0x00 }, // 1
		{ 0x00, 0x00, 0x3E, 0x63, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x61, 0x63, 0x7F, 0x00, 0x00, 0x00, 0x00 }, // 2
		{ 0x00, 0x00, 0x3E, 0x63, 0x03, 0x03, 0x1E, 0x03, 0x03, 0x03, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // 3 0x00,0x00,0x06,0x0E,0x1E,0x36,0x66,0x66,0x7F,0x06,0x06,0x0F,0x00,0x00,0x00,0x00}, // 4
		{ 0x00, 0x00, 0x7F, 0x60, 0x60, 0x60, 0x7E, 0x03, 0x03, 0x63, 0x73, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // 5
		{ 0x00, 0x00, 0x1C, 0x30, 0x60, 0x60, 0x7E, 0x63, 0x63, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // 6
		{ 0x00, 0x00, 0x7F, 0x63, 0x03, 0x06, 0x06, 0x0C, 0x0C, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 }, // 7
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x63, 0x3E, 0x63, 0x63, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // 8
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x63, 0x63, 0x3F, 0x03, 0x03, 0x06, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // 9
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00 }, // :
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x30, 0x00, 0x00 }, // ;
		{ 0x00, 0x00, 0x00, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x00, 0x00, 0x00, 0x00 }, // <
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x7E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // =
		{ 0x00, 0x00, 0x00, 0x60, 0x30, 0x18, 0x0C, 0x06, 0x0C, 0x18, 0x30, 0x60, 0x00, 0x00, 0x00, 0x00 }, // >
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x06, 0x0C, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x00, 0x00, 0x00, 0x00 }, // ?
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x6F, 0x6B, 0x6B, 0x6E, 0x60, 0x60, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // @ 0x40
		{ 0x00, 0x00, 0x08, 0x1C, 0x36, 0x63, 0x63, 0x63, 0x7F, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00 }, // A
		{ 0x00, 0x00, 0x7E, 0x33, 0x33, 0x33, 0x3E, 0x33, 0x33, 0x33, 0x33, 0x7E, 0x00, 0x00, 0x00, 0x00 }, // B
		{ 0x00, 0x00, 0x1E, 0x33, 0x61, 0x60, 0x60, 0x60, 0x60, 0x61, 0x33, 0x1E, 0x00, 0x00, 0x00, 0x00 }, // C
		{ 0x00, 0x00, 0x7C, 0x36, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x36, 0x7C, 0x00, 0x00, 0x00, 0x00 }, // D
		{ 0x00, 0x00, 0x7F, 0x33, 0x31, 0x34, 0x3C, 0x34, 0x30, 0x31, 0x33, 0x7F, 0x00, 0x00, 0x00, 0x00 }, // E
		{ 0x00, 0x00, 0x7F, 0x33, 0x31, 0x34, 0x3C, 0x34, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0x00 }, // F
		{ 0x00, 0x00, 0x1E, 0x33, 0x61, 0x60, 0x60, 0x6F, 0x63, 0x63, 0x37, 0x1D, 0x00, 0x00, 0x00, 0x00 }, // G
		{ 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x7F, 0x63, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00 }, // H
		{ 0x00, 0x00, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // I
		{ 0x00, 0x00, 0x0F, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // J
		{ 0x00, 0x00, 0x73, 0x33, 0x36, 0x36, 0x3C, 0x36, 0x36, 0x33, 0x33, 0x73, 0x00, 0x00, 0x00, 0x00 }, // K
		{ 0x00, 0x00, 0x78, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x31, 0x33, 0x7F, 0x00, 0x00, 0x00, 0x00 }, // L
		{ 0x00, 0x00, 0x63, 0x77, 0x7F, 0x6B, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00 }, // M
		{ 0x00, 0x00, 0x63, 0x63, 0x73, 0x7B, 0x7F, 0x6F, 0x67, 0x63, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00 }, // N
		{ 0x00, 0x00, 0x1C, 0x36, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x00, 0x00, 0x00, 0x00 }, // O
		{ 0x00, 0x00, 0x7E, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0x00 }, // P 0x50
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x6B, 0x6F, 0x3E, 0x06, 0x07, 0x00, 0x00 }, // Q
		{ 0x00, 0x00, 0x7E, 0x33, 0x33, 0x33, 0x3E, 0x36, 0x36, 0x33, 0x33, 0x73, 0x00, 0x00, 0x00, 0x00 }, // R
		{ 0x00, 0x00, 0x3E, 0x63, 0x63, 0x30, 0x1C, 0x06, 0x03, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // S
		{ 0x00, 0x00, 0xFF, 0xDB, 0x99, 0x18, 0x18, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // T
		{ 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // U
		{ 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x36, 0x1C, 0x08, 0x00, 0x00, 0x00, 0x00 }, // V
		{ 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x6B, 0x6B, 0x7F, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00 }, // W
		{ 0x00, 0x00, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x3C, 0x66, 0xC3, 0xC3, 0x00, 0x00, 0x00, 0x00 }, // X
		{ 0x00, 0x00, 0xC3, 0xC3, 0xC3, 0x66, 0x3C, 0x18, 0x18, 0x18, 0x18, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // Y
		{ 0x00, 0x00, 0x7F, 0x63, 0x43, 0x06, 0x0C, 0x18, 0x30, 0x61, 0x63, 0x7F, 0x00, 0x00, 0x00, 0x00 }, // Z
		{ 0x00, 0x00, 0x3C, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x30, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // [
		{ 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x70, 0x38, 0x1C, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00 }, // \ (back slash)
		{ 0x00, 0x00, 0x3C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x3C, 0x00, 0x00, 0x00, 0x00 }, // ]
		{ 0x08, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // ^
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00 }, // _
		{ 0x18, 0x18, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // ` 0x60
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x46, 0x06, 0x3E, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00 }, // a
		{ 0x00, 0x00, 0x70, 0x30, 0x30, 0x3C, 0x36, 0x33, 0x33, 0x33, 0x33, 0x6E, 0x00, 0x00, 0x00, 0x00 }, // b
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x63, 0x60, 0x60, 0x60, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // c
		{ 0x00, 0x00, 0x0E, 0x06, 0x06, 0x1E, 0x36, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00 }, // d
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x63, 0x63, 0x7E, 0x60, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // e
		{ 0x00, 0x00, 0x1C, 0x36, 0x32, 0x30, 0x7C, 0x30, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0x00 }, // f
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x66, 0x3C, 0x00, 0x00 }, // g
		{ 0x00, 0x00, 0x70, 0x30, 0x30, 0x36, 0x3B, 0x33, 0x33, 0x33, 0x33, 0x73, 0x00, 0x00, 0x00, 0x00 }, // h
		{ 0x00, 0x00, 0x0C, 0x0C, 0x00, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00, 0x00, 0x00, 0x00 }, // i
		{ 0x00, 0x00, 0x06, 0x06, 0x00, 0x0E, 0x06, 0x06, 0x06, 0x06, 0x06, 0x66, 0x66, 0x3C, 0x00, 0x00 }, // j
		{ 0x00, 0x00, 0x70, 0x30, 0x30, 0x33, 0x33, 0x36, 0x3C, 0x36, 0x33, 0x73, 0x00, 0x00, 0x00, 0x00 }, // k
		{ 0x00, 0x00, 0x1C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x1E, 0x00, 0x00, 0x00, 0x00 }, // l
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x7F, 0x6B, 0x6B, 0x6B, 0x6B, 0x6B, 0x00, 0x00, 0x00, 0x00 }, // m
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00 }, // n
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // o
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x33, 0x33, 0x33, 0x33, 0x3E, 0x30, 0x30, 0x78, 0x00, 0x00 }, // p 0x70
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3B, 0x66, 0x66, 0x66, 0x66, 0x3E, 0x06, 0x06, 0x0F, 0x00, 0x00 }, // q
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x6E, 0x3B, 0x33, 0x30, 0x30, 0x30, 0x78, 0x00, 0x00, 0x00, 0x00 }, // r
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x63, 0x38, 0x0E, 0x03, 0x63, 0x3E, 0x00, 0x00, 0x00, 0x00 }, // s
		{ 0x00, 0x00, 0x08, 0x18, 0x18, 0x7E, 0x18, 0x18, 0x18, 0x18, 0x1B, 0x0E, 0x00, 0x00, 0x00, 0x00 }, // t
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x3B, 0x00, 0x00, 0x00, 0x00 }, // u
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x63, 0x36, 0x36, 0x1C, 0x1C, 0x08, 0x00, 0x00, 0x00, 0x00 }, // v
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x63, 0x63, 0x6B, 0x6B, 0x7F, 0x36, 0x00, 0x00, 0x00, 0x00 }, // w
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x36, 0x1C, 0x1C, 0x1C, 0x36, 0x63, 0x00, 0x00, 0x00, 0x00 }, // x
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x63, 0x63, 0x63, 0x63, 0x3F, 0x03, 0x06, 0x3C, 0x00, 0x00 }, // y
		{ 0x00, 0x00, 0x00, 0x00, 0x00, 0x7F, 0x66, 0x0C, 0x18, 0x30, 0x63, 0x7F, 0x00, 0x00, 0x00, 0x00 }, // z
		{ 0x00, 0x00, 0x0E, 0x18, 0x18, 0x18, 0x70, 0x18, 0x18, 0x18, 0x18, 0x0E, 0x00, 0x00, 0x00, 0x00 }, // {
		{ 0x00, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x18, 0x18, 0x18, 0x18, 0x18, 0x00, 0x00, 0x00 }, // |
		{ 0x00, 0x00, 0x70, 0x18, 0x18, 0x18, 0x0E, 0x18, 0x18, 0x18, 0x18, 0x70, 0x00, 0x00, 0x00, 0x00 }, // }
		{ 0x00, 0x00, 0x3B, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }, // ~
		{ 0x00, 0x70, 0xD8, 0xD8, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }  // DEL

};
#ifdef __cplusplus
}
#endif

#endif //  Nokia6610_LCD_FONT_H
