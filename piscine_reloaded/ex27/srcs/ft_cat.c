/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:28:31 by mprevot           #+#    #+#             */
/*   Updated: 2016/11/10 10:51:24 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/display_file.h"

void	ft_cat(char *path)
{
	int		i;
	int		fd;
	int		l;
	void	*buf[255];

	i = 0;
	fd = open(path, O_RDONLY);
	if (fd > -1)
	{
		while ((l = read(fd, buf, 255)) > 0)
		{
			write(1, buf, l);
		}
	}
	close(fd);
}
