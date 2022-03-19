/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:33:25 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 23:35:17 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	na;
	int	r;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	na = 0;
	while (nb > 10)
	{
		na = na * 10 + nb % 10;
		nb /= 10;
	}
	print(nb);
	while (na > 0)
	{
		r = na % 10;
		na /= 10;
		ft_print(r);
	}
}
