#include "../../header.h"


t_flashbacks* create_flashbacks(void)
{
	t_flashbacks* flashbacks;

	flashbacks = malloc(sizeof(flashbacks));
	if (!flashbacks)
		return(NULL);
	flashbacks -> last_command = NULL;
	return(flashbacks);
}