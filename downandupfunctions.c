/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   downandupfunctions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:16:15 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 01:24:11 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_downone_a(t_list *data)
{
	int	i;

	i = data->lena;
	while (i > 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
}

void	ft_upone_a(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->lena - 1)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}
}

void	ft_downone_b(t_list *data)
{
	int	i;

	i = data->lenb;
	while (i > 0)
	{
		data->b[i] = data->b[i - 1];
		i--;
	}
}

void	ft_upone_b(t_list *data)
{
	int		i;

	i = 0;
	while (i < data->lenb)
	{
		data->b[i] = data->b[i + 1];
		i++;
	}
}