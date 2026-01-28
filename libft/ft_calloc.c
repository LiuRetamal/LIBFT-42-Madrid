/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lretamal <lretamal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 22:55:26 by lretamal          #+#    #+#             */
/*   Updated: 2025/10/19 20:55:53 by lretamal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (nmemb != 0 && size != 0 && nmemb > INT_MAX / size)
		return (NULL);
	pt = malloc(nmemb * size);
	if (nmemb == 0 || size == 0)
		return (pt);
	if (pt == NULL)
		return (NULL);
	ft_bzero(pt, nmemb * size);
	return (pt);
}
