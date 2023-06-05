/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:13:17 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/05 17:33:03 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Horde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        Horde[i].setname(name);
        Horde[i].announce(i);
    }
    return (Horde);        
}