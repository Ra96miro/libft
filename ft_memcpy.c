/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:42:50 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/14 16:41:15 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;
	int					x;

	if (dst == NULL && src == NULL)
		return (NULL);
	x = 0;
	s1 = dst;
	s2 = src;
	if (n == 0)
		return (s1);
	while (n > 0)
	{
		s1[x] = s2[x];
		n--;
		x++;
	}
	return (s1);
}
