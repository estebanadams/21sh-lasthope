/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 18:43:03 by eleclet           #+#    #+#             */
/*   Updated: 2017/03/15 16:45:55 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

char		*parser(char *str, t_env *env)
{
	char **param;
	char **path;

	//str = parse_quote(str);
	//ft_putendl(str);
	path = NULL;
	if (!(param = ft_strsplit(str, ' ')))
		return (str);
	if (!buildin(param, env))
		if (basic_exec(param, env->t))
			exec_bin(env->t, param, path = split_path(env->t));
	ft_tabdel(param);
	//ft_strdel(&str);
	return (str);
}

bool		buildin(char **line, t_env *env)
{
	if (ft_strcmp(line[0], "setenv") == 0)
		return (set_env(line, env));
	if (ft_strcmp(line[0], "exit") == 0)
		super_exit(env);
	if (ft_strcmp(line[0], "env") == 0)
		return (display_env(line, env));
	if (ft_strcmp(line[0], "unsetenv") == 0)
		return (unset_env(line, env));
	if (ft_strcmp(line[0], "cd") == 0)
		return (cd(env->t, line));
	if (ft_strcmp(line[0], "echo") == 0)
		return (b_echo(line));
	return (0);
}

/*void	tree_start(t_tree *tree, char *str, t_env *env)
{
	if (tree == NULL)
		return ;
	if (tree->type == 0)
		parser(tree->str, t_env);
}*/
