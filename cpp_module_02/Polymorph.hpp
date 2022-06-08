/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:53:19 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:53:46 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP
# include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
	
		Polymorph(void);
		~Polymorph(void);
		
		Polymorph *	clone(void) const;

	protected:

	private:
	
};

#endif