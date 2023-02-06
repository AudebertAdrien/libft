/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:36:51 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/06 09:06:42 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dst_cpy;
	const char	*src_cpy;

	src_cpy = (char *)src;
	dst_cpy = (char *)dest;
	while (n--)
		*dst_cpy++ = *src_cpy++;
	return (dest);
}
