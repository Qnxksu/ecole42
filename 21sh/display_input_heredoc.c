/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_input_heredoc.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 09:09:12 by mprevot           #+#    #+#             */
/*   Updated: 2018/02/05 09:09:21 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*display_input_heredoc(char *stop)
{
	char *line;
	char *input;

	line = NULL;
	input = NULL;
	t_restore();
	ft_putstr("heredoc> ");
	while (42 && ft_gnl(STDIN_FILENO, &line))
	{
		if (ft_strlen(line))
		{
			if (ft_strequ(line, stop))
			{
				ft_memdel(&line);
				t_init();
				return (!input ? ft_strdup("") : input);
			}
			input = (!input) ?
				ft_strjoin_multi(TRUE, ft_strdup(line), ft_strdup("\n"), NULL)
				: ft_strjoin_multi(TRUE, input, line, ft_strdup("\n"), NULL);
			ft_putstr("heredoc> ");
		}
		else
			ft_memdel(&line);
	}
}
