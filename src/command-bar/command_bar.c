#include "../header.h"



void f_command_bar_manager(t_bar* bar)
{
	if(!bar->last_command)
	{
		printf(bar->color->code);
		printf("%s> ", bar->path);
		printf(RESET);
		return ;
	}
	printf(bar->color->code);
	printf("%s> %s", bar->path, bar->last_command);
	printf(RESET);
}