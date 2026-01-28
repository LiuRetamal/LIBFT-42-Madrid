/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:28:33 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 11:01:26 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*pt;
	const char	*pt2;

	pt = (char *)dest;
	pt2 = (const char *)src;
	if (dest == (void *)0 && src == (void *)0)
		return (dest);
	while (n != 0)
	{
		if (pt2 < pt)
			pt[n - 1] = pt2[n - 1];
		else
		{
			*pt = *pt2;
			pt++;
			pt2++;
		}
		n--;
	}
	return (dest);
}

// int main(void)
// {
//     char c[] = "0123456789";

//     ft_memmove(&c[4], &c[0], 5);
//     printf("%s", c);
//     return (0);
// }
