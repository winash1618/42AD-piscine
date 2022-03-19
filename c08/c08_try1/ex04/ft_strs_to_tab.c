/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:29:29 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/16 13:56:48 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *str1;
	int i = 1;
	str1 = (struct s_stock_str*) malloc (ac * sizeof (struct s_stock_str));
	while (i<ac - 1)
	{
		(str1+i).size = ft_strlen(av[i]);
		(str1+i).str = av[i];
	   	ft_strcpy((str1+i).copy, av[i]);
		i++;
	}
	if (i == ac)
	{
		(str1 + i).str= 0;
	}
	return (str1);

}
