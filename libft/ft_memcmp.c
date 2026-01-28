/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 20:00:34 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 18:11:16 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*pt;
	unsigned char	*pt2;
	size_t			i;

	pt = (unsigned char *)s1;
	pt2 = (unsigned char *)s2;
	i = 0;
	while (n > 0)
	{
		while (i < n)
		{
			if ((unsigned char)pt[i] != (unsigned char)pt2[i])
				return ((unsigned char)pt[i] - (unsigned char)pt2[i]);
			i++;
		}
		n--;
	}
	return (0);
}

// int main(void)
// {
//     char a[]= "cbcd";
//     char b[]= "abcd";
//     printf("%i \n", memcmp(a, b, 4));
//     printf("%i", ft_memcmp(a, b, 4));
//     return (0);
// }
