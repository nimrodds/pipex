#include "pipex.h"

int	struct_init(t_struct *data, int argc, char **argv, char **envp)
{	
	data->envp = envp;
	data->argv = argv;
	data->argc = argc;
	data->commands = NULL;
	data->argz = NULL;
	data->buffer = NULL;
	data->path = NULL;
	data->command = NULL;
	data->unix_paths = NULL;
	data->current_argv = 0;
	while (argv[data->current_argv])
		data->current_argv++;
	data->argz_num = data->current_argv;
	return (1);
}

void	freeing(t_struct *data)
{
	data->buffer = NULL;
}