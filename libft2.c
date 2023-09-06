/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:28:42 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 00:15:49 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *a)
{
	int		i;
	long	number;
	int		sign;

	i = 0;
	number = 0;
	sign = 1;
	while (a[i])
	{
		if (ft_isdigit(a[i]) == 0)
			sign *= -1;
		else
		{
			number = (a[i] - 48) + (number * 10);
		}
		i++;
	}
	number = number * sign;
	if (number > 2147483647 || number < -2147483648)
	{
		print("Error!\n");
		exit(1);
	}
	return (number);
}

void	*ft_calloc(size_t count, size_t size)
{
	char		*d;
	size_t		i;

	i = 0;
	d = (char *)malloc(size * count);
	if (!d)
		return (0);
	while (i < size * count)
	{
		d[i] = '\0';
		i++;
	}
	return (d);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*rtn;
	size_t	i;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	i = 0;
	rtn = ft_calloc(len + 1, sizeof(char));
	if (!rtn)
		return (NULL);
	rtn[len] = 0;
	while (i < len)
		rtn[i++] = s[start++];
	return (rtn);
}
