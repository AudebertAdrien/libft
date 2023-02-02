/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: motoko <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:10:42 by motoko            #+#    #+#             */
/*   Updated: 2023/02/02 18:14:14 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIZE 5
typedef int type;

int	main (void)
{
	type 	*destination = NULL;
	type 	source[SIZE] = {1,2,3,4,5};
	//type 	*source2 = "toto";
	size_t 	t = sizeof(type) * SIZE;

	destination = (type *)malloc(t);
	ft_memcpy(destination, source, t);
	printf("END main ft_strlen\n");
	free(destination);
	return (0);
}
