/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:28:33 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 03:59:04 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*pt;

	pt = (char *)s;
	while (n > 0)
	{
		*pt = 0;
		pt++;
		n--;
	}
}

// int	main(void)
// {
// 	char c[] = "hola muy buenas";
//     size_t len = 22;

//     ft_bzero(c, 2);
// 	printf("", (unsigned char *)c, len);
// 	return (0);
// }
