/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 11:30:30 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 14:16:16 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "abcdefg";
	char *s2 = "abcdef\000h";
	int n = 20;

	printf("%d", memcmp((void *)s1,(void *)s2, n));
	printf("\n");
	printf("%d", ft_memcmp((void *)s1,(void *)s2, n));
	printf("\n");
	return (0);
}
