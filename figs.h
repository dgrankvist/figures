/*
 * Header file for figures application. Includes definition of constants and enumerations,
 * as well as function prototypes for all functions used in the application.
 */

// constant definitions
#define ESC 0x1B

// define VT100 escape sequence colors
enum COLOR {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};
enum BGCOLOR {BGBLACK = 40, BGRED, BGGREEN, BGYELLOW, BGBLUE, BGMAGENTA, BGCYAN, BGWHITE};

// function prototypes

void triangle(void);
void circle(void);
void rectangle(void);
void square(void);
void horizLine(void);
void interLine(void);
int figMenu(void);
void clearScreen(void);
void gotoxy(int, int);
void setColor(int);
