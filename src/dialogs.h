/*
 * Copyright (C) 2008 Alexander Kerner <lunohod@openinkpot.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA.
 */

#ifndef DIALOGS_H_
#define DIALOGS_H_

#include <Evas.h>
#include <Ecore.h>
#include <Ecore_Data.h>
void PreferencesDialog(Evas * e, Evas_Object * obj);
void ZoomEntry(Evas * e, Evas_Object * obj, const char *startval);
void GotoPageEntry(Evas * e, Evas_Object * obj);
void TOCDialog(Evas * e, Evas_Object * obj, Ecore_List * list);
#endif
