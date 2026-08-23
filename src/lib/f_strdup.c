#include "../header.h"

char* f_strdup(char* str)
{
	char*	dup;
	int		i;

	if(!str)
		return(NULL);
	i = 0;
	dup = malloc(sizeof(char) * f_strlen(str) + 1);
	if(!dup)
		return(NULL);
	while(str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}