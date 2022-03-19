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

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;
	int		j;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(i + 1);
	j = 0;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	s_stock_str *str1;
	int i = 1;
	str1 = (s_stock_str*) malloc ((ac+1) * sizeof (s_stock_str));
	while (i < ac)
	{
		*(str1+i).size = ft_strlen(av[i]);
		*(str1+i).str = av[i];
	   	ft_strdup(*(str1+i).copy, av[i]);
		i++;
	}
	if (i == ac)
	{
		*(str1 + i).str = NULL;
		*(str1 + i).size = 0;
		*(str1 + i).copy = NULL;
		return (str1)
	}
	return (str1);

}
