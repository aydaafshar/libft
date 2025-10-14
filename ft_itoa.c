/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 10:44:40 by ayda              #+#    #+#             */
/*   Updated: 2025/10/14 12:14:52 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*checkzero(void)
{
	char	*str;

	str = (char *)malloc(2 * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static void	countnum(long num, size_t *count)
{
	while (num != 0)
	{
		num = num / 10;
		(*count)++;
	}
}

static char	*fillarray(char *str, long num, size_t is_neg, size_t count)
{
	str[count + is_neg] = '\0';
	while (count > 0)
	{
		str[count + is_neg - 1] = num % 10 + '0';
		num = num / 10;
		count--;
	}
	if (is_neg)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	count;
	size_t	is_neg;
	char	*str;
	long	num;

	num = (long)n;
	is_neg = 0;
	count = 0;
	if (num == 0)
		return (checkzero());
	if (num < 0)
	{
		is_neg = 1;
		num = -num;
	}
	countnum(num, &count);
	str = (char *)malloc((count + is_neg + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = fillarray(str, num, is_neg, count);
	return (str);
}

// int	main(void)
// {
// 	int		n;
// 	char	*str;

// 	n = 42;
// 	str = ft_itoa(n);
// 	printf("%s", str);
// 	free(str);
// 	return (0);
// }
