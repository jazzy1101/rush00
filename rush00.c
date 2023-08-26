/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darambae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 20:17:55 by darambae          #+#    #+#             */
/*   Updated: 2023/08/26 20:44:51 by darambae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c);

void	check_border(int on_col_border, int on_lin_border)
{
	if (on_col_border)
	{
		if (on_lin_border)
			ft_putchar('o');
		else
			ft_putchar('|');
	}
	else
	{
		if (on_lin_border)
			ft_putchar('-');
		else
			ft_putchar(' ');
	} 

int	check_negative(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, 'Only positive input accepted', 28);
		return (1);
	}
	else
		return (0);
}

void	rush(int x, int y)
{
	int	col;
	int	lin;
	
	if(check_negative)
		return ;
		
	lin = 0;
	while(lin < y)
	{
		col = 0;
		while(col < x)
		{
			check_border(col == 0 || col == x - 1, lin == 0 || lin == y - 1);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
	ft_putchar('\n');
}
