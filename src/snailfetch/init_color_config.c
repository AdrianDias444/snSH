#include "../header.h"


void f_create_all_nodes(t_color_config* color_config)
{
	t_color* first_color_node;
	t_color* last_color_node;

	first_color_node = f_create_color_node(BHBLK, 0);
	f_push_back(first_color_node, color_config);
	
	color_config -> first_color = first_color_node;



	f_push_back(f_create_color_node(BHRED, 1), color_config);
	f_push_back(f_create_color_node(BHGRN, 2), color_config);
	f_push_back(f_create_color_node(BHYEL, 3), color_config);
	f_push_back(f_create_color_node(BHBLU, 4), color_config);
	f_push_back(f_create_color_node(BHMAG, 5), color_config);
	f_push_back(f_create_color_node(BHCYN, 6), color_config);
	
	
	last_color_node = f_create_color_node(BHWHT, 7);
	f_push_back(last_color_node, color_config);
	last_color_node->next = first_color_node;
}

t_color_config* init_color_config()
{

	t_color_config* color_config;

	color_config = f_create_color_config();
	f_create_all_nodes(color_config);

	return (color_config);
}