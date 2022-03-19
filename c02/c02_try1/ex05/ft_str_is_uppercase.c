/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 06:24:34 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 06:33:43 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int i, k;
	
	i = 0;
	k = 0;
	while(str[i] != '\0')
	{
		if ( !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			k++;
		}
		i++;
	}
	if (i == 0 || k > 0) {
		write(1, "d", 1);
		return(0);
	}
	else
	{
		write(1, "e", 1);
		return(0);
	}	
}

int main(void)
{
	char *str;

	str = "TUOH";
	ft_str_is_uppercase(str);
	return (0);
}
