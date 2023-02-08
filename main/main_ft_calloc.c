/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:35:42 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/08 11:14:44 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*ptr;
	size_t	nmemb;

	nmemb = 50;	
	ptr = (char *)ft_calloc(nmemb, sizeof(char));
	
	if (ptr == NULL)
	{
		printf("Could not allocate required memory\n");
		exit(1);
	}	
	
	free(ptr);
	return (0);
}
