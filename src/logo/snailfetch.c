#include "../header.h"


//snSH neofetch like
void snailfetch(t_color_config* color_config)
{
	t_color* actual_color;

	actual_color = color_config->actual_color;
	print_banner(actual_color->code);
}
