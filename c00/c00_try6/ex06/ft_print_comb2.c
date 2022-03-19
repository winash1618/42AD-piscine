/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:17:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/05 21:01:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(int i, int j)
{
	char	c;
	char	d;

	c = i / 10 + '0';
	d = i % 10 + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	c = j / 10 + '0';
	d = j % 10 + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	if (i != 98 || j != 99)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = 0;
		while (j <= 99)
		{
			if (i < j)
			{	
				print(i, j);
			}
			j++;
		}
		i++;
	}
}
