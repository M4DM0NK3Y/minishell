/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_cmd_path_exe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 14:00:26 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/20 08:49:27 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

int		min_cmd_path_exe(char **av, char ***env)
{
	pid_t	pid;
	char	*path;

	path = min_sys_scan_path(av[0]);
	if (path == NULL)
		return (1);
	pid = fork();
	if (pid == 0)
		execve(path, av, *env);
	else if (pid < 0)
	{
		ft_putendl("ERROR: fork failed\n");
		return (-1);
	}
	wait(&pid);
	return (0);
}
