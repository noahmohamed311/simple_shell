#include "shell.h"


/**
 * hsh_exit - exits the current process
 * @args: arguments
 * @line: user input
 *
 */
void hsh_exit(char **args, char *line)
{
	unsigned int i = 0;

	if (!line)
		free(line);
	if (!args)
		free(args);
	if (args)
	{
		while (args[i])
		{
			free(args[i]);
			i++;
		}
		free(args);
	}
	free(line);
	free_path(main_path);
	free_path(env);

	exit(0);
}
/**
 * print_env - prints the entire environment array
 *
 */
void print_env(void)
{
	path_t *temp;

	temp = env;
	while (temp)
	{
		write(1, temp->dir, _strlen(temp->dir));
		write(1, "\n", 1);
		temp = temp->next;
	}
}
/**
 * cd - changes directoryi
 * @command: Direcotry to change to
 *
 * Return: 0
 */
int cd(char **command)
{
	chdir(command[1]);
	return (0);
}

