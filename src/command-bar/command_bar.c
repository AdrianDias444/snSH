#include "../header.h"



void f_command_bar_manager(t_bar* bar)
{
	if(!bar->last_command)
	{
		printf(bar->color->code);
		printf("%s> ", color->path);
		printf(RESET);
		return ;
	}
	printf(bar->color);
	printf("%s> %s", color->path, bar->last_command);
	printf(RESET);
}