/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 18:58:02 by marvin            #+#    #+#             */
/*   Updated: 2025/07/13 18:58:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_swap(int *a, int *b)
{
    int swap_num;
    
    swap_num = *b;
    *b = *a;
    *a = swap_num;
}
/*
#include <stdio.h>

void main(void)
{
    int nbr1 = 42;
    int nbr2 = 26;

    printf("VALORES INICIALES: nbr1 = %d, nbr2 = %d\n", nbr1, nbr2);

    ft_swap (&nbr1, &nbr2);

    printf("VALORES FINALES: nbr1 = %d, nbr2 = %d\n", nbr1, nbr2);
}
*/