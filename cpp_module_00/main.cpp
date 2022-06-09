/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:21:50 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 18:07:31 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int	main(void)
{
	Warlock const richard("Richard", "Mistress of Magma");
	richard.introduce();
	//richard.setTitle("const can't be changed"); //does not compile!
	std::cout << richard.getName() << " - " << richard.getTitle() << std::endl << std::endl;

	Warlock oliver("Oliver", "Bringer of Peace");
	oliver.introduce();
	oliver.setTitle("Bringer of violence");
	std::cout << oliver.getName() << " - " << oliver.getTitle() << std::endl << std::endl;

	Warlock* jack = new Warlock("Jack", "the Long");
	jack->introduce();
	jack->setTitle("the Mighty");
	jack->introduce();

	std::cout << std::endl;
	delete jack;

	return (0);
}
