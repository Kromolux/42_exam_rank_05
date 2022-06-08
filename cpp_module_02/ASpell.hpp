/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:32:22 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:15:47 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ASPELL_HPP
# define ASPELL_HPP
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:

		ASpell(void);
		ASpell(std::string const newName, std::string const newEffects);
		ASpell(ASpell const & obj);
		virtual ~ASpell(void);

		ASpell & operator=(ASpell const & rhs);
		
		virtual ASpell *	clone(void) const = 0;
		void				launch(ATarget const & target) const;
	
		std::string	const & getName(void) const;
		std::string	const & getEffects(void) const;

	protected:

		std::string		name;
		std::string		effects;

	private:

};

#endif