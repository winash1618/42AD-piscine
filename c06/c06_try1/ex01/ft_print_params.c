/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 07:58:34 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/14 08:03:38 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;

	i = 1;
	while (i < ac)
	{
		while(*av[i])
		{
			write(1, av[i], 1);
			av[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
