/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:26:29 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/03 12:23:59 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*destCpy;
	const char	*srcCpy;

	destCpy = (char *)dest;
	srcCpy = (char *)src;
	if(dest > src)
	{
		while(n--) 
			destCpy[n] = srcCpy[n];
	} 
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}
