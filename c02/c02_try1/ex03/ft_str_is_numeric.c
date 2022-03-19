/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 01:27:21 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 06:12:24 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int i, k;

	i = 0;
	k = 0;
	while(str[i] != '\0')
	{
		if ( !(str[i] >= '0' && str[i] <= '9'))
		{
			write( 1, str, 4);
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
		write ( 1, "e", 1);
		return (0);
	}
}

int main(void)
{
	char *str;

	str = "1342";
	ft_str_is_numeric(str);
	return(0);
}
