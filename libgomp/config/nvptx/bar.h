/* Copyright (C) 2015 Free Software Foundation, Inc.

   This file is part of the GNU Offloading and Multi Processing Library
   (libgomp).

   Libgomp is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   Libgomp is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
   FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.

   Under Section 7 of GPL version 3, you are granted additional
   permissions described in the GCC Runtime Library Exception, version
   3.1, as published by the Free Software Foundation.

   You should have received a copy of the GNU General Public License and
   a copy of the GCC Runtime Library Exception along with this program;
   see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
   <http://www.gnu.org/licenses/>.  */

/* This is an NVPTX specific implementation of a barrier synchronization
   mechanism for libgomp.  This type is private to the library.  This
   implementation is a stub, for now.  */

#ifndef GOMP_BARRIER_H
#define GOMP_BARRIER_H 1

typedef struct
{
} gomp_barrier_t;

typedef unsigned int gomp_barrier_state_t;

#endif /* GOMP_BARRIER_H */
