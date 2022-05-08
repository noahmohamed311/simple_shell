#include "shell.h"
/**
 * check_builtin - checks if builtin has been called
 * @args: argv array
 * @line: user input
 *
 * Return: returns the proper builtin funciton or NULL on failure
 */
int check_builtin(char **args, char *line)
{
	if (_strcmp(args[0], "exit") == 0)
	{
		hsh_exit(args, line);
		return (0);
	}
	else if (_strcmp(args[0], "env") == 0)
	{
		print_env();
		return (0);
	}
	else if (_strcmp(args[0], "cd") == 0)
	{
		cd(args);
		return (0);
	}
	else if (_strcmp(args[0], "clear") == 0)
	{
		clear_screen();
		return (0);
	}
	return (1);
}
