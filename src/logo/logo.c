#include "../header.h"


void print_banner(char* color)
{
    printf(CLEAR);
    printf(BCYN);
    printf("╔═══════════════════════════════════════╗\n");
    printf("║                                       ║\n");
    printf("║ %s███████╗ ███╗   ██╗ ███████╗ ██╗  ██╗%s ║\n", color, BCYN);
    printf("║ %s██╔════╝ ████╗  ██║ ██╔════╝ ██║  ██║%s ║\n", color, BCYN);
    printf("║ %s███████╗ ██╔██╗ ██║ ███████╗ ███████║%s ║\n", color, BCYN);
    printf("║ %s╚════██║ ██║╚██╗██║ ╚════██║ ██╔══██║%s ║\n", color, BCYN);
    printf("║ %s███████║ ██║ ╚████║ ███████║ ██║  ██║%s ║\n", color, BCYN);
    printf("║ %s╚══════╝ ╚═╝  ╚═══╝ ╚══════╝ ╚═╝  ╚═╝%s ║\n", color, BCYN);
    printf("║                                       ║\n");
    printf("╚═══════════════════════════════════════╝\n");
    printf(RESET);
    printf("\n");
}