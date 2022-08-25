/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:19:42 by manavarr          #+#    #+#             */
/*   Updated: 2022/08/25 12:45:55 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

int				ft_printf(const char *s, ...);
int				ft_format(va_list arg_ptr, const char format);
int				ft_putchar(int c);
int				ft_putstr(char *s);
int				ft_print_percent(void);
unsigned int	ft_hex(const char *str, unsigned long long nb);
int				ft_putnbr(int nb);
int				ft_unsigned(unsigned int nb);

#endif
