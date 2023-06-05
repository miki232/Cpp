/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:02:21 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/05 17:06:58 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie* zombieHeap = newZombie("ZombieOnHeap");
    zombieHeap->announce();
    Zombie zombieOnStack("ZombieOnStack");
    zombieOnStack.announce();
    randomChump("Franco");
    delete zombieHeap;
}