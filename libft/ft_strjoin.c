/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 11:22:57 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/09 12:32:36 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int	s1_len;
	int	s2_len;
	int	i;
	int	j;

	i = 0;
	j = 0;	
	s1_len = ft_strlen(s1);	
	s2_len = ft_strlen(s2);	
	ptr = (char *)malloc(sizeof(char) * (s1_len + s2_len) + 1);
	if (!ptr)
		return (NULL);
	while (s1[i] && s1 && s2)
	{
		ptr[i] = s1[i];	
		i++;
	}
	while (s2[j] && s1 && s2)
	{
		ptr[i] = s2[j];	
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);	
}
