/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:02:06 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/17 18:45:47 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	i;

	i = 0;
	src_len = ft_strlen(src);
	if (src == 0)
		return (0);
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

// int main(void)
// {
// 	char	dst[10] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 0};
// 	char	src[10] = {5, 5, 5, 0, 0, 0, 0, 0, 0, 0};

// 	printf("strlcpy returned %ld\n", ft_strlcpy(dst, src, 5));
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", dst[i]);
// }