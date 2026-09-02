#include "../../header.h"


t_bar* create_bar_struct()
{
	t_bar* bar;

	bar = malloc(sizeof(bar));
	if(!bar)
		return(NULL);
	bar->path = NULL;
	bar->last_command = NULL;
	bar->color = NULL;
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