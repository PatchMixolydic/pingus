//  $Id: liquid.hxx,v 1.6 2003/04/19 10:23:19 torangan Exp $
//
//  Pingus - A free Lemmings clone
//  Copyright (C) 1999 Ingo Ruhnke <grumbel@gmx.de>
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

#ifndef HEADER_PINGUS_WORLDOBJS_LIQUID_HXX
#define HEADER_PINGUS_WORLDOBJS_LIQUID_HXX

#include "../sprite.hxx"
#include "../worldobj.hxx"

namespace WorldObjsData {
class LiquidData;
}

namespace WorldObjs {

class Liquid : public WorldObj
{
private:
  WorldObjsData::LiquidData* const data;
  Sprite sur;

public:
  CL_Surface colmap_sur;

  Liquid (const WorldObjsData::LiquidData& data_);
 ~Liquid ();

  float get_z_pos () const;
  void  on_startup();
  void  draw      (GraphicContext& gc);
  void  update();

private:
  Liquid (const Liquid&);
  Liquid& operator= (const Liquid&);
};

} // namespace WorldObjs

#endif

/* EOF */

