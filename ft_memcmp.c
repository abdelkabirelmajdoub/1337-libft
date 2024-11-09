/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:43:05 by ael-majd          #+#    #+#             */
/*   Updated: 2024/10/31 18:09:33 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = (const char *) s1;
	str2 = (const char *) s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
