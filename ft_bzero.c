// #include <stddef.h>
// #include <stdio.h>

void	ft_bzero(void *str, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}
// int	main(void)
// {
// 	char str[] = "ayda khar ast";
// 	ft_bzero(str, 4);
// 	for (int i = 0; i < 13; i++)
// 		printf("%d ", str[i]);
// 	return (0);
// }