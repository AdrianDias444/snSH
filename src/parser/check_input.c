#include "../header.h"

int check_input(char* input)
{
	if(!input)
		return(0);
	if(f_strlen(f_strip(input)) == 0)
		return(0);
	return(1);
}