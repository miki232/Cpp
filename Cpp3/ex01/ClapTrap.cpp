/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:42:53 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 11:59:28 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoints(100), Energy_points(50), Attack_damage(20)
{
    std::cout << "ClapTrap " << this->Name << " is alive" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoints, int energy_points, int attack_damage) : Name(name), Hitpoints(hitpoints), Energy_points(energy_points), Attack_damage(attack_damage)
{
    std::cout << "ClapTrap " << this->Name << " is alive" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->Name << " leave this place and fly with angel " << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->Hitpoints > 0 && this->Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack_damage << " points of damage!" << std::endl;
        this->Energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " have no Energy to attack!" << std::endl;
    
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->Hitpoints > 0)
    {
        std::cout << "ClapTrap " << this->Name << " takes " << amount << " points of damage!" << std::endl;
        this->Hitpoints -= amount;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Hitpoints > 0 && this->Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->Name << " is repaired for " << amount << " points!" << std::endl;
        this->Hitpoints += amount;
        this->Energy_points--;
    }
    else
        std::cout << "ClapTrap " << this->Name << " is already dead!" << std::endl;
}

void    ClapTrap::print()
{
	std::cout << "Name: " << this->Name << std::endl;
	std::cout << "Hit    points: " << this->Hitpoints << std::endl;
	std::cout << "Energy point: " << this->Energy_points << std::endl;
	std::cout << "Attack damage: " << this->Attack_damage << std::endl << std::endl;
}