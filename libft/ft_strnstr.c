/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 22:03:48 by mtrullar          #+#    #+#             */
/*   Updated: 2024/05/31 15:37:01 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	init(char **str, size_t *i, size_t *j, const char *big)
{
	*i = 0;
	*j = 0;
	*str = (char *)big;
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	init(&str, &i, &j, big);
	if (little[i] == '\0')
		return (str);
	if (len == 0)
		return (NULL);
	while (str[i] && i < len)
	{
		if (str[i] == little[j])
		{
			k = i;
			while (little[j] && (str[k++] == little[j] && i + j < len))
				j++;
			if (little[j] == '\0')
				return (&(str[i]));
		}
		j = 0;
		i++;
	}
	return (NULL);
}
