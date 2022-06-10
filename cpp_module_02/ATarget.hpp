/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 07:44:48 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/10 14:26:51 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ATARGET_HPP
# define ATARGET_HPP
# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:

		ATarget(void);
		ATarget(std::string const newType);
		ATarget(ATarget const & obj);
		virtual ~ATarget(void);

		ATarget & operator=(ATarget const & rhs);
		
		virtual ATarget *	clone(void) const = 0;
		void				getHitBySpell(ASpell const & spell) const;
	
		std::string	const & getType(void) const;

	protected:

		std::string		type;

	private:

};

#endif