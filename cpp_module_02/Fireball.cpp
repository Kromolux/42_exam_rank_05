/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:54:04 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:54:37 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball(void)
{
	this->name = "Fireball";
	this->effects = "burnt to a crisp";
}

Fireball::~Fireball(void)
{}

Fireball *	Fireball::clone(void) const
{
	return (new Fireball());
}
