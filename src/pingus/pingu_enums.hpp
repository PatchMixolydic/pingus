// Pingus - A free Lemmings clone
// Copyright (C) 1999 Ingo Ruhnke <grumbel@gmail.com>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef HEADER_PINGUS_PINGUS_PINGU_ENUMS_HPP
#define HEADER_PINGUS_PINGUS_PINGU_ENUMS_HPP

// Pingu "globals".  Make [DEADLY_VELOCITY = 20 * sqrt("normal gravity")] so
// that the "deadly distance" is the same and therefore doesn't break levels.
constexpr float DEADLY_VELOCITY   = 10.4f;
constexpr float TERMINAL_VELOCITY = 11.0f;
constexpr int   PINGU_HEIGHT      = 26;
constexpr float BECOME_ANGEL_CHANCE = 0.25; // for death actions

#endif

/* EOF */
