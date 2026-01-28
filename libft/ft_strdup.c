/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 18:29:09 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/13 19:49:40 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

// int main(void)
// {
//     char    *pt = ft_strdup("ab");
//     char    *pt2 = strdup("ab");

//     printf("%s\n", pt);
//     printf("%s", pt2);
//     free(pt);
//     free(pt2);
//     return (0);
// }
