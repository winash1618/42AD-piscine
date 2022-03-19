/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:29:33 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/05 05:55:39 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i, j = 1, temp = 0; 
	while ( j != 0)
	{
		write(1, "r", 1);
		j = 0;
		i = 0;
		while ( i < size-1)
		{
			if (*(tab + i) > *(tab + i + 1))
			{
			 	temp = *(tab + i);
			 	*(tab + i) = *(tab + i + 1);
			 	*(tab + i + 1) = temp;
			 	j++;
			}
			i++;
		}
	}
	i=0;
	char c;
	while (i < size)
	{
		c = *(tab + i) + '0';
		write(1, &c, 1);
		i++;
	}
}

int main(void)
{
	int t[] = {3, 2, 8, 4, 5};
	int size = 5;
	int *tab;
	
	tab = t;
	ft_sort_int_tab(tab, size);
	return (0);
}
