/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 21:31:14 by mtrullar          #+#    #+#             */
/*   Updated: 2024/05/31 17:10:49 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*src;
	const char	c_char = (char)c;
	size_t		i;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if (src[i] == c_char)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
