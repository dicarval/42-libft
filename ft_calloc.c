/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:36:23 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/15 14:44:55 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*ptr;

	bytes = nmemb * size;
	if (size != 0 && ((bytes / size) != nmemb))
		return (NULL);
	ptr = malloc(bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}
