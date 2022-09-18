/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:08:58 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/12 08:19:43 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//updated : n-- > 0 を　n > i にした

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	size_t i;
	
	i = 0;
	if (buf1 == NULL && buf2 == NULL)
		return (NULL);
	dest = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (buf1);
}

// int main(void)
// {
// 	char buf[] = "ABCDEFG";
// 	char buf2[] = "123456789";
// 	char buf3[] = "ABCDEFG";
// 	// char c[256] = "42tokyo";

// 	printf("ans;%s\n",(char*)memcpy(buf,buf2,1)); //123DEFG
// 	printf("you;%s\n",(char*)ft_memcpy(buf3,buf2,1)); //123DEFG
// 	// printf("you;%s\n", (char*)ft_memcpy(NULL, NULL, 4));  // 0x0
// 	// printf("ans;%s\n", (char*)memcpy(NULL, NULL, 4));  // 0x0
// 	// printf("you;%s\n", (char*)ft_memcpy( c, NULL, 4));  // segmentation fault
// 	// printf("ans;%s\n", (char*)memcpy( c, NULL, 4));  // segmentation fault
// 	// printf("you;%s\n", (char*)ft_memcpy(NULL, c , 4));  // segmentation fault
// 	// printf("ans;%s\n", (char*)memcpy(NULL, c , 4));  // segmentation fault
// 	return (0);
// }
