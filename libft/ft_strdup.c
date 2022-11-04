/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andgonca <andgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:31:29 by andgonca          #+#    #+#             */
/*   Updated: 2022/11/04 20:58:38 by andgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		len;
	int		c;
	char	*sr;

	len = ft_strlen((char *)str);
	c = 0;
	sr = malloc((len + 1) * sizeof(char));
	if (sr == 0)
		return (NULL);
	while (str[c])
	{
		sr[c] = str[c];
	c++;
	}
	sr[c] = '\0';
	return (sr);
}
