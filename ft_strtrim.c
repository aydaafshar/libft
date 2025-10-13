/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 11:56:22 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/13 16:07:20 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*arr;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
	{
		start++;
	}
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
	{
		end--;
	}
	arr = ft_substr(s1, start, end - start);
	if (!arr)
		return (NULL);
	return (arr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	*set;
// 	char	*res;

// 	set = "-";
// 	str = "--hello--";
// 	res = ft_strtrim(str, set);
// 	printf("%s", res);
// 	free(res);
// 	return (0);
// }
