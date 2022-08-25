/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:18:18 by manavarr          #+#    #+#             */
/*   Updated: 2022/08/25 12:43:50 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_hex(const char *str, unsigned long long nb)
{
	int	i;

	i = 0;
	if (nb < 16)
	{
		ft_putchar(str[nb]);
		i++;
	}
	else
	{
		i += ft_hex(str, nb / 16);
		i += ft_hex(str, nb % 16);
	}
	return (i);
}
