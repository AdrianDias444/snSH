#include "../header.h"

// color manager
void color_parser(t_color_config* color_config, char** cmd_args, t_bar* bar)
{

	if (!cmd_args[1])
	{
		color(color_config, bar);
		return ;
	}

	if (strcmp(cmd_args[1], "--help") == 0)
		color_help(bar);

	if (strcmp(cmd_args[1], "--define") == 0)
		color_define(color_config, cmd_args[2], bar);

	if (strcmp(cmd_args[1], "-n") == 0)
		color_name(color_config);
}


// color
void color(t_color_config* color_config, t_bar* bar)
{
	color_config->actual_color = color_config->actual_color->next;
	print_banner(color_config->actual_color->code);
	f_command_bar_manager(bar);
	f_colors_options();
}

// color --help
void color_help(t_bar* bar)
{
	printf(CLEAR);
	f_command_bar_manager(bar);
	f_colors_options();
}

// color --define
void color_define(t_color_config* color_config, char* color_digit, t_bar* bar)
{
	t_color* color;


	color = find_color_with_nb(color_config, atoi(color_digit));
	color_config->actual_color = color;
	print_banner(color->code);
	f_command_bar_manager(bar);
	f_colors_options();
}

// color -n
void color_name(t_color_config* color_config)
{
	t_color* actual_color = color_config->actual_color;

	if(actual_color->nb == 0)
		bold_black();
	if(actual_color->nb == 1)
		bold_red();
	if(actual_color->nb == 2)
		bold_green();
	if(actual_color->nb == 3)
		bold_yellow();
	if(actual_color->nb == 4)
		bold_blue();
	if(actual_color->nb == 5)
		bold_magenta();
	if(actual_color->nb == 6)
		bold_cyan();
	if(actual_color->nb == 7)
		bold_white();
	printf(BHWHT);
}

// auxiliar function
t_color* find_color_with_nb(t_color_config* color_config, int nb)
{
	t_color* current_color;

	current_color = color_config->first_color;

	while(current_color->nb != nb)
		current_color = current_color -> next;
	return(current_color);
}