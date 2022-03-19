/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:38:55 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/04 19:02:52 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int	*a, int *b)
{
	int temp, temp1;

	temp = a/b;
	temp1 = a%b;
	*a = temp;
	*b = temp1;
}

