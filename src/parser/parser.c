#include "../header.h"


int is_in_lst(char** lst, char* word_to_check)
{
	int i;

	i = 0;
	while(lst[i] && strcmp(lst[i], word_to_check) != 0)
		i++;
	if(!lst[i])
		return(0);
	return(1);
}


// parser is the main function of
// this process, of pick a input from the user
// treat with this, check it, verify is this is not
// a invalid input, if is from the authorized commands
// and return if its not invalid 
char** parser(char** valid_inputs)
{
	char	std_input[50];
	char*	input;
	char**	input_array;


	fgets(std_input, sizeof(std_input), stdin);
	input = f_remove_newline(std_input);
	input_array = f_split(input, ' ');

	if(check_input(input) == 0)
		return(NULL);
	if(is_in_lst(valid_inputs, input_array[0]) == 0)
		f_unknow_command(input);
	
	return(f_split(input, ' '));
}
