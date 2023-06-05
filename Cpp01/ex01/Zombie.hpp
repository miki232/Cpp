/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:25 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/05 17:33:15 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name;
    
    public:
        void setname(std::string name);
        Zombie();
        ~Zombie(void);    
        void announce(int i);
};

Zombie* newZombie(std::string name);
Zombie* zombieHorde(int N, std::string name);



#endif