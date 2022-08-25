/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:28:35 by manavarr          #+#    #+#             */
/*   Updated: 2022/08/17 17:03:41 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	i;

	i = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		i++;
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		i += ft_putnbr(nb / 10);
		i += ft_putnbr(nb % 10);
	}
	return (i);
}

int	ft_unsigned(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + '0');
		i++;
	}
	else
	{
		i += ft_unsigned(nb / 10);
		i += ft_unsigned(nb % 10);
	}
	return (i);
}
