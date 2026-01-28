/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 20:08:53 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:23:44 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	len2;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *)malloc((len + len2 + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, len + 1);
	ft_strlcpy(&str[len], s2, len2 + 1);
	return (str);
}

// int main(void)
// {
//    char    a[] = "abc";
//    char    *pt = ft_strjoin("abc", "de");
//    printf ("%s", pt);
//    free(pt);
//    return (0);
// }
