/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:37:11 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/04 10:03:12 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i)
{
	char	c;

	c = i + '0';
	write(1, &c, 1);
}

void	ft_putnbr( int nb )
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
		print (r);
	}
}

int	main(void)
{
	ft_putnbr(5768);
	return (0);
}
