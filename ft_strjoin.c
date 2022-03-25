/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 16:42:10 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/14 16:37:17 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		c1;
	int		c2;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	c1 = ft_strlen(s1);
	c2 = ft_strlen(s2);
	dst = (char *) malloc(sizeof(char) * (c1 + c2 + 1));
	if (!dst)
		return (NULL);
	c1 = -1;
	while (s1[++c1])
		dst[c1] = s1[c1];
	c2 = -1;
	while (s2[++c2])
		dst[c1++] = s2[c2];
	dst[c1] = '\0';
	return (dst);
}
