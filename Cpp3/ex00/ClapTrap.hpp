/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 09:38:51 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 11:59:53 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
    public:
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void    print();
        ClapTrap(std::string name);
        ClapTrap(std::string name, int hitpoints, int energy_points, int attack_damage);
        ~ClapTrap();
};


#endif