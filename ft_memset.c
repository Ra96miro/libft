/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:08:38 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:30:50 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	cc;
	unsigned char	*swap;

	cc = c;
	swap = str;
	while (n > 0)
	{
		*swap = cc;
		n--;
		swap++;
	}
	return (str);
}
