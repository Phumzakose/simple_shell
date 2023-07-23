#include "main.h"

/**
 * clear_info - clears info_t struct
 * @info: struct address
 * Return: void
 */

void clear_info(info_t *info)
{
	info->arg = NULL;
	info->argv = NULL;
	info->path = NULL;
	infor->argc = 0;
}

/**
 * set_info - initialise info_t struct
 * @info: address struct
 * @av: argument vector
 * Return: void
 */

void set_info(info_t *info, char **av)
{
	into i = 0;

	info->fname = av[0];
	if (!info->argv)
	{
		info->argv = malloc(sizeof(char *) * 2);
		if (info->argv)
		{
			info->argv[0] = _strdup(info->arg);
			info->argv[1] = NULL;
		}
	}
	for (i = 0; info->argv && info->argv[i]; i++)
		inf->argc = i;

	replace_alias(info);
	replace_vars(info);
}

/**
 * free_info - frees info_t struct fields
 * @info: struct address
 * @all: true if fields are being cleared
 * Return: Void
 */
void free_info(info_t *info, int all)
{
	ffree(info->argv);
	info->argv = NULL;
	info->path = NULL;
	if (all)
	{
		if (!info->cmd_buf)
			free(info->arg);
		if (info->env)
			free_list(&(info->env));
		if (info->history)
			free_list(&(info->history));
		if (info->alias)
			free_list(&(info->alias));
		if (info->environ)
			info->environ = NULL;
		bfree((void **)info->cmd_buf);
		if (info->readfd > 2)
			close(info->readfd);
		_putchar(BUF_FLUSH);
	}
}
