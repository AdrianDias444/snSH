#include "../../header.h"

char* valid_cmds(char* cmd)
{
	if(strcmp(cmd, "ls\n") == 0)
		return(cmd);

	if(strcmp(cmd, "cd\n") == 0)
		return(cmd);

	if(strcmp(cmd, "clear\n") == 0)
		return(cmd);

	if(strcmp(cmd, "color\n") == 0)
		return(cmd);

	if(strcmp(cmd, "color --help\n") == 0)
		return(cmd);
	
	if(strcmp(cmd, "exit\n") == 0)
		exit(1);
	return(NULL);
}



char* retrieve_cmd(char* argv)
{
	if (!valid_cmds(argv))
		return(NULL);
	return(argv);
}