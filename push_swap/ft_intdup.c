/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprevot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 14:13:52 by mprevot           #+#    #+#             */
/*   Updated: 2017/02/08 14:13:54 by mprevot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*ft_intdup(int nbr)
{
	int *ptr;

	ptr = malloc(sizeof(int));
	if (!ptr)
		return (NULL);
	*(ptr) = nbr;
	return (ptr);
}
