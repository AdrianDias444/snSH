#include "../header.h"


void bold_black(void)
{
	printf(BHBLK);
	printf("BHBLK -> Bold Black ->   0\n");
}

void bold_red(void)
{
	printf(BHRED);
	printf("BHRED -> Bold Red ->     1\n");
}

void bold_green(void)
{
	printf(BHGRN);
	printf("BHGRN -> Bold Green ->   2\n");
}

void bold_yellow(void)
{
	printf(BHYEL);
	printf("BHYEL -> Bold Yellow ->  3\n");
}

void bold_blue(void)
{
	printf(BHBLU);
	printf("BHBLU -> Bold Blue ->    4\n");
}

void bold_magenta(void)
{
	printf(BHMAG);
	printf("BHMAG -> Bold Magenta -> 5\n");
}

void bold_cyan(void)
{
	printf(BHCYN);
	printf("BHCYN -> Bold Cyan ->    6\n");
}

void bold_white(void)
{
	printf(BHWHT);
	printf("BHWHT -> Bold White ->   7\n");
}

void f_colors_options(void)
{
	printf("\n");
	bold_black();
	bold_red();
	bold_green();
	bold_yellow();
	bold_blue();
	bold_magenta();
	bold_cyan();
	bold_white();
}