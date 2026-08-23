#include "header.h"

int main(void)
{
	char			input[50];
	t_color_config* color_config;

	color_config = init_color();
	color(color_config);


	while(BOOL_TRUE)
	{
		fgets(input, sizeof(input), stdin);
		parser(input, color_config);
	}
}
