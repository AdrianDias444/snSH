#include "../header.h"

// exemple, Unknow command: color
char* f_unknow_command(char* unknown_command)
{
	char* error_msg;

	error_msg = f_strjoin("Unknown command: ", unknown_command);
	printf("%s\n", error_msg);
}


// exemple, Unknow flag -a, command [color], doesn't have this flag
char* f_unknow_flag(char* command, char* flag)
{
	char* error_msg;

	error_msg = f_strjoin("Unknow flag: ", flag);
	error_msg = f_strjoin(error_msg, "command: [");
	error_msg = f_strjoin(error_msg, command);
	error_msg = f_strjoin(error_msg, "], doesn't have this flag");
	printf("%s\n", error_msg);
}


