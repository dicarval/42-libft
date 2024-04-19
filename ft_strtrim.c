/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:27:52 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/18 15:54:05 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *str, char const *set)
{
	char	*strtrim;
	int		i;
	int		j;
	int		trim_len;

	i = 0;
	while (str[i] && ft_is_set(str[i], set))//checks the beggining of the string
		i++;
	j = ft_strlen(str) - 1;
	while (j && ft_is_set(str[j], set))//checks the end of the string
		j--;
	trim_len = j - i + 2;//+ 2 because we want the lenght, j and i starts at 0 so...
	if (j < i)
	{
		strtrim = ft_calloc(1, 1);
		return (strtrim);
	}
	else
		strtrim = malloc(sizeof(char) * trim_len);//malloc of the trimmed string
	if (!strtrim)
		return (NULL);
	ft_strlcpy(strtrim, &str[i], trim_len);//copy of trimmed string
	return (strtrim);
}
