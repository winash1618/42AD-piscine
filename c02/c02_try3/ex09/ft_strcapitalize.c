/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 00:37:54 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 08:51:23 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	
}

int main(void)
{
	char str[30]= "dfdHHDFSfjad dflsjdf";
	write(1, &str[0], 1);
	ft_strcapitalize(str);
	write(1, &str[0], 1);
	return (0);
}
