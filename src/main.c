#include "header.h"

int main(void)
{
	char**	input;
	t_init*	init;

	init = f_init();
	while(BOOL_TRUE)
	{
		print_bar(init->bar);
		input = parser(valid_cmd());
		caller(input, init);
	}
}




// implementations

// parser
// command bar
// snailfetch




// Notes

// need to pass a char** list, of the corrects commands to parser




// sequence

// command bar is printed
// parser treats and return input
// caller calls the rights function or built-ins
// snailfetch only works when called

