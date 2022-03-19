/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:06:16 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/03 09:29:38 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_alphabet(void)
{
	char c = 'a';
	while(c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
int main(void)
{
	ft_print_alphabet();
	return(0);
}
