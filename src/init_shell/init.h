#ifndef INIT_H
#define INIT_H

typedef struct s_init
{
	t_color_config*	color_config;
	t_bar*			bar;
} t_init;




t_init*	f_init();
t_init* init_create();

#endif