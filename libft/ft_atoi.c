/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:41:44 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:08:12 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;
	int	sig;

	i = 0;
	res = 0;
	sig = 1;
	while ((nptr[i] == ' ' ) || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
		{
			sig = sig * -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return ((sig * res));
}

// int main(void)
// {
// 	printf("ft_atoi: %d\n", ft_atoi(" -+12"));
// 	return (0);
// }
