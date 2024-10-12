/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <jegoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 09:29:50 by jegoh             #+#    #+#             */
/*   Updated: 2024/10/12 09:32:18 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void print_line(int x, char start, char middle, char end)
{
    int i;

    ft_putchar(start);
    for (i = 2; i < x; i++)
        ft_putchar(middle);
    if (x > 1)
        ft_putchar(end);
    ft_putchar('\n');
}

void rush(int x, int y)
{
    int i;

    if (x <= 0 || y <= 0)
        return;

    print_line(x, '/', '*', '\\');
    for (i = 2; i < y; i++)
        print_line(x, '*', ' ', '*');
    if (y > 1)
        print_line(x, '\\', '*', '/');
}
