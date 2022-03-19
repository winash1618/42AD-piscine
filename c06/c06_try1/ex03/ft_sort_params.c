/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:27:06 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/14 10:43:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void sorter (int ac, char *av[])
{
	int i;
	int k;
	char temp[] = "fdhfjdhf";

	i = 0;
	while ( k == 1)
	{
		k = 0;
		while (i < ac)
		{
			if (*av[i] > *av[i-1])
		 	{
				temp = *av[i];
				*av[i] = *av[i + 1];
		   		*av[i + 1] = *av[i];
				k 	= 1;
		 	}	
		 	i++;
		}
	}
	return(av);
}
void ft_sort_params(int ac, char *av[])
{
	int i;

	i = 1;
	sorter(ac, av);
	while (i < ac)
	{
		while (*av[i])
		{
			write(1, av[i], 1);
			av[i]++;
		}
		i++;
	}
}

int main( int ac, char *av[])
{
	ft_sort_params(ac, av);
	return (0);
}
