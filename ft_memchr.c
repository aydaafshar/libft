/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 19:12:31 by ayda              #+#    #+#             */
/*   Updated: 2025/10/10 19:37:51 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;
	unsigned char	p;

	s = (unsigned char *)str;
	i = 0;
	p = (unsigned char)c;
	while (i < n)
	{
		if (s[i] == p)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
