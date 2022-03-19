/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:46:16 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/04 08:14:55 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void print(int i, int j, int k)
{
	char c, d, e;
	c = i + '0';
	d = j + '0';
	e = k + '0';
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &e, 1);
	write(1, " ,", 2);
}

void ft_print_comb(void)
{
	int c1 = 0, c2 = 0, c3 = 0;
	while(c1 <= 9)
	{ 
		c2 = 0;
		while(c2 <= 9)
		{
			c3 = 0;
			while(c3 <= 9)
			{
				if (c1<c2 && c2<c3)
				{
					print(c1, c2, c3);					
				}
				c3++;
			}
			c2++;
		}
		c1++;
	}
}

int main(void)
{
	ft_print_comb();
	return(0);
}
