/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 12:31:03 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:32:18 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*if_min(int n)
{
	char	*sc;
	int		i;

	i = 11;
	n = 214748364;
	sc = (char *)malloc(sizeof(char) * i + 1);
	if (!sc)
		return (NULL);
	sc[0] = '-';
	sc[i] = 0;
	i--;
	sc[i] = '8';
	i--;
	while (n > 0)
	{
		sc[i] = 48 + (n % 10);
		n = n / 10;
		i--;
	}
	return (sc);
}

int	how_long(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*sc;
	int		i;

	if (n == -2147483648)
		return (if_min(n));
	else
		i = how_long(n);
	sc = (char *)malloc(sizeof(char) * i + 1);
	if (!sc)
		return (NULL);
	sc[i] = 0;
	if (n == 0)
		sc[0] = 48 + (n % 10);
	if (n < 0)
	{
		sc[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		sc[--i] = 48 + (n % 10);
		n = n / 10;
	}
	return (sc);
}
