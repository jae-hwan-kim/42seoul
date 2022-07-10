#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

void time_diff(struct timeval *start, struct timeval *end)
{
    double diff;

    diff = (end->tv_sec - start->tv_sec) * 1000
        + (end->tv_usec - start->tv_usec) / 1000;
    printf("%f\n", diff);
}

void loopFunc(struct timeval *start)
{
    struct timeval end;

    for (int i = 0; i < 10; ++i) {
        usleep(1000 * 200);
        gettimeofday(&end, NULL);
        time_diff(start, &end);
    }
}

int main(void)
{
	struct timeval  start;

	gettimeofday(&start, NULL);
    loopFunc(&start);
	return (0);
}