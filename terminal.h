#ifdef __cplusplus
 extern "C" {
#endif

#include <stdio.h>
#include <unistd.h>

//清屏
#define CLEAR() printf("\033[2J")

//上移光标
#define MOVE_UP(x) printf("\033[%dA", (x))

// 下移光标
#define MOVE_DOWN(x) printf("\033[%dB"), (x)

// 左移光标
#define MOVE_LEFT(y) printf("\033[%dD", (y))

// 右移光标
#define MOVE_RIGHT(y) printf("\033[%dC", (y))

// 定位光标
#define MOVE_TO_XY(x, y) printf("\033[%d;%dH", (x), (y))

//光标复位
#define CURSOR_RESET() printf("\033[H")

// 隐藏光标
#define CURSOR_HIDE() printf("\033[?25l")

// 显示光标
#define CURSOR_SHOW() printf("\033[?25h")

// 反显
#define HIGH_LIGHT() printf("\033[7m")
#define UN_HIGH_LIGHT() printf("\033[27m")

#ifdef __cplusplus
 }
#endif