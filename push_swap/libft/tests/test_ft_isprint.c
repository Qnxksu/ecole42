/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 14:48:54 by mprevot           #+#    #+#             */
/*   Updated: 2016/11/27 14:53:00 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <ctype.h>

int		main(void)
{
	int i = 0;
	while (i <= 256)
	{
		if (isprint(i) != ft_isprint(i))
			return (i + 1000);
		i++;
	}
	return (0);
}
