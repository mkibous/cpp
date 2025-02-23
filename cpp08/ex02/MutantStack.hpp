/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:12 by mkibous           #+#    #+#             */
/*   Updated: 2025/02/23 18:18:51 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
public:
    typedef typename std::deque<T>::reverse_iterator reverse_iterator;
    typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;
    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
    const_iterator begin() const
    {
        return this->c.begin();
    }
    const_iterator end() const
    {
        return this->c.end();
    }
    reverse_iterator rbegin()
    {
        return this->c.rbegin();
    }
    reverse_iterator rend()
    {
        return this->c.rend();
    }
    const_reverse_iterator rbegin() const
    {
        return this->c.rbegin();
    }
    const_reverse_iterator rend() const
    {
        return this->c.rend();
    }
};
