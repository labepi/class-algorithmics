import sys
import time

def search(v, k):
    n = len(v)
    while (n > 0):
        n = n - 1
        if v[n] == k:
            return n
    return -1

if __name__ == "__main__":

    v = list(range(int(sys.argv[1])))

    b = time.time_ns()
    search(v, -1)
    a = time.time_ns()

    t = a - b

    print(t)
