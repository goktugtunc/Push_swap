/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:09:30 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/06 01:28:15 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pusha(t_list *data)
{
	ft_downone_a(data);
	data->lena++;
	data->a[0] = data->b[0];
	ft_upone_b(data);
	data->lenb--;
	print("pa\n");
}

void	pushb(t_list *data)
{
	ft_downone_b(data);
	data->lenb++;
	data->b[0] = data->a[0];
	ft_upone_a(data);
	data->lena--;
	print("pb\n");
}
