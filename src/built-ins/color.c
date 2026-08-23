#include "../header.h"


void color_parser(t_color_config* color_config, char** cmd_args)
{

	if (!cmd_args[1])
	{
		color(color_config);
		return ;
	}

	if(strcmp(cmd_args[1], "--help") == 0)
		color_help();

	if(strcmp(cmd_args[1], "--define") == 0)
		color_define(color_config, cmd_args[2]);
}



void color(t_color_config* color_config)
{
	color_config->actual_color = color_config->actual_color->next;
	print_banner(color_config->actual_color->code);
	f_colors_options();
}


void color_help()
{
	printf(CLEAR);
	f_colors_options();
}


void color_define(t_color_config* color_config, char* color_digit)
{
	t_color* color;


	color = find_color_with_nb(color_config, atoi(color_digit));
	print_banner(color->code);
	f_colors_options();
}


t_color* find_color_with_nb(t_color_config* color_config, int nb)
{
	t_color* current_color;

	current_color = color_config->first_color;

	while(current_color->nb != nb)
		current_color = current_color -> next;
	return(current_color);
}