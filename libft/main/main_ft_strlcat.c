/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:37 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/04 11:05:04 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

#define SIZE 5

int main(void)
{
	char *s1 = "toto";
	char s2[SIZE] = {'q','b'};

	ft_strlcat(s2, s1, SIZE);	
		
	return (0);
}
