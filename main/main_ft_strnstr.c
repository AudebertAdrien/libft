/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:54:47 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/06 19:46:21 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	
	char *ptr1;
	char *ptr2;
	int size = 20;

	ptr1 = strnstr(largestring, smallstring, size);
	ptr2 = ft_strnstr(largestring, smallstring, size);
	
	printf("%p : %p", strnstr(haystack, "cd", 8), ft_strnstr(haystack, "cd", 8));
	printf("\n");
	printf("%p : %p", strnstr(haystack, "a", 1), ft_strnstr(haystack, "a", 1));
	printf("\n");
	printf("%p : %p", strnstr(haystack, needle, 0), ft_strnstr(haystack, needle, 0));
	return (0);
}
