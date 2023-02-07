/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:37 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 16:34:08 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#define SIZE 5

int main(void)
{		
	char s1[] = "This is ";
	char s2[] = "a potentially long string";

	char dst2[] = "This is ";
	char src2[] = "a potentially long string";

	int r;
	int size = 16;
	char buffer[size];

	strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if(r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return (0);
}
