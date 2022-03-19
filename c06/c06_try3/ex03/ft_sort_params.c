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
#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char	**dest, char	**src)
{
	char	*c;

	c = *dest;
	*dest = *src;
	*src = c;
}

int	main(int argc, char	*argv[])
{
	int	i;
	int	j;
	int	count;

	j = 1;
	while (j < argc)
	{
		count = 0;
		i = j;
		while (i < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
				ft_swap(&argv[j], &argv[i]);
			i++;
		}
		while (*argv[j])
		{
			write(1, argv[j], 1);
			argv[j]++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}
