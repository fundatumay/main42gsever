/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsever <gsever@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 22:10:17 by gsever            #+#    #+#             */
/*   Updated: 2021/12/14 03:29:46 by gsever           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char *ft_print_program_name(int ac, char **av)
{
    
}
int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (ac && av[0][i])
	{
		write(1, &av[0][i++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
