//  $Id: action_button.hxx,v 1.17 2003/04/19 10:23:17 torangan Exp $
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

#ifndef HEADER_PINGUS_ACTION_BUTTON_HXX
#define HEADER_PINGUS_ACTION_BUTTON_HXX

#include <ClanLib/Display/Display/surface.h>
#include <string>
#include "pingu_enums.hxx"
#include "sprite.hxx"
#include "gui/component.hxx"

using Actions::ActionName;

class TrueServer;
class ActionHolder;
class CL_Font;
class Vector;

/** ArmageddonButton, press it to start the armageddon and to turn all
    pingus into bomber

    \sa Client */
class ArmageddonButton : public GUI::Component
{
private:
  TrueServer* server;
  int   x_pos;
  int   y_pos;
  bool  pressed;
  float press_time;
  Sprite     sprite;
  CL_Surface background;
  CL_Surface backgroundhl;

  friend class ButtonPanel;
public:
  ArmageddonButton(TrueServer*, int x, int y);
  virtual ~ArmageddonButton();

  void draw(GraphicContext& gc);
  void update(float);
  bool is_at(int x, int y);
  void on_primary_button_click (int x, int y);

private:
  ArmageddonButton (const ArmageddonButton&);
  ArmageddonButton& operator= (const ArmageddonButton&);
};

// ----------------- snip --------------------

/** Fast Forward button, press it to let the game run faster, press it
    again to return to normal speed

    \sa Client */
class ForwardButton : public GUI::Component
{
private:
  TrueServer* server;
  int x_pos;
  int y_pos;
  CL_Surface surface;
  CL_Surface background;
  CL_Surface backgroundhl;
  friend class ButtonPanel;
public:
  ForwardButton(TrueServer*, int x, int y);
  virtual ~ForwardButton();

  void draw(GraphicContext& gc);
  bool is_at (int x, int y);
  void on_primary_button_click (int x, int y);

private:
  ForwardButton (const ForwardButton&);
  ForwardButton& operator= (const ForwardButton&);
};

// ----------------- snip --------------------

/** Pause button, press it to pause the game, press it again to
    continue

    \sa Client */
class PauseButton : public GUI::Component
{
private:
  TrueServer* server;
  int x_pos;
  int y_pos;
  CL_Surface surface;
  CL_Surface background;
  CL_Surface backgroundhl;
  friend class ButtonPanel;
public:
  PauseButton(TrueServer*, int x, int y);
  virtual ~PauseButton();

  void draw(GraphicContext& gc);
  bool is_at (int x, int y);
  void on_primary_button_click (int x, int y);

private:
  PauseButton (const PauseButton&);
  PauseButton& operator= (const PauseButton&);
};

// ----------------- snip --------------------

/** The button class manage a simple button for the button_panel. It
    keeps his position, his surfaces and his font. */
class ActionButton : public GUI::Component
{
protected:
  Sprite sprite;
  int x_pos;
  int y_pos;
  CL_Font*    font;
  // Added for printing action names next to the button.
  CL_Font*    font_b;

  ActionName name;
  bool is_multi_direct;

  ActionHolder* action_holder;

public:
  bool pressed;

  ActionButton(ActionHolder*);
  virtual ~ActionButton();

  void init(int x, int y, ActionName name_, int owner_id);

  /// Not used.
  void update(float delta);

  /// Returns the name of the action the button represents.
  ActionName get_action_name();

  /// Returns true if the button is pressed.
  bool   is_pressed();

  virtual bool   is_at(int x, int y) = 0;

private:
  ActionButton (const ActionButton&);
  ActionButton& operator= (const ActionButton&);
};

// ----------------- snip --------------------

/** Button which represents an action, one you click it the current
    action will be set to the action represented by the button.

    \sa Client */
class VerticalActionButton : public ActionButton
{
private:
  CL_Surface background;
  CL_Surface backgroundhl;

public:
  VerticalActionButton(ActionHolder* h, int x, int y, ActionName name, int owner_id);
  virtual ~VerticalActionButton();

  void draw(GraphicContext& gc);
  bool is_at (int x, int y);

private:
  VerticalActionButton (const VerticalActionButton&);
  VerticalActionButton& operator= (const VerticalActionButton&);
};

#endif /* ACTIONBUTTON */

/* EOF */
