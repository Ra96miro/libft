/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 16:54:34 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:09 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	chek_needle(const char *haystack, const char *needle, size_t len, size_t i)
{
	size_t	j;

	j = 0;
	while (needle[j])
	{
		if (i == len)
			return (0);
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		else
			return (0);
	}	
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		j;
	char		*src;

	if (needle[0] == '\0')
		return ((char *)haystack);
	src = (char *)haystack;
	i = 0;
	j = 0;
	while (haystack[i] && i <= len)
	{
		if (src[i] == needle[j])
		{
			if (chek_needle(src, needle, len, i) == 1)
				return (&src[i]);
		}
		i++;
	}
	return (0);
}
