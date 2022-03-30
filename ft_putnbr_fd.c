/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbourcy@student.42lausanne.ch              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:33:00 by bbourcy           #+#    #+#             */
/*   Updated: 2021/11/10 17:44:26 by bbourcy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long	bb_inttolong(int n)
{
	unsigned long	nb;

	if (n < 0)
		nb = -((unsigned long)n);
	else
		nb = (unsigned long)n;
	return (nb);
}

static unsigned long	bb_unit10(unsigned long nb)
{
	unsigned long	d;

	d = 1;
	if (nb == 0)
		return (1);
	while (nb)
	{
		d *= 10;
		nb /= 10;
	}
	return (d / 10);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned long	cut;
	unsigned long	nb;
	char			c;

	nb = bb_inttolong(n);
	cut = bb_unit10(nb);
	if (n < 0)
		write(fd, "-", 1);
	while (cut)
	{
		c = '0' + ((nb / cut) % 10);
		cut /= 10;
		write(fd, &c, 1);
	}
}
