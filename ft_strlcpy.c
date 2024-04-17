/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:40:38 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/15 14:00:57 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (dst == NULL || src == NULL || dstsize == 0)
		return (src_size);
	while (*src && --dstsize)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (src_size);
}
