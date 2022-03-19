/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 23:52:46 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/08 09:26:23 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int isspace(void)
{
	if("\n" || "\v" || "\r" || " " || "\t")
	{
*/

#include <stdio.h>
#include <unistd.h>

void ft_atoi(char *str)
{
	int i;
	int j;
   	int	k;

	i = 0;
	j = 0;
	k = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '-')
		{
			while(!(str[i] >= '0' && str[i] <= '9'))
			{
				if(str[i] == '-')
				{
					k++;
				}
				i++;
			}
			if (k % 2 > 0)
			{
				str[j] = '-';
				j++;
			}
		}
		if (str[i] >='0' && str[i] <= '9')
		{
			str[j] = str[i];
			j++;
			if(!(str[i + 1] >= '0' && str[i+1] <= '9')) 
			{
				while(str[j] != '\0')
				{
					str[j] = '\0';
					j++;
				}
				break;
			}	
		}
		i++;
	}
	printf("%s", str);
}

int main(void)
{
	char str[] = "   ---+---+1234a567 -";
	int i = 0;
	ft_atoi(str);
	return(0);
}
