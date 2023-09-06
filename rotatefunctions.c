/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotatefunctions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 01:11:44 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 01:23:24 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotatea(t_list *data)
{
	int	temp;

	temp = data->a[0];
	ft_upone_a(data);
	data->a[data->lena - 1] = temp;
	print("ra\n");
}

void	rotateb(t_list *data)
{
	int	temp;

	temp = data->b[0];
	ft_upone_b(data);
	data->b[data->lenb - 1] = temp;
	print("rb\n");
}

void	rotater(t_list *data)
{
	int	temp;

	temp = data->a[0];
	ft_upone_a(data);
	data->a[data->lena - 1] = temp;
	temp = data->b[0];
	ft_upone_b(data);
	data->b[data->lenb - 1] = temp;
	print("rr\n");
}
