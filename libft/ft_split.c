/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 14:08:01 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 21:52:32 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wrd_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

void	ft_free_split(int wrd, char **str)
{
	while (wrd > 0)
	{
		str--;
		free(*str);
		wrd--;
	}
	free(str);
}

char	*ft_new_wrd(int j, int wrd, char const *s, char **str)
{
	char	*str2;

	str2 = (char *)malloc((j + 1) * sizeof(char));
	if (!str2)
	{
		ft_free_split(wrd, str);
		return (NULL);
	}
	ft_strlcpy(str2, s - j, j + 1);
	return (str2);
}

char	**ft_splitted(char const *s, char c, int count, char **str)
{
	int	wrd;
	int	j;

	wrd = 0;
	while (count-- > 0)
	{
		j = 0;
		while (*s == c)
			s++;
		while (*s != '\0' && *s != c)
		{
			s++;
			j++;
		}
		*str = ft_new_wrd(j, wrd, s, str);
		if (!(*str))
			return (NULL);
		str++;
		wrd++;
	}
	*str = NULL;
	return (str - wrd);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (NULL);
	count = ft_wrd_count(s, c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (ft_splitted(s, c, count, str));
}

// int main(void)
// {
//     char    **split;

//     split = ft_split("Hola a Mundi", ' ');
//     while (*split)
//     {
//         printf("%s\n", *split);
//         split++;
//     }
//     return (0);
// }
