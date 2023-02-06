/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:37 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/06 18:50:10 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

#define SIZE 2

int main(void)
{
	char s1[] = "te";
	char s2[10];
	memset(s2, 'A', 10);

	printf("%ld : %ld", strlcpy(s2, s1, SIZE), ft_strlcpy(s2, s1, SIZE));	
		
	return (0);
}
