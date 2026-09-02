#ifndef BAR_H
#define BAR_H


typedef struct s_bar
{
	char* 			path;
	char*			last_command;
	t_color*		color;
} t_bar;



void	print_bar(t_bar* bar);
t_bar*	create_bar_struct(t_color* color);
t_bar*	init_bar(char* last_command, t_color_config* color_config);


#endif