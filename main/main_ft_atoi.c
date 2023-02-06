/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:09:02 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/06 19:26:31 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	char e[] = {9, 10, 11, 12, 13, 0};
	char *s1 = ((char *)e + 1);
	char *s2 = "  123";
	char *s3 = "123abc";
	char *s4 = "abc123";
	char *s5 = "-123";
	char *s6 = "+123";
	char *s7 = "";
	char *s8 = "999999999999";
	
	printf("%d : %d",ft_atoi(s1), atoi(s1));
	printf("\n");
	printf("%d : %d",ft_atoi(s2), atoi(s2));
	printf("\n");
	printf("%d : %d",ft_atoi(s3), atoi(s3));
	printf("\n");
	printf("%d : %d",ft_atoi(s4), atoi(s4));
	printf("\n");
	printf("%d : %d",ft_atoi(s5), atoi(s5));
	printf("\n");
	printf("%d : %d",ft_atoi(s6), atoi(s6));
	printf("\n");;
	printf("%d : %d",ft_atoi(s7), atoi(s7));
	printf("\n");
	printf("%d : %d",ft_atoi(s8), atoi(s8));
	printf("\n");
	return (0);
}
