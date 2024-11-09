/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:31:24 by ael-majd          #+#    #+#             */
/*   Updated: 2024/11/02 12:54:04 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	int	i;
	int	count;
	int	in_word;

	i = 0;
	count = 0;
	in_word = 0;
	while (s[i])
	{
		in_word = 0;
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			if (in_word == 0)
			{
				count++;
				in_word = 1;
			}
			i++;
		}
	}
	return (count);
}

static char	**split_word(char **split, const char *s, char c)
{
	int	len;
	int	start;
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c && s[i])
			i++;
		start = i;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i])
				i++;
			len = i - start;
			split[j] = ft_substr(s, start, len);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**split;

	if (!s)
		return (NULL);
	count = count_word(s, c) + 1;
	split = malloc(sizeof(char *) * (count));
	if (!split)
		return (NULL);
	split = split_word(split, s, c);
	return (split);
}