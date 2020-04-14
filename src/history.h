/* Copyright (C) 2000, 2001, 2002, 2003, 2004 Shawn Betts <sabetts@vcn.bc.ca>
 *
 * This file is part of ratpoison.
 *
 * ratpoison is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * ratpoison is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 * Boston, MA 02111-1307 USA
 */

#ifndef _RATPOISON_HISTORY_H
#define _RATPOISON_HISTORY_H 1

enum { hist_NONE=0, hist_COMMAND, hist_SHELLCMD,
	hist_SELECT, hist_KEYMAP, hist_KEY,
	hist_WINDOW, hist_GRAVITY, hist_GROUP,
	hist_HOOK, hist_VARIABLE, hist_PROMPT,
	hist_OTHER,
	/* must be last, do not use, for length only: */
	hist_COUNT};

#ifndef HAVE_GETLINE
ssize_t getline (char **lineptr, size_t *n, FILE *f);
#endif

void  history_load (void);
void  history_save (void);
void  history_reset (void);
void  history_add (int, const char *item);
const char *history_next (int);
const char *history_previous (int);
int   history_expand_line (int, char *string, char **output);

#endif /* ! _RATPOISON_HISTORY_H */
