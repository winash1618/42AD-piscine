/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:32:59 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/03 10:20:01 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
	char c = 'z';
	while (c >= 'a')
	{
		write(1, &c, 1);
		c--;
	}
}

int main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
