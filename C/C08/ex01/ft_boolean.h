/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 23:55:22 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/22 01:34:38 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
#define LIB_H
#define TRUE 1
#define FALSE 0
#define EVEN_MSG "the message is even"
#define ODD_MSG "the message is odd"
#define SUCCESS "it was a success!"
typedef struct s_bool
{
    int   content;
}t_bool;
void ft_putstr(char *str);
t_bool ft_is_even(int nbr);
#endif