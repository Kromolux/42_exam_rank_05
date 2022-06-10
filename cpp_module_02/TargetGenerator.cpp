/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:12:24 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/10 14:39:38 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(void)
{
}

TargetGenerator::~TargetGenerator(void)
{
	if (this->targets.size() > 0)
	{
		std::map<std::string, ATarget *>::iterator it = this->targets.begin();
		std::map<std::string, ATarget *>::iterator ite = this->targets.end();
		while (it != ite)
		{
			delete it->second;
			it++;
		}
	}
}

void	TargetGenerator::learnTargetType(ATarget * target)
{
	if (target)
	{
		std::map<std::string, ATarget *>::iterator it = this->targets.find(target->getType());
		if (it == targets.end())
		this->targets[target->getType()] = target->clone();
	}
}

void	TargetGenerator::forgetTargetType(std::string const & targetName)
{
	std::map<std::string, ATarget *>::iterator it = this->targets.find(targetName);

	if (it != this->targets.end())
	{
		delete it->second;
		this->targets.erase(it);
	}
}

ATarget *	TargetGenerator::createTarget(std::string const & targetName)
{
	std::map<std::string, ATarget *>::iterator it = this->targets.find(targetName);

	if (it != this->targets.end())
	{
		return (it->second->clone());
	}
	return (NULL);
}
