/*
 * Object-Oriented Programming
 * Copyright (C) 2012 Robert Grimm
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
 * USA.
 */

#include <iostream>

#include "Point.h"

using oop::Point;

int main() {
  const Point p = Point(3,0,4,0);

  std::cout << p.toString() << std::endl;
  std::cout << Point::ORIGIN.getDistanceFrom(p) << std::endl;

  Point p2 = Point(1,2,3,4);
  std::cout << p2.toString() << std::endl;
  p2.setCoordinate(0,100.5);
  std::cout << p2.toString() << std::endl;

  return 0;
}
