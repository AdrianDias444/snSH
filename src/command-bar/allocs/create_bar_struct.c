#include "../../header.h"


t_bar* create_bar_struct(t_color* color)
{
	t_bar* bar;

	bar = malloc(sizeof(t_bar));
	if(!bar)
		return(NULL);
	bar->path = NULL;
	bar->last_command = NULL;
	bar->color = color;
	return(bar);
}


// bar struct
//

//
//	typedef struct s_bar
//	{
//		char* 			path;
//		char*			last_command;
//		struct t_color* color;
//	} t_bar;
//
//