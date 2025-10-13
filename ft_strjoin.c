/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:17:16 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/13 16:07:06 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*array;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	array = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!array)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		array[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		array[i] = s2[j];
		i++;
		j++;
	}
	array[i] = '\0';
	return (array);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*str2;
// 	char	*res;

// 	str = "hello, world";
// 	str2 = "ayda";
// 	res = ft_strjoin(str, str2);
// 	printf("%s", res);
// 	free(res);
// 	return (0);
// }
