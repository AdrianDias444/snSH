#include "../../header.h"

char* valid_cmds(char* cmd)
{

	char** cmd_args;

	cmd = f_remove_newline(cmd);
	cmd_args = f_split(cmd, ' ');

	if(strcmp(cmd_args[0], "ls") == 0)
		return(cmd);

	if(strcmp(cmd_args[0], "cd") == 0)
		return(cmd);

	if(strcmp(cmd_args[0], "clear") == 0)
		return(cmd);

	if(strcmp(cmd_args[0], "color") == 0)
		return(cmd);
	
	if(strcmp(cmd_args[0], "exit") == 0)
		exit(1);

	return(NULL);
}

char* retrieve_cmd(char* argv)
{
	if (!valid_cmds(argv))
		return(NULL);
	return(argv);
}