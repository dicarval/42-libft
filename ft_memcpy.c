/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:18:41 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/15 14:47:38 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	typedef unsigned char BYTE;
	if (dest == NULL && src == NULL)
		return (NULL);
	d = (BYTE *)dest;
	s = (BYTE *)src;
	while (n-- > 0)
		*(d++) = *(s++);
	return ((void *)dest);
}
