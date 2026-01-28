/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:28:33 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/18 14:25:56 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*pt;

	pt = (char *)s;
	while (n > 0)
	{
		*pt = c;
		pt++;
		n--;
	}
	return (s);
}

// void	ft_putnbr(int nb)
// {
// 	char	c;

// 	if (nb == -2147483648)
// 	{
// 		write (1, "-2147483648", 11);
// 	}
// 	else if (nb < 0)
// 	{
// 		write (1, "-", 1);
// 		ft_putnbr(-nb);
// 	}
// 	else if (nb >= 10)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	else
// 	{
// 		c = nb + '0';
// 		write (1, &c, 1);
// 	}
// }

// int	main(void)
// {
//     char z[] = "abc";
//     int i[] = {1, 2, 3, 4};
//     int j = 0;
//     char    c;
//     char    *y;

//     c = 0;
//     y = (char *)i;
//     while(j != 16)
//     {
//         // c = y[j] + '0';
//         // write(1, &c, 1);
//         ft_putnbr(z[j]);
//         write(1, ":", 1);
//         j++;
//     }
//     write(1, "\n", 1);
//     ft_memset(&z[0], 5, 5);
//     j = 0;
//     while(j != 16)
//     {
//         //c = y[j] + '0';
//         //write(1, &c, 1);
//         ft_putnbr(z[j]);
//         write(1, ":", 1);
//         j++;
//     }
//     write(1, "\n", 1);
// 	return (0);
// }
