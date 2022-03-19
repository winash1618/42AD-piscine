/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 06:14:49 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 06:23:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int i, k;
	
	i = 0;
	k = 0;
	while(str[i] != '\0')
	{
		if ( !(str[i] >= 'a' && str[i] <= 'z'))
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

	str = "toto";
	ft_str_is_lowercase(str);
	return (0);
}
