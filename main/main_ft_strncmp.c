/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:55:30 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 11:26:38 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "1234";
	char *s2 = "1235";
	int size1 = 4;
	
	char *s3 = "1234";
	char *s4 = "1235";
	int size2 = 0;

	char *s5 = "test\200";
	char *s6 = "test\0";
	int size3 = 6;
	
	int chr = -1;
     	char i = chr;
    	printf("unsigned char: %d\n", i);

	printf("%d : %d", strncmp(s1, s2, size1), ft_strncmp(s1, s2, size1));	
	printf("\n");
	printf("%d : %d", strncmp(s3, s4, size2), ft_strncmp(s3, s4, size2));	
	printf("\n");
	printf("%d : %d", strncmp(s5, s6, size3), ft_strncmp(s5, s6, size3));	
	printf("\n");

	return (0);
}
