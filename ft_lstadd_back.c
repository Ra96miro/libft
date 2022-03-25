/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gramiro- <gramiro-@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:42:56 by gramiro-          #+#    #+#             */
/*   Updated: 2022/03/22 15:07:43 by gramiro-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list		*dst;

	if (!lst)
		return ;
	if (*lst)
	{
		dst = *lst;
		while (dst->next)
			dst = dst->next;
		dst->next = new;
	}
	else
		*lst = new;
}
