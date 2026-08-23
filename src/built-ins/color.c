#include "../header.h"



void color(t_color_config* color_config)
{	
	color_config->actual_color = color_config->actual_color->next;
	print_banner(color_config->actual_color->code);
}


void color_help()
{
	system("python3 logo/colors_options.py");
}