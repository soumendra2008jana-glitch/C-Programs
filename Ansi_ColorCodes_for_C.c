#ifndef ANSI_ESCAPES_H
#define ANSI_ESCAPES_H

/* ========================================================================= */
/*                          1. RESET & TEXT ATTRIBUTES                       */
/* ========================================================================= */
#define ANSI_RESET              "\033[0m"
#define ANSI_BOLD               "\033[1m"
#define ANSI_DIM                "\033[2m"
#define ANSI_ITALIC             "\033[3m"
#define ANSI_UNDERLINE          "\033[4m"
#define ANSI_BLINK_SLOW         "\033[5m"
#define ANSI_BLINK_RAPID        "\033[6m"
#define ANSI_REVERSE            "\033[7m"
#define ANSI_CONCEAL            "\033[8m"
#define ANSI_CROSSED_OUT        "\033[9m"
#define ANSI_DOUBLE_UNDERLINE   "\033[21m"

/* Turn off individual attributes */
#define ANSI_BOLD_OFF           "\033[22m"
#define ANSI_DIM_OFF            "\033[22m"
#define ANSI_ITALIC_OFF         "\033[23m"
#define ANSI_UNDERLINE_OFF      "\033[24m"
#define ANSI_BLINK_OFF          "\033[25m"
#define ANSI_REVERSE_OFF        "\033[27m"
#define ANSI_CONCEAL_OFF        "\033[28m"
#define ANSI_CROSSED_OUT_OFF    "\033[29m"

/* ========================================================================= */
/*                    2. STANDARD FOREGROUND COLORS (30-37)                  */
/* ========================================================================= */
#define ANSI_FG_BLACK           "\033[30m"
#define ANSI_FG_RED             "\033[31m"
#define ANSI_FG_GREEN           "\033[32m"
#define ANSI_FG_YELLOW          "\033[33m"
#define ANSI_FG_BLUE            "\033[34m"
#define ANSI_FG_MAGENTA         "\033[35m"
#define ANSI_FG_CYAN            "\033[36m"
#define ANSI_FG_WHITE           "\033[37m"
#define ANSI_FG_DEFAULT         "\033[39m"

/* ========================================================================= */
/*              3. HIGH-INTENSITY (BRIGHT) FOREGROUND COLORS (90-97)         */
/* ========================================================================= */
#define ANSI_FG_BRIGHT_BLACK    "\033[90m"
#define ANSI_FG_BRIGHT_RED      "\033[91m"
#define ANSI_FG_BRIGHT_GREEN    "\033[92m"
#define ANSI_FG_BRIGHT_YELLOW   "\033[93m"
#define ANSI_FG_BRIGHT_BLUE     "\033[94m"
#define ANSI_FG_BRIGHT_MAGENTA  "\033[95m"
#define ANSI_FG_BRIGHT_CYAN     "\033[96m"
#define ANSI_FG_BRIGHT_WHITE    "\033[97m"

/* ========================================================================= */
/*                    4. STANDARD BACKGROUND COLORS (40-47)                  */
/* ========================================================================= */
#define ANSI_BG_BLACK           "\033[40m"
#define ANSI_BG_RED             "\033[41m"
#define ANSI_BG_GREEN           "\033[42m"
#define ANSI_BG_YELLOW          "\033[43m"
#define ANSI_BG_BLUE            "\033[44m"
#define ANSI_BG_MAGENTA         "\033[45m"
#define ANSI_BG_CYAN            "\033[46m"
#define ANSI_BG_WHITE           "\033[47m"
#define ANSI_BG_DEFAULT         "\033[49m"

/* ========================================================================= */
/*              5. HIGH-INTENSITY (BRIGHT) BACKGROUND COLORS (100-107)       */
/* ========================================================================= */
#define ANSI_BG_BRIGHT_BLACK    "\033[100m"
#define ANSI_BG_BRIGHT_RED      "\033[101m"
#define ANSI_BG_BRIGHT_GREEN    "\033[102m"
#define ANSI_BG_BRIGHT_YELLOW   "\033[103m"
#define ANSI_BG_BRIGHT_BLUE     "\033[104m"
#define ANSI_BG_BRIGHT_MAGENTA  "\033[105m"
#define ANSI_BG_BRIGHT_CYAN     "\033[106m"
#define ANSI_BG_BRIGHT_WHITE    "\033[107m"

/* ========================================================================= */
/*                6. PARAMETRIC COLOR MACROS (256-COLOR & RGB)               */
/* ========================================================================= */
/* 8-bit palette: n = 0 to 255 */
#define ANSI_FG_256(n)          "\033[38;5;" #n "m"
#define ANSI_BG_256(n)          "\033[48;5;" #n "m"

/* 24-bit TrueColor: r, g, b = 0 to 255 */
#define ANSI_FG_RGB(r, g, b)    "\033[38;2;" #r ";" #g ";" #b "m"
#define ANSI_BG_RGB(r, g, b)    "\033[48;2;" #r ";" #g ";" #b "m"

/* ========================================================================= */
/*                    7. CURSOR CONTROL & POSITIONING                        */
/* ========================================================================= */
#define ANSI_CURSOR_HOME        "\033[H"
#define ANSI_CURSOR_SAVE_DEC    "\033 7"      /* DEC alternative */
#define ANSI_CURSOR_RESTORE_DEC "\033 8"      /* DEC alternative */
#define ANSI_CURSOR_SAVE_SCO    "\033[s"      /* SCO alternative */
#define ANSI_CURSOR_RESTORE_SCO "\033[u"      /* SCO alternative */
#define ANSI_CURSOR_HIDE        "\033[?25l"
#define ANSI_CURSOR_SHOW        "\033[?25h"

/* Relative movements (parametric) */
#define ANSI_CURSOR_UP(n)       "\033[" #n "A"
#define ANSI_CURSOR_DOWN(n)     "\033[" #n "B"
#define ANSI_CURSOR_FORWARD(n)  "\033[" #n "C"
#define ANSI_CURSOR_BACK(n)     "\033[" #n "D"
#define ANSI_CURSOR_NEXT_LINE(n)"\033[" #n "E"
#define ANSI_CURSOR_PREV_LINE(n)"\033[" #n "F"
#define ANSI_CURSOR_COLUMN(n)   "\033[" #n "G"
#define ANSI_CURSOR_POS(row, col) "\033[" #row ";" #col "H"

/* ========================================================================= */
/*                       8. SCREEN & LINE ERASING                            */
/* ========================================================================= */
/* Screen erase */
#define ANSI_ERASE_TO_END_SCREEN    "\033[0J"
#define ANSI_ERASE_TO_START_SCREEN  "\033[1J"
#define ANSI_ERASE_SCREEN           "\033[2J"
#define ANSI_CLEAR_SCREEN_AND_SCROLL "\033[3J"

/* Line erase */
#define ANSI_ERASE_TO_END_LINE      "\033[0K"
#define ANSI_ERASE_TO_START_LINE    "\033[1K"
#define ANSI_ERASE_LINE             "\033[2K"

/* ========================================================================= */
/*                    9. SCROLLING & SCREEN BUFFERS                          */
/* ========================================================================= */
#define ANSI_SCROLL_UP(n)           "\033[" #n "S"
#define ANSI_SCROLL_DOWN(n)         "\033[" #n "T"
#define ANSI_ALT_SCREEN_ENABLE      "\033[?1049h"
#define ANSI_ALT_SCREEN_DISABLE     "\033[?1049l"

#endif /* ANSI_ESCAPES_H */