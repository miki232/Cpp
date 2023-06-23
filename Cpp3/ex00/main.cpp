/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 10:08:19 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/23 10:48:07 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Totó Riina");
    ClapTrap b("Giovanni Falcone");

    a.attack("Giovanni Falcone");
    a.print();
    b.print();
    b.attack("Totó Riina");
    b.print();
    a.print();
    a.beRepaired(1);
    return 0;
}