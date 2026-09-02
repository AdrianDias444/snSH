#include "../../header.h"

t_color* f_create_color_node(char* color_code, int nb)
{
	t_color* color_struct;


	color_struct = malloc(sizeof(t_color));
	if(!color_struct)
		return(NULL);
	color_struct -> code = color_code;
	color_struct -> nb = nb;
	color_struct -> next = NULL;
	return(color_struct);
}


// color node struct
//

//	typedef struct s_color
//	{
//		char*			code;
//		int				nb;
//		struct s_color*	next;
//	}	t_color;
//
//