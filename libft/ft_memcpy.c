/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:28:33 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 10:59:30 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pt;
	const char	*pt2;

	pt = (char *)dest;
	pt2 = (const char *)src;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	while (n != 0)
	{
		*pt = *pt2;
		pt++;
		pt2++;
		n--;
	}
	return (dest);
}

// void *ft_memset(void *s, int c, size_t n)
// {
// 	char   *pt;

//     pt = s;
//     while (n > 0)
//     {
//         *pt = c;
//         pt++;
//         n--;
//     }
//     return (s);
// }

// int main(void)
// {
//     char c[5];
//     char i[2];

//     ft_memset(c, 97, 1);
//     ft_memset(i, 2, 1);
//     printf("Antes del memcpy: %i %i\n", c[0], i[0]);
//     ft_memcpy(c, i, 1);
//     printf("Despues del memcpy: %i %i\n", c[0], i[0]);
//     return (0);
// }
