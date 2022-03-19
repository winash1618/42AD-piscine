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

char*	ft_strlowcase( char *str)
{
	//write(1, str, 14);
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str = *str + 32;
		}
		//write(1, str, 1);
		str++;
	}
	//write(1, str, 14);
	return str;
}
int is_lower(char str)
{
	//write (1, str, 1);
	return (str >= 'A' && str <= 'Z');
}

int is_upper(char str)
{
	return(str >= 'a' && str <= 'z');
}

char	*ft_strcapitalize(char *str)
{
	//write(1, str, 14);
	str = ft_strlowcase(str);
	//write(1, str, 14);
	*str =*str + 32;
	//write(1, &str[i], 1);
	while (*str != '\0')
	{
		str++;
		//if (!(is_upper(*(str- 1)) || is_lower(*(str-1))))
		if (*(str-1) >= 'a' && *(str-1) <= 'z')
		{
			write(1, str, 1);
			//if (!(is_upper(*str) || is_lower(*str)))
			if (*(str) >= 'a' && *(str) <= 'z')
			{
				
				*str = *str + 32;
				write(1, str, 1);
			}
		}
		//write(1, str[i], 1);
	}
	//write(1, str, 14);
	return str;
}

int main(void)
{
	char str[30]= "dfdHHDFSfjad dflsjdf";
	write(1, &str[0], 1);
	ft_strcapitalize(str);
	write(1, &str[0], 1);
	return (0);
}
