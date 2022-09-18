/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:16:56 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 10:16:56 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;

	if (!s1 && !s2)
	{
		dest = (char *)ft_calloc(1, sizeof(char));
		return (dest);
	}
	else if (!s1 && s2)
		dest = ft_strdup(s2);
	else if (s1 && !s2)
		dest = ft_strdup(s1);
	else
	{
		dest = ft_strdup(s1);
		if (!dest)
			return (NULL);
		ft_strlcat(dest, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	}
	return (dest);
}

//int	main(void)
//{
//	char *str1 = "ABC";
//	char *str2 = "DEF";
//	char *str3 = NULL;
//	char *new;

//	new = ft_strjoin(str1, str2); // ABCDEF
//	printf("%s\n", new);
//	free(new);
//	new = ft_strjoin(str3, str2); // DEF : s1 is NULL
//	printf("%s\n", new);
//	free(new);
//	new = ft_strjoin(str1, str3); // ABC : s2 is NULL
//	printf("%s\n", new);
//	free(new);
//	new = ft_strjoin(str3, str3); //    : s1 & s2 are NULL
//	printf("%s\n", new);
//	free(new);
//	return (0);
//}