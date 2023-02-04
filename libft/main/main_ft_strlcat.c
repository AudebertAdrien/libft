/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:11:37 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/04 17:18:14 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#define SIZE 5

int main(void)
{
	
	char *s1 = "toto";
	char s2[5] = {'q','b'};

	char *s3 = "toto";
	char s4[5] = {'q','b'};
	printf("%ld : %ld", ft_strlcat(s2, s1, SIZE), strlcat(s4, s3, SIZE));	

	/*	
	char first[] = "This is ";
	char last[] = "a potentially long string";
	size_t r;
	int size = 16;
	char buffer[size];

	strcpy(buffer,first);
	r = strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %ld\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return(0);
	*/
	return (0);
}
