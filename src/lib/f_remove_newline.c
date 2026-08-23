#include "../header.h"


char* f_remove_newline(char* str)
{
	char* str_dup;


	str_dup = f_strdup(str);
	str_dup[f_strlen(str_dup) - 1] = '\0';
	return(str_dup);
}



/*
int main(void)
{
	char* str = "teste\n";

	//printf(str);
	printf("%s", f_remove_newline(str));
}
*/