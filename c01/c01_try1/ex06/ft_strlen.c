/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 23:02:12 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/04 23:14:10 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	c = i + '0';
	write(1, &c, 1);
	return (i);
}

int main(void)
{
	char *str;

	str = "toto";
	ft_strlen(str);
	return (0);
}
