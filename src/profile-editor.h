/*
 * Copyright © 2002 Havoc Pennington
 * Copyright (C) 2012-2021 MATE Developers
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef TERMINAL_PROFILE_EDITOR_H
#define TERMINAL_PROFILE_EDITOR_H

#include <gtk/gtk.h>

#include "terminal-profile.h"

G_BEGIN_DECLS

void terminal_profile_edit(TerminalProfile *profile,
                           GtkWindow *transient_parent,
                           const char *widget_name);

G_END_DECLS

#endif /* TERMINAL_PROFILE_EDITOR_H */
