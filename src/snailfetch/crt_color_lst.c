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