/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:36:51 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/02 18:34:59 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memcpy(void *destination, const void *source, size_t size)
{
	unsigned char		*destCpy;
	const unsigned char 	*srcCpy;

	srcCpy = (char *)source;
	destCpy = (char *)destination;
	while(size--)
		*destCpy++ = *srcCpy++;
	return (destination);
}
