#include "../header.h"


char* f_remove_newline(char* str)
{
	char* dup;


	dup = f_strdup(str);
	dup[f_strlen(dup) - 1] = '\0';
	return(dup);
}



/*
int main(void)
{
	char* str = "teste\n";

	//printf(str);
	printf("%s", f_remove_newline(str));
}
*/