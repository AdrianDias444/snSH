#include "../header.h"


t_init*	f_init()
{
	t_init* init;
	t_color_config*	color_config;
	t_bar*			bar;
	
	init = init_create();

	color_config = init_color_config();
	bar = init_bar(NULL, color_config);
	
	init->color_config = color_config;
	init->bar = bar;

	return(init);
}