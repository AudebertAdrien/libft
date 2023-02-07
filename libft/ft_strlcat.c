/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:20:14 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 16:34:12 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (!size)
		return (src_size);
	while (src[i] && (i + dst_size) < (size - 1))
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	if (dst_size > size - 1)
		return (size + src_size);	
	if (dst_size)
		dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}
