/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:15:59 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:05:27 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i + 1 < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(void)
// {
// 	char	*s1 = "piñas";
// 	char	*s2 = "mango";
//     int     n1 = 2;
//     char	*s11 = "";
// 	char	*s22 = "";
//     int     n2 = 2;
//     printf("strncmp: %d\n", strncmp(s1, s2, 2));
// 	printf("ft_strncmp: %d\n", ft_strncmp(s11, s22, 2));

// 	// printf("strncmp: %d\n", strncmp("piñas", "mango", 2));
// 	// printf("ft_strncmp: %d\n", ft_strncmp("piñas", "mango", 2));
// }
