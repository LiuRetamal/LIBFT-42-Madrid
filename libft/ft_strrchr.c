/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 19:15:31 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:00:45 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if ((unsigned char)c == s[i])
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if ((unsigned char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// int main(void)
// {
//     char a[] = "abcdca";
//     printf("%s", ft_strrchr(a, 'c'));
//     return (0);
// }
