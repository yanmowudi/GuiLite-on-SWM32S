#include "../GuiLite.h"

static const unsigned char _32[] = {
0, 78, };
static const unsigned char _33[] = {
0, 14, 36, 1, 197, 1, 0, 4, 36, 1, 197, 1, 0, 4, 36, 1, 197, 1, 0, 4, 36, 1, 197, 1, 0, 4, 36, 1, 153, 1, 0, 4, 36, 1, 153, 1, 0, 10, 73, 1, 255, 1, 0, 20, };
static const unsigned char _35[] = {
0, 20, 197, 1, 0, 1, 153, 1, 36, 1, 0, 2, 153, 1, 0, 1, 197, 1, 0, 1, 36, 1, 255, 5, 0, 1, 36, 1, 153, 1, 0, 1, 197, 1, 0, 1, 111, 1, 255, 5, 0, 1, 73, 1, 111, 1, 73, 1, 111, 1, 0, 2, 111, 1, 73, 2, 111, 1, 0, 19, };
static const unsigned char _36[] = {
0, 15, 111, 1, 73, 1, 0, 2, 36, 1, 255, 3, 73, 1, 0, 1, 255, 1, 36, 1, 197, 1, 0, 3, 197, 1, 111, 1, 153, 1, 0, 4, 153, 1, 255, 1, 153, 1, 0, 3, 36, 1, 153, 1, 111, 1, 153, 1, 0, 2, 73, 1, 111, 1, 73, 1, 153, 1, 0, 1, 255, 4, 0, 3, 153, 1, 36, 1, 0, 14, };
static const unsigned char _42[] = {
0, 15, 153, 1, 0, 3, 153, 1, 111, 2, 197, 1, 73, 1, 0, 2, 111, 1, 255, 1, 36, 1, 0, 2, 153, 1, 111, 2, 197, 1, 73, 1, 0, 3, 153, 1, 0, 38, };
static const unsigned char _44[] = {
0, 50, 111, 1, 255, 1, 0, 4, 73, 1, 255, 1, 73, 1, 0, 3, 36, 1, 255, 1, 0, 3, 111, 1, 255, 1, 73, 1, 0, 8, };
static const unsigned char _45[] = {
0, 43, 36, 1, 255, 3, 0, 31, };
static const unsigned char _46[] = {
0, 50, 111, 1, 255, 1, 36, 1, 0, 3, 111, 1, 255, 1, 36, 1, 0, 19, };
static const unsigned char _58[] = {
0, 26, 73, 1, 255, 1, 0, 4, 73, 1, 255, 1, 0, 16, 73, 1, 255, 1, 0, 4, 73, 1, 255, 1, 0, 20, };
static const unsigned char _59[] = {
0, 26, 73, 1, 255, 1, 0, 4, 73, 1, 255, 1, 0, 16, 73, 1, 255, 1, 36, 1, 0, 3, 36, 1, 255, 1, 73, 1, 0, 4, 255, 1, 36, 1, 0, 2, 73, 1, 255, 1, 73, 1, 0, 8, };
static const unsigned char _61[] = {
0, 37, 255, 4, 153, 1, 0, 7, 255, 4, 153, 1, 0, 24, };
static const unsigned char _64[] = {
0, 14, 153, 1, 255, 2, 36, 1, 0, 1, 111, 2, 0, 2, 255, 1, 0, 1, 197, 1, 0, 3, 111, 1, 73, 1, 111, 2, 255, 1, 197, 1, 111, 2, 36, 1, 197, 1, 36, 1, 153, 1, 111, 1, 153, 1, 73, 1, 153, 1, 73, 1, 111, 1, 153, 2, 36, 1, 255, 1, 197, 1, 255, 1, 153, 1, 111, 1, 73, 1, 0, 4, 36, 1, 197, 1, 0, 5, 111, 1, 255, 2, 197, 1, 0, 7, };
static const unsigned char _126[] = {
0, 37, 197, 1, 255, 1, 111, 1, 0, 1, 197, 1, 73, 1, 153, 1, 0, 1, 197, 1, 255, 1, 153, 1, 0, 30, };
static  LATTICE lattice_array[] = {
        {32, 6, _32},
        {33, 6, _33},
        {35, 6, _35},
        {36, 6, _36},
        {42, 6, _42},
        {44, 6, _44},
        {45, 6, _45},
        {46, 6, _46},
        {58, 6, _58},
        {59, 6, _59},
        {61, 6, _61},
        {64, 6, _64},
        {126, 6, _126},
};
extern const FONT_INFO Consolas_13;
const FONT_INFO Consolas_13 ={
    13,
    13,
    lattice_array
};
