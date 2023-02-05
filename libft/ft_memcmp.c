/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 13:08:46 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 14:25:12 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;

	str1 = s1;	
	str2 = s2;	
	if (!*str1 || !*str2)
		return (*str1 - *str2);
	while ((*str2 || *str1) && n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);	
		str2++;
		str1++;
	}
	return (0);
}
