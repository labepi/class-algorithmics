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
    n = int(sys.argv[1])
    v = list(range(n))
    b = time.time_ns()
    search(v, n)
    a = time.time_ns()
    t = a - b
    print(t)
