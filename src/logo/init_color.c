#include "../header.h"


void f_create_all_nodes(t_color_config* color_config)
{
	t_color* first_color_node;
	t_color* last_color_node;

	first_color_node = f_create_color_node(BHBLK);
	f_push_back(first_color_node, color_config);
	
	color_config -> first_color = first_color_node;



	f_push_back(f_create_color_node(BHRED), color_config);
	f_push_back(f_create_color_node(BHGRN), color_config);
	f_push_back(f_create_color_node(BHYEL), color_config);
	f_push_back(f_create_color_node(BHBLU), color_config);
	f_push_back(f_create_color_node(BHMAG), color_config);
	f_push_back(f_create_color_node(BHCYN), color_config);
	
	
	last_color_node = f_create_color_node(BHWHT);
	f_push_back(last_color_node, color_config);
	last_color_node->next = first_color_node;
}

t_color_config* init_color()
{

	t_color_config* color_config;

	color_config = f_create_color_config();
	f_create_all_nodes(color_config);

	return (color_config);
}