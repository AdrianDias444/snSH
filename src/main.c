#include "header.h"

int main(void)
{
	char			input[50];
	t_color_config* color_config;
	t_bar* bar;
	
	color_config = init_color();
	bar = init_bar(NULL, color_config);

	color(color_config, bar);



	while(BOOL_TRUE)
	{
		bar->last_command = NULL;
		f_command_bar_manager(bar);
		fgets(input, sizeof(input), stdin);
		bar->last_command = input;
		parser(input, color_config, bar);
	}
}
