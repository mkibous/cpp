/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkibous <mkibous@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:57:01 by mkibous           #+#    #+#             */
/*   Updated: 2024/12/03 11:03:47 by mkibous          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
// void leak()
// {
//     system("leaks Materia");
// }
int main()
{
    // atexit(leak);
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    ICharacter *bob = new Character("bob");
    AMateria *tmp;
    me->unequip(0);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    AMateria *droped = me->getmateria(0);
    me->unequip(0);
    me->use(0, *bob);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);
    Character test(Character("hehe"));
    Character test2(Character("hehe22"));
    
    test = test2;
    test.equip(tmp);
    test.use(0, test);
    delete droped;
    delete bob;
    delete me;
    delete src;
    return 0;
}