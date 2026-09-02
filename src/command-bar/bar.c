#include "../header.h"



void print_bar(t_bar* bar)
{
	printf(bar->color->code);
	printf("%s> ", bar->path);
	if(bar->last_command)
		printf(" %s", bar->last_command);
	//printf(RESET);
}