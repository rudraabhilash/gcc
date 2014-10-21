// { dg-options "-std=gnu++11" }

// Copyright (C) 2008-2014 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <algorithm>
#include <functional>
#include <testsuite_hooks.h>

void test01()
{
  bool test __attribute__((unused)) = true;

  const int& x = std::max({1, 3, 2});
  const int& y = std::max({4, 3, 2});
  const int& z = std::max({3, 2, 4});
  VERIFY( x == 3 );
  VERIFY( y == 4 );
  VERIFY( z == 4 );

  const int& xc = std::max({1, 2, 3}, std::greater<int>());
  const int& yc = std::max({4, 3, 2}, std::greater<int>());
  const int& zc = std::max({2, 4, 3}, std::greater<int>());
  VERIFY( xc == 1 );
  VERIFY( yc == 2 );
  VERIFY( zc == 2 );
}

int main()
{
  test01();
  return 0;
}
