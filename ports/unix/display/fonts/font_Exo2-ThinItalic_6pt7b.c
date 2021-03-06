#include "../include/driver_framebuffer.h"
const uint8_t Exo2_ThinItalic_6pt7bBitmaps[] = {
  0x00, 0xF4, 0x80, 0x35, 0x75, 0xFA, 0x27, 0xA4, 0x65, 0xE4, 0xD6, 0xBD,
  0xD6, 0xDC, 0x72, 0x12, 0xF9, 0x78, 0x80, 0x2A, 0x49, 0x10, 0x95, 0x58,
  0xB0, 0x3D, 0x00, 0xC0, 0xC0, 0x80, 0x12, 0x24, 0x88, 0xF6, 0xDB, 0x80,
  0xFC, 0x71, 0x22, 0x4E, 0x65, 0x13, 0xC0, 0x25, 0x59, 0xF2, 0x71, 0x13,
  0xC0, 0x74, 0xE9, 0x9E, 0xE9, 0x29, 0x00, 0x75, 0x96, 0x9F, 0x79, 0x97,
  0x1E, 0xA0, 0xB0, 0xEC, 0x70, 0xE0, 0x78, 0xD6, 0x20, 0x73, 0x67, 0x2F,
  0x80, 0x26, 0x56, 0x99, 0x75, 0x96, 0x9F, 0x78, 0x88, 0x8E, 0x75, 0x99,
  0x9F, 0x74, 0x86, 0x8E, 0x74, 0x86, 0x88, 0x78, 0x89, 0x9F, 0x55, 0x79,
  0x99, 0xFC, 0x55, 0x70, 0x56, 0xA4, 0xA9, 0xAA, 0xB0, 0x45, 0x2A, 0xAD,
  0xA6, 0x90, 0x55, 0xBB, 0xB9, 0x79, 0x99, 0x9F, 0x75, 0x96, 0x88, 0x79,
  0x99, 0x99, 0x60, 0x75, 0x96, 0x99, 0x78, 0x42, 0x1E, 0xE9, 0x49, 0x00,
  0xB6, 0xDB, 0xC0, 0xB6, 0xED, 0x00, 0xA6, 0x9E, 0xA4, 0x92, 0x40, 0x95,
  0x62, 0x69, 0xB7, 0x49, 0x00, 0x72, 0x24, 0x4E, 0x56, 0xAA, 0xAA, 0x50,
  0x55, 0x56, 0x54, 0xE0, 0x80, 0x76, 0xF0, 0x51, 0xDB, 0xC0, 0x72, 0x70,
  0x11, 0xF9, 0x9E, 0xF7, 0x70, 0x32, 0x64, 0x44, 0x4C, 0x79, 0x9E, 0x2E,
  0x51, 0xDB, 0x40, 0xBC, 0xBF, 0x52, 0xFB, 0x40, 0x6A, 0xB0, 0x7E, 0x5A,
  0x69, 0x76, 0xD0, 0xF6, 0xF0, 0x76, 0xF9, 0x00, 0xF6, 0xF2, 0x40, 0x72,
  0x40, 0xF8, 0xF0, 0x7A, 0xC0, 0xB6, 0xF0, 0xB6, 0xA0, 0xA6, 0x9A, 0x94,
  0xAA, 0xD0, 0xB6, 0xA5, 0x00, 0x65, 0x70, 0x56, 0xA9, 0xFF, 0x55, 0x6A,
  0xF0 };

const GFXglyph Exo2_ThinItalic_6pt7bGlyphs[] = {
  {     0,   1,   1,   2,    0,    0 },   // 0x20 ' '
  {     1,   1,   6,   2,    0,   -5 },   // 0x21 '!'
  {     2,   1,   1,   2,    1,   -5 },   // 0x22 '"'
  {     3,   4,   6,   5,    0,   -5 },   // 0x23 '#'
  {     6,   4,   8,   4,    0,   -6 },   // 0x24 '$'
  {    10,   5,   6,   6,    1,   -5 },   // 0x25 '%'
  {    14,   5,   6,   6,    0,   -5 },   // 0x26 '&'
  {    18,   1,   1,   1,    0,   -5 },   // 0x27 '''
  {    19,   3,   7,   2,    0,   -5 },   // 0x28 '('
  {    22,   2,   7,   2,    0,   -5 },   // 0x29 ')'
  {    24,   2,   2,   3,    1,   -5 },   // 0x2A '*'
  {    25,   3,   3,   4,    0,   -3 },   // 0x2B '+'
  {    27,   1,   2,   1,    0,    0 },   // 0x2C ','
  {    28,   2,   1,   3,    1,   -2 },   // 0x2D '-'
  {    29,   1,   1,   1,    0,    0 },   // 0x2E '.'
  {    30,   4,   6,   3,    0,   -5 },   // 0x2F '/'
  {    33,   3,   6,   4,    1,   -5 },   // 0x30 '0'
  {    36,   1,   6,   3,    1,   -5 },   // 0x31 '1'
  {    37,   4,   6,   4,    0,   -5 },   // 0x32 '2'
  {    40,   3,   6,   4,    0,   -5 },   // 0x33 '3'
  {    43,   4,   6,   4,    0,   -5 },   // 0x34 '4'
  {    46,   3,   6,   4,    0,   -5 },   // 0x35 '5'
  {    49,   4,   6,   4,    0,   -5 },   // 0x36 '6'
  {    52,   3,   6,   4,    1,   -5 },   // 0x37 '7'
  {    55,   4,   6,   4,    0,   -5 },   // 0x38 '8'
  {    58,   4,   6,   4,    0,   -5 },   // 0x39 '9'
  {    61,   1,   3,   1,    1,   -2 },   // 0x3A ':'
  {    62,   1,   4,   1,    0,   -2 },   // 0x3B ';'
  {    63,   3,   2,   4,    0,   -2 },   // 0x3C '<'
  {    64,   4,   3,   4,    0,   -3 },   // 0x3D '='
  {    66,   3,   2,   4,    0,   -2 },   // 0x3E '>'
  {    67,   2,   6,   3,    1,   -5 },   // 0x3F '?'
  {    69,   5,   5,   5,    0,   -4 },   // 0x40 '@'
  {    73,   4,   6,   4,    0,   -5 },   // 0x41 'A'
  {    76,   4,   6,   4,    0,   -5 },   // 0x42 'B'
  {    79,   4,   6,   4,    0,   -5 },   // 0x43 'C'
  {    82,   4,   6,   5,    0,   -5 },   // 0x44 'D'
  {    85,   4,   6,   4,    0,   -5 },   // 0x45 'E'
  {    88,   4,   6,   4,    0,   -5 },   // 0x46 'F'
  {    91,   4,   6,   4,    0,   -5 },   // 0x47 'G'
  {    94,   4,   6,   5,    0,   -5 },   // 0x48 'H'
  {    97,   1,   6,   2,    0,   -5 },   // 0x49 'I'
  {    98,   2,   6,   2,    0,   -5 },   // 0x4A 'J'
  {   100,   4,   6,   4,    0,   -5 },   // 0x4B 'K'
  {   103,   2,   6,   4,    1,   -5 },   // 0x4C 'L'
  {   105,   6,   6,   6,    0,   -5 },   // 0x4D 'M'
  {   110,   4,   6,   5,    0,   -5 },   // 0x4E 'N'
  {   113,   4,   6,   5,    0,   -5 },   // 0x4F 'O'
  {   116,   4,   6,   4,    0,   -5 },   // 0x50 'P'
  {   119,   4,   7,   5,    0,   -5 },   // 0x51 'Q'
  {   123,   4,   6,   4,    0,   -5 },   // 0x52 'R'
  {   126,   4,   6,   4,    0,   -5 },   // 0x53 'S'
  {   129,   3,   6,   4,    1,   -5 },   // 0x54 'T'
  {   132,   3,   6,   5,    1,   -5 },   // 0x55 'U'
  {   135,   3,   6,   4,    1,   -5 },   // 0x56 'V'
  {   138,   6,   6,   6,    1,   -5 },   // 0x57 'W'
  {   143,   4,   6,   4,    0,   -5 },   // 0x58 'X'
  {   146,   3,   6,   4,    1,   -5 },   // 0x59 'Y'
  {   149,   4,   6,   4,    0,   -5 },   // 0x5A 'Z'
  {   152,   2,   8,   2,    0,   -5 },   // 0x5B '['
  {   154,   2,   6,   3,    1,   -5 },   // 0x5C '\'
  {   156,   2,   8,   2,    0,   -5 },   // 0x5D ']'
  {   158,   3,   2,   3,    0,   -4 },   // 0x5E '^'
  {   159,   3,   1,   3,    0,    1 },   // 0x5F '_'
  {   160,   1,   1,   2,    1,   -4 },   // 0x60 '`'
  {   161,   3,   4,   4,    0,   -3 },   // 0x61 'a'
  {   163,   3,   6,   4,    0,   -5 },   // 0x62 'b'
  {   166,   3,   4,   3,    0,   -3 },   // 0x63 'c'
  {   168,   4,   6,   4,    0,   -5 },   // 0x64 'd'
  {   171,   3,   4,   4,    0,   -3 },   // 0x65 'e'
  {   173,   4,   8,   2,   -1,   -5 },   // 0x66 'f'
  {   177,   4,   6,   4,    0,   -3 },   // 0x67 'g'
  {   180,   3,   6,   4,    0,   -5 },   // 0x68 'h'
  {   183,   1,   6,   2,    0,   -5 },   // 0x69 'i'
  {   184,   1,   8,   2,    0,   -5 },   // 0x6A 'j'
  {   185,   3,   6,   3,    0,   -5 },   // 0x6B 'k'
  {   188,   2,   6,   2,    0,   -5 },   // 0x6C 'l'
  {   190,   6,   4,   6,    0,   -3 },   // 0x6D 'm'
  {   193,   3,   4,   4,    0,   -3 },   // 0x6E 'n'
  {   195,   3,   4,   4,    0,   -3 },   // 0x6F 'o'
  {   197,   3,   6,   4,    0,   -3 },   // 0x70 'p'
  {   200,   3,   6,   4,    0,   -3 },   // 0x71 'q'
  {   203,   3,   4,   3,    0,   -3 },   // 0x72 'r'
  {   205,   3,   4,   3,    0,   -3 },   // 0x73 's'
  {   207,   2,   5,   2,    0,   -4 },   // 0x74 't'
  {   209,   3,   4,   4,    0,   -3 },   // 0x75 'u'
  {   211,   3,   4,   4,    0,   -3 },   // 0x76 'v'
  {   213,   6,   4,   6,    0,   -3 },   // 0x77 'w'
  {   216,   3,   4,   4,    0,   -3 },   // 0x78 'x'
  {   218,   3,   6,   4,    0,   -3 },   // 0x79 'y'
  {   221,   3,   4,   3,    0,   -3 },   // 0x7A 'z'
  {   223,   2,   8,   2,    0,   -5 },   // 0x7B '{'
  {   225,   1,   8,   2,    0,   -6 },   // 0x7C '|'
  {   226,   2,   8,   2,    0,   -5 },   // 0x7D '}'
  {   228,   2,   2,   4,    1,   -3 } }; // 0x7E '~'

const GFXfont Exo2_ThinItalic_6pt7b = {
  (uint8_t  *)Exo2_ThinItalic_6pt7bBitmaps,
  (GFXglyph *)Exo2_ThinItalic_6pt7bGlyphs,
  0x20, 0x7E, 6 };//B

// Approx. 901 bytes
