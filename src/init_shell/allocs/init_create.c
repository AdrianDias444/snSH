#include "../../header.h"

// Allocs Memory
t_init* init_create()
{
	t_init* init;

	init = malloc(sizeof(t_init));
	if(!init)
		return(NULL);
	init->color_config = NULL;
	return(init);
}

