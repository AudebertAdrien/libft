/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaudeber <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:35:22 by aaudeber          #+#    #+#             */
/*   Updated: 2023/02/07 17:49:21 by aaudeber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
 	char    *ptr;

 	if (!nmemb || !size)
		return (NULL);
	if (nmemb * size > )
		return (NULL);
        ptr = malloc();
        if (ptr == NULL)
        {
                printf("Could not allocate required memory\n");
                exit(1);
        }           
	return ();
}
