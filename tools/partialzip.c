/**
  * libpartialzip-1.0 - partialzip.c
  * Copyright (C) 2010 David Wang
  *
  * Modified by:
  * Copyright (C) 2010-2013 Joshua Hill
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
 **/

#include <stdio.h>
#include <stdlib.h>

#include <libcrippy-1.0/libcrippy.h>
#include <libpartialzip-1.0/libpartialzip.h>


void download_callback(partialzip_info_t* info, partialzip_cd_file_t* file, size_t progress) {
	print_progress(progress, NULL);
}


void usage() {
	printf("usage: partialzip <zip> <path> <output>\n");
}

int main(int argc, char* argv[]) {
	if(argc != 4) {
		usage();
		return -1;
	}
	int x = partialzip_download_file(argv[1], argv[2], argv[3], (partialzip_progress_callback_t)download_callback);
	if(x < 0) {
		printf("Unable to download file\n");
		return -1;
	}
	return 0;
}
