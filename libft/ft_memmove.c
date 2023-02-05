/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:26:29 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 18:57:51 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = (char *)dest;
	src_cpy = (char *)src;
	if (dest > src)
	{
		while (n--) 
			dst_cpy[n] = src_cpy[n];
	} 
	else 
		ft_memcpy(dest, src, n);
	return (dest);
}
