/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:29:30 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/03 13:41:58 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_is_negative(int n)
{
	if (n<0)
	{
		write(1, "N", 1);	
	}
	else
	{
		write(1, "P", 1);
	}
}

int main(void)
{
	ft_is_negative(5);
	return (0);
}
