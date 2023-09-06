/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extrafunction1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:29:30 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 00:22:24 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	placea(t_list *data)
{
	int	i;

	i = 0;
	while (data->numbers[i])
	{
		data->a[i] = data->numbers[i];
		i++;
	}
	data->a[i] = '\0';
}

void	freestruct(t_list *data)
{
	free(data->str);
	free(data->numbersarray);
	free(data->numbers);
	free(data->a);
	free(data->b);
}

void	print(char *a)
{
	int	i;

	i = -1;
	while (a[++i])
		write(1, &a[i], 1);
}

void	argstotext(t_list *data, char **args)
{
	int	i;

	i = 2;
	data->str = ft_strdup(args[1]);
	if (args[i])
		data->str = ft_strjoin(data->str, " ");
	while (args[i])
	{
		data->str = ft_strjoin(data->str, args[i]);
		if (args[i + 1] != NULL)
			data->str = ft_strjoin(data->str, " ");
		i++;
	}
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
