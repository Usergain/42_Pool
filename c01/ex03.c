/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:48:48 by marvin            #+#    #+#             */
/*   Updated: 2025/07/13 20:48:48 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div =  a / b;
    *mod = a % b;
}

#include <stdio.h>
int main(void)
{
    int num1 = 2;
    int num2 = 3;
    int *div;
    int *mod;

    ft_div_mod(num1, num2, *div, *div);

    printf("El resultado es *div = %i y cociente *mod = %i ", *div, *mod);

}

