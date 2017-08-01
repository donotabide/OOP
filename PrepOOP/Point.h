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

/*
#ifndef POINT_H
#define POINT_H
*/

#pragma once

#include <string>

#define DIMENSIONS 4

using std::string;

namespace oop {

  class Point {
    double coordinates[DIMENSIONS];

  public:
    static const Point ORIGIN;

    Point(double c1 = 0, double c2 = 0, double c3 = 0, double c4 = 0);

    double getCoordinate(int i) const;
    void setCoordinate(int i, double c);
    double getDistanceFrom(const Point& p) const;
    string toString() const;
  }; // Do NOT forget the semicolon!!!

}

/*
#endif
*/
