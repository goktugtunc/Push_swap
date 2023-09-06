/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotatefunctions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:11:29 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 01:22:38 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	revrotatea(t_list *data)
{
	int	temp;

	temp = data->a[data->lena - 1];
	ft_downone_a(data);
	data->a[0] = temp;
	print("rra\n");
}

void	revrotateb(t_list *data)
{
	int	temp;

	temp = data->b[data->lenb - 1];
	ft_downone_b(data);
	data->b[0] = temp;
	print("rrb\n");
}

void	revrotater(t_list *data)
{
	int	temp;

	temp = data->a[data->lena - 1];
	ft_downone_a(data);
	data->a[0] = temp;
	temp = data->b[data->lenb - 1];
	ft_downone_b(data);
	data->b[0] = temp;
	print("rrr\n");
}