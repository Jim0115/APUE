#include "apue.h"

int main(void) {
	off_t offset;
	if ((offset = lseek(STDIN_FILENO, 0, SEEK_CUR)) == -1) {
		printf("cannot seek\n");
	} else {
		printf("seek OK, offset is %ld\n", offset);
	}
	return 0;
}
