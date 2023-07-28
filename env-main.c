#include "shell.h"

/**
 * my_env - prints environment
 * @info: struct address
 * Return: Always 0, success
 */
int my_env(info_t *info)
{
	print_list_str(info->env);
	return (0);
}

/**
 * get_env - gets environment variable value
 * @info: struct address
 * @name: environment variable name
 * Return: environment value
 */

char *get_env(info_t *info, const char *name)
{
	list_t *node = info->env;
	char *p;

	while (node)
	{
		p = starts_with(node->str, name);
		if (p && *p)
			return (p);
		node = node->next;
	}
	return (NULL);
}

/**
 * my_unsetenv - remove environment variable
 * @info: struct address
 * Return: Always 0, success
 */

int my_unsetenv(info_t *info)
{
	int i;

	if (info->argc == 1)
	{
		_eputs("Too few arguments. \n");
		return (1);
	}
	for (i = 1; i <= info->argc; i++)
	{
		unsetenv(info->argv[i]);
	}
	return (0);
}

/**
 * populate_env_list - populates env linked list
 * @info: struct address
 * Return: Always 0, success
 */

int populate_env_list(info_t *info)
{
	list_t *node = NULL;
	size_t i;

	for (i = 0; get_environ(&i); i++)
		add_node_end(&node, get_environ(i), 0);
	info->env = node;
	return (0);
}

