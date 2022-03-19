/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 08:17:53 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/04 08:35:07 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void print(int i, int j)
{
	char c, d;
	int q, r;
	q = i / 10;
	r = i % 10;
	c = q + '0';
	d = r + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ", 1);
	q = j / 10;
	r = j % 10;
	c = q + '0';
	d = r + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, " ,", 2);
}

void ft_print_comb2(void)
{
	int i, j;
	i = 0;
	while( i <= 98)
	{
		j=0;
		while( j <= 99)
		{
			if (i<j)
			{	
				print(i, j);
			}
			j++;
		}
		i++;
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
