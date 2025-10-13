/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:10:57 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/13 16:07:41 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;
	char	**arr;

	i = 0;
	j = 0;
	start = 0;
	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		len = i - start;
		arr[j] = ft_substr(s, start, len);
		j++;
	}
	arr[j] = NULL;
	return (arr);
}
