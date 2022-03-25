/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 17:48:58 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:31:59 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			x;

	s1c = (unsigned char *) s1;
	s2c = (unsigned char *) s2;
	x = 0;
	while (x != n)
	{
		if (s1c[x] == s2c[x])
			x++;
		else
			return (s1c[x] - s2c[x]);
	}
	return (0);
}
