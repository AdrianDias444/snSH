#include "../../header.h"

void* cmd_valid(char* cmd, t_color_config* color_config, t_bar* bar)
{
	char** cmd_args;


	cmd = f_remove_newline(cmd);
	cmd_args = f_split(cmd, ' ');

	if(strcmp(cmd_args[0], "color") == 0)
		color_parser(color_config, cmd_args, bar);
	if(strcmp(cmd_args[0], "snailfetch") == 0)
		snailfetch(color_config);
	return(NULL);

}




void parser(char* argv, t_color_config* color_config, t_bar* bar)
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

	cmd_valid(command, color_config, bar);

}