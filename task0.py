import sys
import math

if len(sys.argv) == 2:
    with open(sys.argv[1], 'r') as file_pointer:
        for line in file_pointer:
            n = int(line.strip())
            for y in range(2, n):
                mod = n % y
                if mod == 0:
                    x = int(n // y)
                    break

            print(f"{n}={x}*{y}")
# 4=2*2
# 12=6*2
# 34=17*2
# 128=64*2
# 1024=512*2
# 4958=2479*2
# 1718944270642558716715=343788854128511743343*5
# 1718944270642558716715=343788854128511746048*5
# 9=3*3
# 99=33*3
# 999=333*3
# 9999=3333*3
# 9797973=3265991*3
# 49=7*7
# 239809320265259=15485783*15485773

# real    0m0.009s
# user    0m0.008s
# sys 0m0.001s
