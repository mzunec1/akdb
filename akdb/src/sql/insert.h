/**
 * @file insert.h Header file SQL insert command.
 */

/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor Boston, MA 02110-1301,  USA
 */

#ifndef SQL_INSERT
#define SQL_INSERT

#include "../auxi/mempro.h"
#include "../auxi/test.h"
#include "../file/fileio.h"

#include "../auxi/constants.h"
#include "../file/table.h"
#include "drop.h"

AK_header *AK_get_insert_header(int *size, char *tblName, struct list_node *columns);
int AK_insert(char* tableName, struct list_node *columns, struct list_node *values);
TestResult AK_insert_test();

#endif