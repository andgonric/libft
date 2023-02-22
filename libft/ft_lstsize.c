/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 21:01:08 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/12 12:25:55 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*temp;

	len = 0;
	temp = lst;
	if (lst == NULL)
		return (0);
	while (temp->next != NULL)
	{
		len++;
		temp = temp->next;
	}
	if (temp->next == NULL)
		len++;
	return (len);
}
