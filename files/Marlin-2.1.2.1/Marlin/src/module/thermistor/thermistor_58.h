/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, 1 kOhm pull-up

constexpr temp_entry_t temptable_58[] PROGMEM = {
  { OV(675),  110 },
  { OV(775),  100 },
  { OV(847),   90 },
  { OV(899),   80 },
  { OV(939),   70 },
  { OV(964),   60 },
  { OV(984),   50 },
  { OV(1000),  40 },
  { OV(1008),  30 },
  { OV(1014),  20 },
  { OV(1018),   0 }
};
