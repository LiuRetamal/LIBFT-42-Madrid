/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:15:41 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 20:45:06 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = ft_strlen(dest);
	if (size > count)
		size = size - count - 1;
	else
		return (size + ft_strlen(src));
	while (*src != '\0' && size != 0)
	{
		dest[count] = *src;
		src++;
		count++;
		size--;
	}
	dest[count] = '\0';
	return (count + ft_strlen(src));
}

// int main(void)
// {
//     char	dst[10] = "a";
// 	char	src[] = "lorem ipsum dolor sit amet";
//     int     n = 1;
// 	char	dst2[10] = "a";
//     char	src2[] = "lorem ipsum dolor sit amet";
//     int     n2 = 1;

//     printf("%zu: ", strlcat(dst, src, n));
// 	printf("strlcat: %s\n", dst);
//     printf("%zu: ", ft_strlcat(dst2, src2, n2));
// 	printf("ft_strlcat: %s\n", dst2);
// }
