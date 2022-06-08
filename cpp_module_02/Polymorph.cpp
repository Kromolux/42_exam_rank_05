/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:54:47 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:55:13 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph(void)
{
	this->name = "Polymorph";
	this->effects = "turned into a critter";
}

Polymorph::~Polymorph(void)
{}

Polymorph *	Polymorph::clone(void) const
{
	return (new Polymorph());
}
