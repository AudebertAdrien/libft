/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:32:52 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 19:23:14 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (*str && n--)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (NULL);
}
