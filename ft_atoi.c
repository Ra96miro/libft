/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 18:43:40 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/23 15:32:38 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_number(const char *str)
{
	if (*str == '-')
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	sign;
	int	number;

	n = 0;
	number = 0;
	sign = 1;
	while (str[n] == '\t' || str[n] == '\n' || str[n] == '\v' || str[n] == '\f'
		|| str[n] == '\r' || str[n] == ' ')
		n++;
	if (str[n] == '+' || str[n] == '-')
	{
		sign = check_number(&str[n]);
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		number = number * 10 + (str[n] - 48);
		n++;
	}
	return (sign * number);
}
