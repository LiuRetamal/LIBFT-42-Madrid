/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 19:40:17 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/18 12:46:22 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pt;

	pt = (unsigned char *)s;
	while (n > 0)
	{
		if ((unsigned char)c == *pt)
			return ((void *)pt);
		pt++;
		n--;
	}
	return (NULL);
}

// int main(void)
// {
//     char    a[] = "abc";

//     printf("%s", (char *)ft_memchr(a, 'b', 4));
//     return (0);
// }
