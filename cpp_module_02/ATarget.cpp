/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:56:31 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/10 14:25:58 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(void)
{
	this->type = "no type";
}

ATarget::ATarget(std::string const newType) : type(newType)
{
}

ATarget::ATarget(ATarget const & obj)
{
	std::cout << "copy constructor called\n";
	this->type = obj.type;
}

ATarget::~ATarget(void)
{}

ATarget & ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return (*this);
}


void	ATarget::getHitBySpell(ASpell const & spell) const
{
	std::cout << type << " has been " << spell.getEffects() << " !\n";
}

std::string	const & ATarget::getType(void) const
{
	return (this->type);
}
