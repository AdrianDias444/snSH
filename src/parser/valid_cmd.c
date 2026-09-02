#include "../header.h"

// Allocs Memory
void alloc_only_one_command(char** array, char* command, int line)
{
	size_t len;

	len = f_strlen(command);

	array[line] = malloc(sizeof(char) * (len + 1));
	if(!array[line])
		return;
	f_strlcpy(array[line], command, len + 1);
}



// Allocs Memory
char** valid_cmd()
{
	char** array;

	array = malloc(sizeof(char*) * (7));
	if(!array)
		return(NULL);
	alloc_only_one_command(array, "color", 0);
	alloc_only_one_command(array, "ls", 1);
	alloc_only_one_command(array, "cd", 2);
	alloc_only_one_command(array, "clear", 3);
	alloc_only_one_command(array, "exit", 4);
	alloc_only_one_command(array, "snailfetch", 5);
	array[6] = NULL;
	return(array);
}
