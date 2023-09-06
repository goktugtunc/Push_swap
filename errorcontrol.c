/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errorcontrol.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 00:50:38 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 00:58:45 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	samenumbercontrol(t_list *data)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < data->lena)
	{
		while (j < data->lena)
		{
			if (data->numbers[i] == data->numbers[j] && i != j)
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

int	errorcontrol1(char **args)
{
	int	i;
	int	j;
	int	num;

	i = 1;
	j = 0;
	num = 0;
	while (args[i])
	{
		while (args[i][j])
		{
			if (args[i][j] >= '0' && args[i][j] <= '9')
				num = 1;
			j++;
		}
		if (num == 0)
		{
			print("Error!\n");
			return (0);
		}
		j = 0;
		num = 0;
		i++;
	}
	return (1);
}

int	errorcontrol2(t_list *data)
{
	char	*text;
	int		i;
	int		error;

	i = 0;
	error = 0;
	text = data->str;
	while (text[i])
	{
		if (ft_isdigit(text[i]) == 0)
		{
			if ((text[i] == '-' || text[i] == '+') && !ft_isdigit(text[i + 1]))
				error = 1;
			else if (text[i] != ' ' && text[i] != '\t' && 
				text[i] != '-' && text[i] != '+')
				error = 1;
		}
		else if (ft_isdigit(text[i]) == 1 && text[i + 1] != ' ')
			if (!ft_isdigit(text[i + 1]) && text[i + 1] != '\0')
				error = 1;
		i++;
	}
	if (error == 1)
		return (0);
	return (1);
}

int	errorcontrol3(t_list *data)
{
	int	i;

	i = 0;
	data->numbersarray = ft_split(data->str, ' ');
	while (data->numbersarray[i])
		i++;
	data->numbers = malloc(sizeof(long *) * i);
	i = 0;
	while (data->numbersarray[i])
	{
		data->numbers[i] = ft_atol(data->numbersarray[i]);
		i++;
	}
	data->lena = i;
	data->lenb = 0;
	if (samenumbercontrol(data) == 1)
		return (0);
	return (1);
}
