/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 08:04:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/17 21:56:32 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(int ac, char *av[])
{
	ac = ac - 1;
	while (ac > 0)
	{
		while (*av[ac])
		{
			write (1, av[ac], 1);
			av[ac]++;
		}
		write (1, "\n", 1);
		ac--;
	}
}

int	main(int ac, char *av[])
{
	ft_rev_params(ac, av);
	return (0);
}
