/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:58:11 by rshimaok          #+#    #+#             */
/*   Updated: 2022/08/03 08:32:01 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char test[20] = "abcdefghijk";

// 	printf("you;%s\n", ft_strchr(test, 'j')); // jk
// 	printf("ans;%s\n", strchr(test, 'j'));
// 	printf("you;%s\n", ft_strchr(test, 'r')); // null
// 	printf("ans;%s\n", strchr(test, 'r'));
// 	printf("you;%s\n", ft_strchr(test, '\0')); //
// 	printf("ans;%s\n", strchr(test, '\0'));
// 	printf("you;%s\n", ft_strchr(NULL, 'c')); //segfo
// 	printf("ans;%s\n", strchr(NULL, 'c'));

// 	return (0);
// }