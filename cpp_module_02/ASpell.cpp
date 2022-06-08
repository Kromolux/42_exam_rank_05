/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:49:32 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 08:51:57 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(void)
{
	this->name = "no name";
	this->effects = "no effects";
}

ASpell::ASpell(std::string const newName, std::string const newEffects)
{
	this->name = newName;
	this->effects = newEffects;
}

ASpell::ASpell(ASpell const & obj)
{
	this->name = obj.name;
	this->effects = obj.effects;
}

ASpell::~ASpell(void)
{
}

ASpell & ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return (*this);
}

void	ASpell::launch(ATarget const & target) const
{
	target.getHitBySpell(*this);
}

std::string	const & ASpell::getName(void) const
{
	return (this->name);
}
std::string	const & ASpell::getEffects(void) const
{
	return (this->effects);
}
