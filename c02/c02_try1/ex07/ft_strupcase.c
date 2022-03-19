/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 07:05:26 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 08:08:51 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char*	ft_strupcase(char *str)
{
	while (*str != '\0')
	{
		if(*str >= 'a' && *str <= 'z')
		{
			*str = *str - 32;
		}
		write(1, str, 1);
		str++;
	}
	write (1, str, 10);
	return str;
}

int main(void)
{
	char str[10] = "tofd645tA";
	ft_strupcase(str);
	return (0);
}
