#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int rc;
	printf("Running as pid - %d\n", getpid());
	printf("Removing self - %s\n", argv[0]);
	rc = unlink(argv[0]);
	if(rc == -1) {
		perror("Couldn't unlink file");
	}
	printf("Sleeping for 3600 seconds\n");
	sleep(3600);
	return 0;
}