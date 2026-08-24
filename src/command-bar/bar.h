
typedef struct s_bar
{
	char* 			path;
	char*			last_command;
	struct t_color* color;
} t_bar;



void f_command_bar_manager(t_bar* bar);
t_bar* create_bar_struct();
t_bar* init_bar(char* last_command, t_color_config* color_config);
