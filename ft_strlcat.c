/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 14:02:01 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/08 14:02:02 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	des_len;
	size_t	i;

	src_len = ft_strlen(src);
	des_len = ft_strlen(dest);
	i = 0;
	if (des_len >= size)
	{
		return (size + src_len);
	}
	while (src[i] != '\0' && des_len + i + 1 < size)
	{
		dest[des_len + i] = src[i];
		i++;
	}
	dest[des_len + i] = '\0';
	return (des_len + src_len);
}

// int	main(void)
// {
// 	char	dest[10] = "hi";
// 	size_t	i;

// 	i = ft_strlcat(dest, "there", 9);
// 	printf("%s\n", dest);
// 	printf("%zu\n", i);
// 	return (0);
// }
