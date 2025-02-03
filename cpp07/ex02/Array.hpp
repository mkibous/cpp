/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:43:13 by mkibous           #+#    #+#             */
/*   Updated: 2025/01/28 15:56:00 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
    T *arr;
    unsigned int len;

public:
    Array()
    {
        len = 0;
        arr = new T[0];
    }
    Array(unsigned int n)
    {
        len = n;
        arr = new T[n]();
    }
    Array(const Array &src)
    {
        len = src.len;
        arr = new T[len];
        for (unsigned int i = 0; i < len; i++)
        {
            arr[i] = src.arr[i];
        }
    }
    Array &operator=(const Array &oth)
    {
        if (this != &oth)
        {
            delete[] arr;
            len = oth.len;
            arr = new T[len];
            for (unsigned int i = 0; i < len; i++)
            {
                arr[i] = oth.arr[i];
            }
        }
        return *this;
    }
    unsigned int size() const
    {
        return len;
    }
    ~Array()
    {
        delete[] arr;
    }
    T &operator[](unsigned int index) const
    {
        if (index >= len)
            throw std::runtime_error("index is out of bounds");
        return arr[index];
    }
};