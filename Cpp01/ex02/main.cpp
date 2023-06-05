/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtoia <mtoia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 17:37:28 by mtoia             #+#    #+#             */
/*   Updated: 2023/06/05 17:43:38 by mtoia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "Memory address of the string variable : " << &str << std::endl;
    std::cout << "Memory address held by stringPTR      : " << &stringPTR << std::endl;
    std::cout << "Memory address held by stringREF      : " << &stringREF << std::endl;
    
    std::cout << "Value of the string variable  : " << str << std::endl;
    std::cout << "Value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF : " << stringREF << std::endl;
    return (0); 
}