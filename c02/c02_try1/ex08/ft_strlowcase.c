/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 00:28:28 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/07 00:37:11 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strlowcase( char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		str++;
	}
	return str;
}

int main(void)
{
	char str[10] = "tofdffSDFAS";
	ft_strlowcase(str);
	return(0);
}
