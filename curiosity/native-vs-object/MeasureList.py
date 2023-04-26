import sys
import time

if __name__ == "__main__":

    n = int(sys.argv[1])
    v = list(range(n))

    b = time.time_ns()
    try:
        v.index(n)
    except:
        pass
    a = time.time_ns()

    t = a - b

    print(t)
