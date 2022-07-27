/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:08:58 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/27 09:54:43 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (buf1 == NULL && buf2 == NULL)
		return (NULL);
	dest = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	while (n-- > 0)
	{
		*dest++ = *src++;
	}
	return (buf1);
}

// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char buf2[] = "123456789";
// 	char buf3[] = "ABCDEFG";
// 	char c[256] = "42tokyo";

// 	printf("ans;%s\n",memcpy(buf,buf2,3)); //123DEFG
// 	printf("you;%s\n",ft_memcpy(buf3,buf2,3)); //123DEFG
// 	printf("ans;%p\n", memcpy(NULL, NULL, 4));  // 0x0
// 	printf("you;%p\n", ft_memcpy(NULL, NULL, 4));  // 0x0
// 	printf("ans;%p\n", memcpy( c, NULL, 4));  // segmentation fault
// 	printf("you;%p\n", ft_memcpy( c, NULL, 4));  // segmentation fault
// 	printf("ans;%p\n", memcpy(NULL, c , 4));  // segmentation fault
// 	printf("you;%p\n", ft_memcpy(NULL, c , 4));  // segmentation fault
// 	return (0);
// }
