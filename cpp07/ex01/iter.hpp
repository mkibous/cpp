/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:00:09 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/13 18:27:30 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
template <typename T>
void iter(T *arr, int len, void func(T &))
{
    int i = 0;
    while (i < len)
    {
        func(arr[i]);
        i++;
    }
}