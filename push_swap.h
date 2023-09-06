/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gotunc <gotunc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 21:57:35 by gotunc            #+#    #+#             */
/*   Updated: 2023/09/07 00:20:58 by gotunc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_list{
	char	*str;
	char	**numbersarray;
	long	*numbers;
	int		*a;
	int		*b;
	int		lena;
	int		lenb;
	int		max_bits;
	int		minindex;
	int		maxindex;
}	t_list;

void	print(char *a);
int	ft_isdigit(char c);
void	argstotext(t_list *data, char **args);
int	errorcontrol1(char **args);
int	errorcontrol2(t_list *data);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
long	ft_atol(char *a);
int	errorcontrol3(t_list *data);
void	freestruct(t_list *data);
void	placea(t_list *data);
void	revrotatea(t_list *data);
void	revrotateb(t_list *data);
void	revrotater(t_list *data);
void	pusha(t_list *data);
void	pushb(t_list *data);
void	rotatea(t_list *data);
void	rotateb(t_list *data);
void	rotater(t_list *data);
void	swapa(t_list *data);
void	swapb(t_list *data);
void	swaps(t_list *data);
void	ft_downone_a(t_list *data);
void	ft_upone_a(t_list *data);
void	ft_downone_b(t_list *data);
void	ft_upone_b(t_list *data);
void	algorithmtwo(t_list *data);

#endif
