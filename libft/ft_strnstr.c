/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:15:31 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:19:28 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	size_t	len2;

	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		len2 = len;
		while (little[j] == big[i + j] && little[j] != '\0' && len2 > 0)
		{
			len2--;
			j++;
		}
		if (little[j] == '\0')
			return ((char *)&big[i]);
		if (len2 == 0)
			return (NULL);
		len--;
		i++;
	}
	if (little[0] == '\0')
		return ((char *)&big[i]);
	return (NULL);
}

// int	main(void)
// {
// 	char a[] = "abcd";
// 	char b[] = "cd";

// 	printf("%s", ft_strnstr(a, b, 3));
// 	return (0);
// }
