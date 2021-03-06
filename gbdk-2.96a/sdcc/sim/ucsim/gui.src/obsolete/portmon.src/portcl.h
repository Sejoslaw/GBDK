/*
 * Simulator of microcontrollers (portcl.h)
 *
 * Copyright (C) 1999,99 Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */
/*@1@*/

#ifndef PORTCL_HEADER
#define PORTCL_HEADER

#include "viewcl.h"
#include "wincl.h"


class cl_port: public cl_view
{
public:
  int id;
  int sfr, pin;
  int curs_x, curs_y;
public:
  cl_port(class cl_box *ipos, int iid, char *iname, class cl_app *iapp);

  virtual int draw(void);
  virtual int handle_event(struct t_event *event);
  int toggle_sfr(int bitnr);
  int toggle_pin(int bitnr);
};

class cl_portw: public cl_win
{
public:
  int id;
public:
  cl_portw(class cl_box *ipos, int iid, char *ititle, class cl_app *iapp);
  virtual class cl_view *mk_intern(class cl_box *ipos);

  virtual int handle_event(struct t_event *event);
};


#endif

/* End of gui.src/portmon.src/portcl.h */
