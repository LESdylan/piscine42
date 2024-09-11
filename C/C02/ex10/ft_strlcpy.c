/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:50:42 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/09 19:15:47 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * the `strlcpy`function returns the total length of the string that would have beena copied if there was unlimited space.
 * This might or or might not be equal to the length of the create string actually, depending on wheter there was enough space.
 * This mean that you can call strlcpy() once to find out how much space is required, then allocate it if you do not have enough, and finally call strlcpy()
 * a second time to do the required copy.
 */

