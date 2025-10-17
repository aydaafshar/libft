/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayda <ayda@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 23:59:32 by ayda              #+#    #+#             */
/*   Updated: 2025/10/17 14:43:07 by ayda             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	checksign(const char *str, int *sign, int *i)
{
	int	j;

	j = *i;
	if (str[j] == '-' || str[j] == '+')
	{
		if (str[j] == '-')
			*sign = -1;
		j++;
	}
	*i = j;
}

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	res;
	int				sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	checksign(str, &sign, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sign * res);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = "  -2er123ayda";
// 	i = ft_atoi(str);
// 	printf("%d", i);
// 	return (0);
// }
