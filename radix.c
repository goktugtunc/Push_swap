/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:30:46 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 10:41:13 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_getmaxbits(t_list *data)
{
	int	i;
	int	max;

	i = 0;
	max = 0;
	while (i < data->lena)
	{
		if (data->a[i] > max)
			max = data->a[i];
		i++;
	}
	i = 0;
	while (max > 1)
	{
		max = max / 2;
		i++;
	}
	data->max_bits = i + 1;
}

int	radix_sort(t_list *data)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < data->max_bits)
	{
		i = data->lena;
		while (i > 0)
		{
			if (((data->a[0] >> j) & 1) == 0)
				pushb(data);
			else
				rotatea(data);
			i--;
		}
		while (data->lenb > 0)
			pusha(data);
		j++;
	}
	return (0);
}
