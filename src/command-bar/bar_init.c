#include "../header.h"



t_bar* init_bar(char* last_command, t_color_config* color_config)
{
	t_bar* bar;

	bar = create_bar_struct();
	bar->path = "home/adrian/git/My_Projects/snSH";
	bar->last_command = last_command;
	bar->color = color_config->first_color;

	printf("Bar path: %s\n", bar->path);
	printf("Bar color: %d\n", bar->color->nb);
	printf("\n");


	return(bar);
}