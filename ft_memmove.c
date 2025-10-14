/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:01:46 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/14 16:46:55 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	checkadress(unsigned char *p, const unsigned char *x, size_t n)
{
	size_t	i;

	i = 0;
	if (p < x)
	{
		while (i < n)
		{
			p[i] = x[i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			p[n - 1 - i] = x[n - 1 - i];
			i++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*x;

	p = (unsigned char *)dest;
	x = (const unsigned char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	checkadress(p, x, n);
	return (dest);
}
