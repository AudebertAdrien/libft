/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 10:29:16 by motoko            #+#    #+#             */
/*   Updated: 2023/02/02 19:15:28 by aaudeber         ###   ########.fr       */
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
