/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncmp.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 09:55:30 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/05 14:14:32 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *s1 = "abcdefg";
	char *s2 = "";
	char *s3 = "";
	int size = 20;

	printf("%d : %d", strncmp(s1, s2, size), ft_strncmp(s1, s2, size));	
	printf("\n");
	return (0);
}
