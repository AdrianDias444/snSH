#include "../header.h"


t_color* f_last_node(t_color_config* node_config)
{
	t_color* current_node;

	if (!node_config->actual_color)
		return(NULL);
	current_node = node_config->actual_color;
	while(current_node -> next)
		current_node = current_node -> next;
	return(current_node);

}


void f_push_back(t_color* node_to_add, t_color_config* node_config)
{
	t_color* last_node;

	last_node = f_last_node(node_config);
	if(!last_node)
	{
		node_config -> actual_color = node_to_add;
		return ;
	}
	last_node -> next = node_to_add;
}


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


t_color_config* f_create_color_config()
{
	t_color_config* color_config;



	color_config = malloc(sizeof(t_color_config));
	if(!color_config)
		return(NULL);
	color_config->actual_color = NULL;
	color_config->color_counter = 0;
	return(color_config);
}
