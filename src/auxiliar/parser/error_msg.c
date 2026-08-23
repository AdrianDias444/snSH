#include "../../header.h"


char* f_error_msg(char* unknown_command)
{
	char* error_msg;

	error_msg = f_strjoin("Unknown command: ", unknown_command);
	error_msg = f_strjoin(error_msg, "\n");
	return(error_msg);
}
