/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swapfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 18:08:27 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 01:13:40 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapa(t_list *data)
{
	int	swap;

	swap = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = swap;
	print("sa\n");
}

void	swapb(t_list *data)
{
	int	swap;

	swap = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = swap;
	print("sb\n");
}

void	swaps(t_list *data)
{
	int	swap;

	swap = data->b[0];
	data->b[0] = data->b[1];
	data->b[1] = swap;
	swap = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = swap;
	print("ss\n");
}
