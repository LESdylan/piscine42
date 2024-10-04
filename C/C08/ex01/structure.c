/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 12:32:01 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/22 12:54:54 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct
{
    int x;
    int y;    
} point;


// another instance of the strujhcture
point top = { 15 , 24 };
point btm;
typedef struct
{
    point a;
    point b;
} Box;

Box rect = {6,12,30,20};
// main function that initializes both members of each structure
int main(void)
{
    btm.x = 5;
    btm.y = 8;
    top.x = 15;
    top.y = 24;
    printf( "\npoint x: %d, point y: %d\n", rect.a.x , rect.a.y ); 
    printf( "\ntop x: %d, top y: %d\n" , rect.b.x , rect.b.y );
    return 0;
}