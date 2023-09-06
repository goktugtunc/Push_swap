/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:57:26 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 01:14:39 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sortalgorithm(t_list *data)
{
	if (data->lena == 1)
		return ;
	//else if (data->lena == 3)
		//threealgorithm(data);
	//else if (data->lena == 5)
	//	fivealgorithm(data);
	else
	{
		//ft_getmaxbits(data);
		//radix_sort(data);
		algorithmtwo(data);
	}
	int i;
	i = 0;
	while (i < data->lena)
	{
		printf("%d", data->a[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*data;

	if (argc < 2)
		return (0);
	data = malloc(sizeof(t_list));
	if (errorcontrol1(argv) == 0)
	{
		freestruct(data);
		return (0);
	}
	argstotext(data, argv);
	if (errorcontrol2(data) == 0 || errorcontrol3(data) == 0)
	{
		freestruct(data);
		print("Error!\n");
		return (0);
	}
	data->a = malloc(sizeof(int) * data->lena);
	data->b = malloc(sizeof(int) * 0);
	placea(data);
	sortalgorithm(data);
	return (0);
}
