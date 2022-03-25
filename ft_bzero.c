/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:12:35 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:32:32 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, int n)
{
	char	cc;
	char	*swap;

	cc = 0;
	swap = str;
	while (n > 0)
	{
		*swap = cc;
		n--;
		swap++;
	}
	return (str);
}
