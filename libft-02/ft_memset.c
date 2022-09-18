/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 10:30:14 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 10:20:07 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		dest[i] = c;
		i++;
	}
	return (str);
}

// int	main(void){

// 	char buf[] = "ABCDEFGHIJK";

// 	//先頭から2バイト進めた位置に「１」を3バイト書き込む
// 	ft_memset(buf + 2, '1',3);

// 	//表示
// 	printf("ABCDEFGHIJK:%s\n", buf);

// 	return (0);
// }