#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "cd auxiliar";

    char* token = strtok(str, " ");

	while(token)
	{
		printf("%s\n", token);
		token = strtok(NULL, token);
	}

    return 0;
}
