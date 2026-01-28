/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:31:29 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 02:45:51 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb, char *str, int len)
{
	char	c;

	if (nb == -2147483648)
	{
		ft_strlcpy(str, "-2147483648", 12);
	}
	else if (nb < 0)
	{
		str[0] = '-';
		ft_putnbr(-nb, str, len);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10, str, len - 1);
		ft_putnbr(nb % 10, str, len);
	}
	else
	{
		c = nb + '0';
		str[len - 1] = c;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		count;
	int		nb;

	nb = n;
	count = 1;
	while (nb >= 10 || nb <= -10)
	{
		nb = nb / 10;
		count++;
	}
	if (nb < 0)
		count++;
	str = (char *)malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	ft_putnbr(n, str, count);
	return (str);
}

// int main(void)
// {
//     printf("%s", ft_itoa(-136));
//     return (0);
// }
