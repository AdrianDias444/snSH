
char* parser(char** valid_inputs);

char* f_unknow_command(char* unknown_command);
char* f_unknow_flag(char* command, char* flag);

int check_input(char* input);


char** valid_cmd();
void alloc_only_one_command(char** array, char* command, int line);
