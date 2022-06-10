/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 11:05:23 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/10 14:32:19 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook(void)
{}

SpellBook::~SpellBook(void)
{
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

void	SpellBook::learnSpell(ASpell * spell)
{
	if (spell)
	{
	//this->spellBook.insert(std::pair<std::string, ASpell *>(spell->getName(), spell));
		std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spell->getName());
		if (it == spellBook.end())
			this->spellBook[spell->getName()] = spell->clone();
	}
}

void	SpellBook::forgetSpell(std::string const & spellName)
{
	std::map<std::string, ASpell *>::iterator it = this->spellBook.find(spellName);

	if (it != this->spellBook.end())
	{
		delete it->second;
		this->spellBook.erase(it);
	}
}

ASpell *	SpellBook::createSpell(std::string const & spellName) const
{
	std::map<std::string, ASpell *>::const_iterator it = this->spellBook.find(spellName);

	if (it != this->spellBook.end())
	{
		return (it->second->clone());
	}
	return (NULL);
}


