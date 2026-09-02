#include "../header.h"


size_t count_bytes(char* str)
{
	size_t i;
	size_t c;

	i = 0;
	c = 0;
	while(str[i])
	{
		if(32 <= str[i] && str[i] <= 126)
			c++;
		i++;
	}
	return(c);
}

void cpy_printable_char(char* str, char* buff)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while(str[i])
	{
		if(32 <= str[i] && str[i] <= 126)
		{
			buff[j] = str[i];
			j++;
		}
		i++;
	}
	buff[j] = '\0';
}

// Allocs Memory
// This is not the real strip like the method in python, this only
// "strip" the non printable characters based in ascii code
char* f_strip(char* str)
{
	char* nw_str;

	if(!str)
		return(NULL);
	nw_str = malloc(sizeof(char) * (count_bytes(str) + 1));
	if(!nw_str)
		return(NULL);
	cpy_printable_char(str, nw_str);
	return(nw_str);
}

// ascii printables characters 32-126