/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:21:50 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:42:22 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int	main(void)
{
	Warlock richard("Richard", "the Titled");

	Dummy bob;

	Fwoosh * fwoosh = new Fwoosh();
	
	richard.learnSpell(fwoosh);
	
	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
		richard.learnSpell(fwoosh);
			richard.learnSpell(fwoosh);
				richard.learnSpell(fwoosh);
	richard.launchSpell("Fwoosh", bob);
	//delete fwoosh;
	return (0);
}
