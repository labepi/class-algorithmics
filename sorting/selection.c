#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int m;
    m = *a;
    *a = *b;
    *b = m;
}

void selection_sort(int *v, unsigned int n)
{
    unsigned int i, j;
    int m;

    for (i = 0; i < (n - 1); i++)
    {
        m = i;
        for (j = (i + 1); j < n; j++)
        {
            if (v[m] > v[j])
                m = j;
        }
        swap(&v[m], &v[i]);
    }
}

int main(int argc, char **argv)
{
    struct timespec a, b;
    unsigned int t, n;
    int i, *v;

    n = atoi(argv[1]);
    v = (int *) malloc(n * sizeof(int));
    srand(time(NULL));
    for (i = 0; i < n; i++)
        v[i] = rand();

    clock_gettime(CLOCK_MONOTONIC, &b);
    selection_sort(v, n);
    clock_gettime(CLOCK_MONOTONIC, &a);

    t = (a.tv_sec * 1e9 + a.tv_nsec) - (b.tv_sec * 1e9 + b.tv_nsec);

    printf("%u\n", t);

    free(v);

    return 0;
}

