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

constexpr temp_entry_t temptable_59[] PROGMEM = {
  { OV(91),   300 },
  { OV(106),  290 },
  { OV(121),  280 },
  { OV(140),  270 },
  { OV(161),  260 },
  { OV(186),  250 },
  { OV(217),  240 },
  { OV(248),  230 },
  { OV(287),  220 },
  { OV(330),  210 },
  { OV(374),  200 },
  { OV(426),  190 },
  { OV(478),  180 },
  { OV(536),  170 },
  { OV(594),  160 },
  { OV(654),  150 },
  { OV(709),  140 },
  { OV(760),  130 },
  { OV(807),  120 },
  { OV(850),  110 },
  { OV(887),  100 },
  { OV(919),   90 },
  { OV(944),   80 },
  { OV(964),   70 },
  { OV(980),   60 },
  { OV(993),   50 },
  { OV(1001),  40 },
  { OV(1007),  30 },
  { OV(1009),  25 },
  { OV(1018),  0 }
};
