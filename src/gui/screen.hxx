//  $Id: screen.hxx,v 1.3 2003/10/18 12:11:31 grumbel Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 2000 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License
//  as published by the Free Software Foundation; either version 2
//  of the License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

#ifndef HEADER_PINGUS_SCREEN_HXX
#define HEADER_PINGUS_SCREEN_HXX

#include "game_delta.hxx"

class GraphicContext;

namespace Pingus {

/** A interface for screens. A screen is a Pingus 'thing' which gets
    complete controll over the display and input. Examples of
    screens are the PingusMenu or a PingusGameSession */
class Screen
{
private:

public:
  Screen () { }
  virtual ~Screen () {}

  /** Draw this screen @return true if draw was successfull, false if
      frameskip has taken place ('causes a skip of flip_display) */
  virtual bool draw (GraphicContext& gc) =0;

  /** Pass a delta to the screen */
  virtual void update (const GameDelta& delta) =0;

  virtual unsigned int time_till_next_update() { return 0; }

  /** Called once the screen gets activated and becomes the current
      screen */
  virtual void on_startup () {}

  /** Called once the screen gets replaced or poped or shadowed by a
      newly pushed screen */
  virtual void on_shutdown () {}

private:
  Screen (const Screen&);
  Screen& operator= (const Screen&);
};

} // namespace Pingus

#endif

/* EOF */
