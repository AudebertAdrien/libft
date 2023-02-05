/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:36:51 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/03 11:06:56 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*destCpy;
	const char 	*srcCpy;

	srcCpy = (char *)src;
	destCpy = (char *)dest; 
	while(n--)
		*destCpy++ = *srcCpy++;
	return (dest);
}
