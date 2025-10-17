/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:01:40 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/17 16:44:51 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*p;
	const unsigned char	*x;

	i = 0;
	p = (unsigned char *)dest;
	x = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	while (i < n)
	{
		p[i] = x[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	const char	*str1 = "codam 25 ";
// 	char		dest[23] = "ayda khar ast";
// 	char		*res;

// 	res = ft_memcpy(dest, str1, 3);
// 	printf("%s", res);
// 	return (0);
// }
