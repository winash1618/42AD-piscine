/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:15:20 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/05 00:59:16 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_rev_int_tab( int *tab, int size)
{
	int tab2[] = {1,2,3,4,5};
	char c;
	int i = size-1;
	while (i >= 0)
	{
		tab2[size-i] = *(tab + i);
		c = tab2[size-i] + '0';
		write(1,&c, 1);
		i--;	
	}
	c = tab2[0] + '0';
	write(1, &c, 1);
}

int main(void)
{
	int t[] = {1,2,3,4,5};
	int size = 5;
	int *tab;

	tab = t;
	ft_rev_int_tab(tab, size);
	return (0);
}
