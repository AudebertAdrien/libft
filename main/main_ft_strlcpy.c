/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:37 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 09:35:32 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

#define SIZE 20

int main(void)
{
	char s1[] = "te";
	char s2[10];
	memset(s2, 'A', 10);

	char *s3 = "";
	char s4[10];
	memset(s4, 'A', 10);
	
	char s5[] = "1";
	char s6[10];
	memset(s6, '1', 10);
	
	char s7[10] = "abcddefg";
	char s8[10];
	memset(s8, 'A', 10);

	printf("%ld : %ld", strlcpy(s2, s1, SIZE), ft_strlcpy(s2, s1, SIZE));	
	printf("\n");
	printf("%ld : %ld", strlcpy(s4, s3, 42), ft_strlcpy(s4, s3, 42));	
	printf("\n");
	printf("%ld : %ld", strlcpy(s6, s5, 0), ft_strlcpy(s6, s5, 0));	
	printf("\n");
	printf("%ld : %ld", strlcpy(s8, s7, SIZE), ft_strlcpy(s8, s7, SIZE));	
	printf("\n");
		
	return (0);
}
