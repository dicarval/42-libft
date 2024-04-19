/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:29:49 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/18 16:03:31 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);//"A new string is created to collect the results from the successive applications of f."
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);//"Applies the function f to each character of the string s, passing its index as the first argument and the character itself as the second."
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
