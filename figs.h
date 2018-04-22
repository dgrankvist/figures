// constant definitions
#define ESC 0x1B

// define VT100 escape sequence colors
enum COLOR {BLACK = 30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};

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
