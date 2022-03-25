/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 16:00:32 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:04 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				n;
	unsigned char	temp;

	temp = c;
	n = 0;
	while (s[n] != '\0')
		n++;
	while (n >= 0)
	{
		if (s[n] == temp)
			return ((char *) &s[n]);
		n--;
	}
	return (0);
}
