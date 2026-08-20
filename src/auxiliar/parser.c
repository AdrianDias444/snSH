#include "../header.h"




void parser()
{
	char command[100];

	while(strcmp(command, "exit") != 0)
	{
		scanf("%s", command);

		if(strcmp(command, "ls") == 0)
			ls();
		if(strcmp(command, "cd") == 0)
			cd();
		if(strcmp(command, "clear") == 0)
			clear();
	}
}