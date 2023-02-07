/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:35:42 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 16:56:07 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	*ptr;
	size_t	length;

	len = 50;	
	ptr = (char *)calloc(len, sizeof(char));
	
	if (ptr == NULL)
	{
		printf("Could not allocate required memory\n");
		exit(1);
	}	
	
	free(ptr);
	return (0);
}
