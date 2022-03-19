/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 10:33:13 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 10:49:12 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;
	int k = 0;
	int j = 0;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i] == to_find[j])
		{
			if(to_find[j] == '\0')
			{
				k = 1;
				break;
			}
			i++;
			j++;
		}
		i++;
	}
}

int main(void)
{
	char src [20] = "totofdldfjsldfj";
	char dest[4] = "fdl";

	ft_strcat(dest,src);
	return (0);

}

