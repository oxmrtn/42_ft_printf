/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 15:51:10 by mtrullar          #+#    #+#             */
/*   Updated: 2024/05/28 15:45:41 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*tmp;

	if (!dest && !src)
		return (NULL);
	tmp = (unsigned char *)src;
	str = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		str[i] = tmp[i];
		i++;
	}
	return (str);
}
