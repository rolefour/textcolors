#include <stdio.h>
#include "textcolors.h"

void textcolortest() {
    printf("%s", BOLD);
    printf("%sBLACK ", BLACK);
    printf("%sGREY ", GREY);
    printf("%sLGREY ", LGREY);
    printf("%sRESET ", RESET);
    printf("%sWHITE\n", WHITE);

    printf("%sRED ", RED);
    printf("%sLRED\n", LRED);

    printf("%sRED ", GREEN);
    printf("%sLRED\n", LGREEN);

    printf("%sRED ", YELLOW);
    printf("%sLRED\n", LYELLOW);

    printf("%sRED ", BLUE);
    printf("%sLRED\n", LBLUE);

    printf("%sRED ", MAGENTA);
    printf("%sLRED\n", LMAGENTA);

    printf("%sRED ", CYAN);
    printf("%sLRED\n", LCYAN);

    printf("%sNORMAL %sBOLD%s", RESET, BOLD, RESET);
}