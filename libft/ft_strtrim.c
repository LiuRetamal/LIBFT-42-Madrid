/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:09:07 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:48:50 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len - 1]) && len > 0)
		len--;
	if (len > 0)
	{
		while (ft_strchr(set, s1[i]))
			i++;
	}
	str = (char *)malloc((len - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], len - i + 1);
	return (str);
}
