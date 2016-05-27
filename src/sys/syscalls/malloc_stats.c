/* Copyright 2011-2016 Tyler Gilbert; 
 * This file is part of Stratify OS.
 *
 * Stratify OS is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Stratify OS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Stratify OS.  If not, see <http://www.gnu.org/licenses/>.
 * 
 * 
 */

#include "config.h"
#include <stdio.h>
#include <malloc.h>

void malloc_stats(){
	_malloc_stats_r(_REENT);
}

void _malloc_stats_r(struct _reent * reent_ptr){
	struct mallinfo mi;
	mi = _mallinfo_r(reent_ptr);
	iprintf("Total Malloc Memory %d bytes\n", mi.arena);
	iprintf("Total Free Chunks %d\n", mi.ordblks);
	iprintf("Total Free Memory %d bytes\n", mi.fordblks);
	iprintf("Total Used Memory %d bytes\n", mi.uordblks);
}

