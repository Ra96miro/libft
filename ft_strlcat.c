/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 15:31:43 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:18 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	counter;
	size_t	counter1;
	size_t	cs;

	cs = ft_strlen(src);
	counter1 = 0;
	counter = ft_strlen(dst);
	if (!n || n <= counter)
		return (n + cs);
	while (src[counter1] && (counter + counter1 + 1) < n)
	{
		dst[counter + counter1] = src[counter1];
		counter1++;
	}
	dst[counter + counter1] = 0;
	return (counter + cs);
}
