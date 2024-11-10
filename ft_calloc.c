/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-majd <ael-majd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:21:53 by ael-majd          #+#    #+#             */
/*   Updated: 2024/11/10 18:02:10 by ael-majd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*call;
	int		n;

	if (size < 0 || count < 0)
		return (0);
	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	n = size * count;
	call = malloc(n);
	if (!call)
		return (NULL);
	else
		ft_bzero(call, n);
	return (call);
}
