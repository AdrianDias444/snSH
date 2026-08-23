#include "../header.h"
/*
size_t f_strlen(char* str)
{
    size_t i;
	
    i = 0;
    while(str[i])
	i++;
    return(i);
}
*/


char* f_strjoin(char* s1, char* s2)
{
    char* str;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    str = malloc(sizeof(char) * (f_strlen(s1) + f_strlen(s2) +1));
    if(!str)
        return(NULL);
    while(s1[j])
    {
        str[i] = s1[j];
        i++;
        j++;
    }
    j = 0;
    while(s2[j])
    {
        str[i] = s2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    return (str);
}


/*
int main()
{
	char* s1 = "abc";
	char* s2 = " cde";
	
	
	printf("%s", f_strjoin(s1, s2));
}
*/