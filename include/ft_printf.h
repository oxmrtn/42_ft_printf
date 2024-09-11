/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrullar <mtrullar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:55:12 by mtrullar          #+#    #+#             */
/*   Updated: 2024/06/20 16:38:47 by mtrullar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include "../libft/libft.h"

void	ft_putnbr_base(int nbr, char *base, int *total);

int		ft_putchar_int(char c, int fd);

int		ft_putstr_int(char *s, int fd);

void	ft_putnbr_int(int nbr, int fd, int *tot);

void	ft_putnbr_unsigned(unsigned int nbr, int fd, int *tot);

void	ft_getaddress(void *ptr, int *counter);

int		ft_printf(const char *src, ...);

#endif