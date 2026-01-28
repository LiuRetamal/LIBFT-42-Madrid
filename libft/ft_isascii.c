/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 16:28:33 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 01:15:52 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 00 && c <= 127)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int c = 'C';

// 	printf("%d", ft_isascii(c));
// 	return (0);
// }