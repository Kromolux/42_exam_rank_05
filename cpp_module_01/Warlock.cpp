/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:16:26 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/09 11:44:54 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(void) {}

Warlock::Warlock(std::string const & newName, std::string const & newTitle) : name(newName), title(newTitle)
{
	std::cout << name << ": This looks like another boring day.\n";
}

Warlock::Warlock(Warlock & obj)
{
	this->name = obj.name;
	this->title = obj.title;
}

Warlock::~Warlock(void)
{
	std::cout << name << ": My job here is done!\n";
	if (this->spellBook.size() > 0)
	{
		std::map<std::string, ASpell *>::iterator it = this->spellBook.begin();
		std::map<std::string, ASpell *>::iterator ite = this->spellBook.end();
		while (it != ite)
		{
			delete it->second;
			it++;
		}
	}
}

Warlock & Warlock::operator=(Warlock const & rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;
	return (*this);
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
	std::cout << name << ": I am " << name << ", " << title << "!\n";
}

void	Warlock::learnSpell(ASpell * spell)
{
	if (spell)
	{
		std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spell->getName());

		if (it == this->spellBook.end())
		{
			this->spellBook[spell->getName()] = spell->clone();
		}
	}
}

void	Warlock::forgetSpell(std::string const & spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spellName);
	if (it != this->spellBook.end())
	{
		delete it->second;
		this->spellBook.erase(it);
	}
}

void	Warlock::launchSpell(std::string const & spellName, ATarget const & target) const
{
	std::map<std::string, ASpell *>::const_iterator it = this->spellBook.find(spellName);
	
	if (it != this->spellBook.end())
		it->second->launch(target);
}
