/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:16:38 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 12:06:53 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap clapTrap("Clappy");
    ScavTrap scavTrap("Scavvy");
    FragTrap fragTrap("Fraggy");

    clapTrap.attack("Scavvy");
    scavTrap.takeDamage(20);
    scavTrap.print();
    fragTrap.highFivesGuys();
    fragTrap.attack("Clappy");
    clapTrap.takeDamage(30);
    fragTrap.attack("Scavvy");
    scavTrap.takeDamage(30);
    clapTrap.print();
    scavTrap.print();
    
    return 0;
}