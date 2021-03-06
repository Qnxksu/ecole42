/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 19:28:07 by mprevot           #+#    #+#             */
/*   Updated: 2019/03/06 19:28:09 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "share.h"

t_bool	can_write(char *path)
{
	int	fd;

	if (can_read(path))
		return (FALSE);
	fd = open(path, O_CREAT | O_WRONLY | O_TRUNC, 0666);
	close(fd);
	return (fd > 1);
}
