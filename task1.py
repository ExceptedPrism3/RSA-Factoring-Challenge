import sys
import math

if len(sys.argv) == 2:
    with open(sys.argv[1], 'r') as file_pointer:
        for line in file_pointer:
            n = int(line.strip())
            n = 4
            for y in range(2, n):
                x = math.sqrt(n + math.pow(y, 2))
                if x % 1 == 0:
                    x = int(x)
                    break
            p = x + y
            q = x - y
            print(f"{n}={q}*{p}")
            sys.exit(0)

