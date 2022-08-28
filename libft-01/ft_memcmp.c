/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:16:05 by rshimaok          #+#    #+#             */
/*   Updated: 2022/08/03 08:02:14 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	i = 0;
	p1 = (unsigned char *)buf1;
	p2 = (unsigned char *)buf2;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;
// 	char	*s3;
// 	char	*s4;

// 	s1 = "AB\0CDE";
// 	s2 = "AB\0CABC";
// 	s3 = "A";
// 	s4 = "AB\0CDE";
// 	printf("you: %d\n", ft_memcmp(s1, s2, 7)); //3
// 	printf("ans: %d\n", memcmp(s1, s2, 7));
// 	printf("you: %d\n", ft_memcmp(s1, s3, 4)); //66('\0' - 'B')
// 	printf("ans: %d\n", memcmp(s1, s3, 4));
// 	printf("you: %d\n", ft_memcmp(s1, s4, 100)); //0
// 	printf("ans: %d\n", memcmp(s1, s4, 100));
// 	printf("you: %d\n", ft_memcmp(s1, s2, 0)); //0
// 	printf("ans: %d\n", memcmp(s1, s2, 0));
// 	printf("you: %d\n", ft_memcmp(s1, "\0", 3)); //65('\0' - 'A')
// 	printf("ans: %d\n", memcmp(s1, "\0", 3));
// 	printf("you: %d\n", ft_memcmp("1", NULL, 3)); //segfo
// 	printf("ans: %d\n", memcmp("1", NULL, 3));
// 	return (0);
// }