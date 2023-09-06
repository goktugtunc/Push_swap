/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:56:32 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/05 17:28:10 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	char	*m;

	m = (char *)s;
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*d;
	int		i;
	int		j;

	i = -1;
	j = 0;
	d = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!d)
		return (0);
	else
	{
		while (s1[++i])
			d[i] = s1[i];
		while (s2[j])
		{
			d[i] = s2[j];
			j++;
			i++;
		}
		d[i] = 0;
		free(s1);
		return (d);
	}
	return (0);
}

char	*ft_strdup(const char *s1)
{
	size_t		len;
	int			i;
	char		*dest;

	i = 0;
	len = ft_strlen(s1);
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		len;

	if (!s)
		return (NULL);
	len = count_words(s, c);
	result = malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (s[j] != c && s[j])
			j++;
		result[i++] = ft_substr(s, 0, j);
		s += j;
	}
	result[i] = NULL;
	return (result);
}
