/*
 * sideRETRO - A pipeline for detecting Somatic Insertion of DE novo RETROcopies
 * Copyright (C) 2019-2020 Thiago L. A. Miller <tmiller@mochsl.org.br
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DEBRUJIN_H
#define DEBRUJIN_H

#include "list.h"

typedef struct _DeBrujin DeBrujin;

DeBrujin * debrujin_new      (int k);
void       debrujin_free     (DeBrujin *debrujin);
void       debrujin_insert   (DeBrujin *debrujin, const char *seq);
List     * debrujin_assembly (DeBrujin *debrujin);

#endif /* debrujin.h */
