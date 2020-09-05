from math import ceil
import sys
input = sys.stdin.readline
min, max = map(int, input().split())
list =[i**2 for i in range(2, 1000001)] # 제곱 수로 나눠지는지 확인
sample = [1 for i in range(min, max + 1)] # validation list
result = 0

for i in list:
    if (min // i) * i < min: 
        num = (min // i + 1) * i - min
    else: 
        num = ceil(min / i) * i - min
    # 거듭제곱으로 나눠지고 min을 넘는 수를 찾아 min으로 나누어 sample에 맞는 index에 넣어줍니다.
    while num <= max - min:
        sample[num] = 0
        num += i
    # 거듭제곱만큼 건너뛰어서 sample value를 0으로 만들어줍니다. 

for i in sample: # 결과값 확인!
    if i == 1:
        result += 1
print(result)    