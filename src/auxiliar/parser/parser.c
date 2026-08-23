#include "../../header.h"

void* cmd_valid(char* cmd, t_color_config* color_config)
{
	
	if(strcmp(cmd, "cd\n") == 0)
	{
		cd();
		return "";
	}

	if(strcmp(cmd, "clear\n") == 0)
	{
		clear();
		return "";
	}
	
	if(strcmp(cmd, "color\n") == 0)
	{
		color(color_config);
		return "";
	}

	if(strcmp(cmd, "color --help\n") == 0)
	{
		color_help();
		return "";
	}

	if(strcmp(cmd, "ls\n") == 0)
	{
		ls();
		return "";
	}
	return(NULL);

}




void parser(char* argv, t_color_config* color_config)
{
	char* command;
	char* error_msg;

	command = retrieve_cmd(argv);
	if(!command)
	{
		error_msg = f_error_msg(argv);
		write(1, error_msg, f_strlen(error_msg) + 1);
		return ;
	}

	cmd_valid(command, color_config);

}