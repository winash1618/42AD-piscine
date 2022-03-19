/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 23:54:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 06:13:35 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int i, k;

	i = 0;
	k = 0;
	while(str[i] != '\0')
	{ 
		if ( !(str[i] >= 'A'	&& str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z'))
		{

			k++;
		}
		i++;
	}
	if (i == 0 || k > 0)
	{
		write(1, "d", 1);
		return (1);
	}
	else
	{
		write(1, "e", 1);
		return (0);
	}
}

int main(void)
{
	char *str;

	str = "tot0";
	ft_str_is_alpha(str);
	return (0);
}
