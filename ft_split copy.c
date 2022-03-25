/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:43:40 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 13:01:03 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	go_on(char const *s, char c, int x)
{
	while (s[x] == c)
		x++;
	return (x);
}

int	how_many(char const *s, char c)
{
	int	x;
	int	sep;

	x = 0;
	sep = 1;
	if (s[0] == '\0')
		return (0);
	while (s[x] == c)
		x++;
	while (s[x] != '\0')
	{
		if (s[x] == c && s[x + 1] != c && s[x + 1] != '\0')
			sep++;
		x++;
	}
	return (sep);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		x;
	int		y;

	if (!s || !c)
		return (NULL);
	x = 0;
	y = 0;
	i = 0;
	arr = malloc(sizeof(char *) * (how_many(s, c) + 1));
	if (!arr)
		return (NULL);
	x = go_on(s, c, x);
	while (s[x] != '\0')
	{
		y = 0;
		while (s[x + y] != c && s[x + y] != '\0')
			y++;
		arr[i++] = ft_substr(s, x, y);
		x += y;
		x = go_on(s, c, x);
	}
	arr[i] = 0;
	return (arr);
}

// int main ()
// {
// 	char *s = "\0aa\0bbb";
// 	char c = '\0';
// 	ft_split(s, c);
// }
