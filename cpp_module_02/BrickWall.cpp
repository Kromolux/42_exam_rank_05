/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkaufman <rkaufman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 10:56:08 by rkaufman          #+#    #+#             */
/*   Updated: 2022/06/08 10:56:31 by rkaufman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall(void)
{
	this->type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall(void)
{
}

BrickWall *	BrickWall::clone(void) const
{
	return (new BrickWall());
}
