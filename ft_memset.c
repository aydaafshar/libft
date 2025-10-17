/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:01:52 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/17 17:02:13 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int x, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = x;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s1[10] = "abcdef";

// 	ft_memset(s1 + 2,'c', 3);
// 	for (int i = 0; i < 10; i++)
// 		printf("%c ", (unsigned char)s1[i]);
// 	printf("\n");
// 	return (0);
// }
