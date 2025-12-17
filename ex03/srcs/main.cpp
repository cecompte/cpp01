/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 13:30:17 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/17 20:03:50 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;
	
	std::cout << "memory address of var = " << &var << std::endl;
	std::cout << "address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "address held by stringREF = " << &stringREF << std::endl;

	std::cout << "value of var = " << var << std::endl;
	std::cout << "value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF = " << stringREF << std::endl;
}
