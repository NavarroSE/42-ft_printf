/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:49:49 by manavarr          #+#    #+#             */
/*   Updated: 2022/08/25 12:44:30 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list arg_ptr, const char format)
{
	unsigned int	len;

	len = 0;
	if (format == 'c')
		len += ft_putchar(va_arg(arg_ptr, int));
	else if (format == 's')
		len += ft_putstr(va_arg(arg_ptr, char *));
	else if (format == 'p')
	{
		len = ft_putstr("0x");
		len += ft_hex("0123456789abcdef", va_arg(arg_ptr, unsigned long));
	}
	else if (format == 'd')
		len += ft_putnbr(va_arg(arg_ptr, int));
	else if (format == 'i')
		len += ft_putnbr(va_arg(arg_ptr, int));
	else if (format == 'u')
		len += ft_unsigned(va_arg(arg_ptr, unsigned int));
	else if (format == 'x')
		len += ft_hex("0123456789abcdef", va_arg(arg_ptr, unsigned int));
	else if (format == 'X')
		len += ft_hex("0123456789ABCDEF", va_arg(arg_ptr, unsigned int));
	else if (format == '%')
		len += ft_print_percent();
	return (len);
}

int	ft_printf(const char *s, ...)
{
	va_list			arg_ptr;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = 0;
	va_start(arg_ptr, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			len += ft_format(arg_ptr, s[i + 1]);
			i++;
		}
		else
			len += ft_putchar(s[i]);
		i++;
	}
	va_end(arg_ptr);
	return (len);
}
