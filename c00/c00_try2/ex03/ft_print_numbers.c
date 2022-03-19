/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:06:17 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/03 13:19:00 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_numbers(void)
{
	char c = '0';
	while(c<='9')
	{
		write(1, &c, 1);
		c++;
	}
}

int main(void)
{
	ft_print_numbers();
	return (0);
}
