/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:19 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/05 17:35:58 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie(void)
{
    std::cout << name << " is dead" << std::endl;
}

void Zombie::setname(std::string name)
{
    this->name = name;
}

void Zombie::announce(int i)
{
    std::cout << name << " " << i << " BraiiiiiiinnnzzzZ..." << std::endl;
}