/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:49:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const & newName, std::string const & newTitle) : name(newName), title(newTitle)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!\n";
}

std::string const & Warlock::getName(void) const
{
	return (this->name);
}

std::string const & Warlock::getTitle(void) const
{
	return (this->title);
}

void	Warlock::setTitle(std::string const & newTitle)
{
	this->title = newTitle;
}

void	Warlock::introduce(void) const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n";
}
