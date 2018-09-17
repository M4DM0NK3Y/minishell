/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min_env_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cterblan <cterblan@student.wethinkcode>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 10:19:18 by cterblan          #+#    #+#             */
/*   Updated: 2018/09/17 09:54:56 by cterblan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

char ** min_env_get(char **env)
{
	int		i;
	char	**new;

	i = 0;
	new = (char **)ft_memalloc(ft_sizeof_array(env) * sizeof(char *));
	while (env[i])
	{
		new[i] = ft_strdup(env[i]);
		i++;
	}
	new[i] = NULL;
	return new;
}
