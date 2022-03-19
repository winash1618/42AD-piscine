/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 06:34:19 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/06 07:00:50 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>

int    ft_str_is_printable(char *str)
{
    int i, k;

    i = 0;
    k = 0;
    while(str[i] != '\0')
    {
        if ( !(str[i] >= 32 && str[i] <= 127  ))
        {
            k++;
        }
        i++;
    }
    if ( i==0 || k > 0)
    {
        write(1, "d", 1);
        return(0);
    }
    else
    {
        write(1, "e", 1);
        return(1);
    }
}

int main(void)
{
    char str[] = "hdfl(76E6wq9";
    ft_str_is_printable(str);
    return (0);
}