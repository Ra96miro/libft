/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:14:56 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:53 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*s1;
	const char		*s2;
	unsigned int	x;

	if ((unsigned char *) dst == NULL && (unsigned char *)src == NULL)
		return (NULL);
	x = 0;
	s1 = dst;
	s2 = src;
	if (s1 > s2)
	{
		while (len-- > 0)
			s1[len] = s2[len];
	}
	else
	{
		while (len > 0)
		{
			s1[x] = s2[x];
			len--;
			x++;
		}
	}
	return (s1);
}
