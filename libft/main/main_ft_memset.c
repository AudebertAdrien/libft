/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:05:24 by motoko            #+#    #+#             */
/*   Updated: 2023/02/02 16:21:43 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define BYTE 4

int main (void)
{
	char s[BYTE];
	int c = 65;
	size_t n = sizeof(char) * BYTE;
		
	ft_memset(s, c, n);
	printf("END FILE\n");
	return 0;
}
