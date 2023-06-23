/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 11:29:50 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 11:56:13 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    highFivesGuys(void);
};


#endif