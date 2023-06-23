/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:16:38 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 11:28:23 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clap("Clap");
    ScavTrap    scav("Scav");

    clap.attack("Scav");
    scav.takeDamage(20);
    scav.attack("Clap");
    clap.takeDamage(20);
    clap.print();
    scav.print();
    scav.beRepaired(5);
    scav.print();
    scav.guardGate();
}