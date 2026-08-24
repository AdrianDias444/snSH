#include "../header.h"



t_bar* create_bar_struct()
{
	t_bar* bar;

	bar = malloc(sizeof(bar));
	if(!bar)
		return(NULL);
	bar->path = NULL;
	bar->last_command = NULL;
	bar->color = NULL;
	return(bar);
}




t_bar* init_bar(char* last_command, t_color_config* color_config)
{
	t_bar* bar;

	bar = create_bar_struct();
	bar->path = "home/adrian/git/My_Projects/snSH";
	bar->last_command = last_command;
	bar->color = color_config->first_color;

	return(bar);
}