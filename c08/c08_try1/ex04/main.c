/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaruvan <mkaruvan@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:10:17 by mkaruvan          #+#    #+#             */
/*   Updated: 2021/11/16 13:27:08 by mkaruvan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);
int main(int ac, char **av[])
{

	char str = ft_strs_to_tab(int ac, char &*av);
	ft_show_tab(str);
	return (0);
}
