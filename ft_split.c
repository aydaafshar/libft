/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayafshar <ayafshar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 13:10:57 by ayafshar          #+#    #+#             */
/*   Updated: 2025/10/13 17:17:32 by ayafshar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
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

static char	**free_all(char **arr, size_t j)
{
	while (j > 0)
		free(arr[j--]);
	free(arr);
	return (NULL);
}

static char	**fill_array(char **arr, const char *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		arr[j] = ft_substr(s, start, i - start);
		if (!arr[j])
			return (free_all(arr, j));
		j++;
	}
	arr[j] = NULL;
	return (arr);
}

char	**ft_split(const char *s, char c)
{
	char	**arr;

	arr = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr = fill_array(arr, s, c);
	return (arr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	**res;

// 	str = "ayda is gol";
// 	res = ft_split(str, ' ');
// 	for (int i = 0; res[i] != NULL; i++)
// 	{
// 		printf("%s\n", res[i]);
// 	}
// 	for (int i = 0; res[i] != NULL; i++)
// 		free(res[i]);
// 	free(res);
// 	return (0);
// }
