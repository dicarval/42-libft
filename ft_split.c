/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicarval <dicarval@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 11:05:15 by dicarval          #+#    #+#             */
/*   Updated: 2024/04/17 14:47:42 by dicarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_string(char c, char spltr)
{
	if (spltr == c)
		return (0);
	return (1);
}

int	ft_strlen_s(char const *str, char spltr)
{
	int	i;

	i = 0;
	while (str[i] != '\0' && in_string(str[i], spltr))
		i++;
	return (i);
}

int	count_strings(char const *str, char spltr)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && !in_string(str[i], spltr))
			i++;
		if (str[i] != '\0')
			counter++;
		while (str[i] != '\0' && in_string(str[i], spltr))
			i++;
	}
	return (counter);
}

char	*word_allocate(char const *str, char spltr)
{
	int		len_word;
	char	*word;
	int		i;

	i = 0;
	len_word = ft_strlen_s(str, spltr);
	word = (char *)malloc((len_word + 1) * sizeof(char));
	if (!word)
		return (NULL);
	word[len_word] = 0;
	while (str[i] != '\0' && in_string(str[i], spltr))
	{
		word[i] = str[i];
		i++;
	}
	return (word);
}

char	**ft_split(char const *str, char spltr)
{
	char	**list_str;
	int		number_str;
	int		g;

	g = 0;
	number_str = count_strings(str, spltr);
	list_str = (char **)malloc((number_str + 1) * sizeof(char *));
	if (!list_str)
		return (NULL);
	list_str[number_str] = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && !in_string(*str, spltr))
			str++;
		if (*str != '\0')
		{
			list_str[g] = word_allocate(str, spltr);
			g++;
		}
		while (*str != '\0' && in_string(*str, spltr))
			str++;
	}
	return (list_str);
}
