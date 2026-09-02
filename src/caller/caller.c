#include "../header.h"


void caller(char** input, t_init* init)
{
	if(strcmp(input[0], "color") == 0)
		color_parser(init->color_config, input);

	if(strcmp(input[0], "snailfetch") == 0)
		snailfetch(init->color_config);
	if(strcmp(input[0], "exit") == 0)
		exit(1);
	if(strcmp(input[0], "clear") == 0)
		clear();
}