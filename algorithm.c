/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 00:44:46 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 01:20:14 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	findmin(t_list *data)
{
	int	i;

	i = 0;
	data->minindex = 0;
	while (i < data->lena)
	{
		if (data->a[data->minindex] > data->a[i])
			data->minindex = i;
		i++;
	}
}

int	issorted(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->lena)
	{
		while (j < data->lena)
		{
			if (data->a[i] > data->a[j] && i < j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

void	algorithmtwo(t_list *data)
{
	int	lena;

	lena = data->lena;
	while (data->lena != 1 && issorted(data))
	{
		lena = data->lena / 2;
		findmin(data);
		if (data->minindex == 0)
			pushb(data);
		else if (data->minindex == 1)
		{
			if (data->a[0] > data->a[data->lena - 1])
				rotatea(data);
			else
				swapa(data);
		}
		else
		{
			if (data->minindex == data->lena - 1 && data->a[0] > data->a[1])
				swapa(data);
			if (data->minindex < lena)
				rotatea(data);
			else if (data->minindex >= lena)
				revrotatea(data);
		}
	}
	while (data->lenb > 0)
		pusha(data);
}
