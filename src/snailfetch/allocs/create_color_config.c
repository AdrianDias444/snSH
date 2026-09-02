#include "../../header.h"



t_color_config* f_create_color_config()
{
	t_color_config* color_config;



	color_config = malloc(sizeof(t_color_config));
	if(!color_config)
		return(NULL);
	color_config->first_color = NULL;
	color_config->actual_color = NULL;
	color_config->color_counter = 0;
	return(color_config);
}




// color config struct
//

//	typedef struct s_color_config
//	{
//		t_color*	first_color;
//		t_color*	actual_color;
//		size_t		color_counter;
//	}	t_color_config;
//
//