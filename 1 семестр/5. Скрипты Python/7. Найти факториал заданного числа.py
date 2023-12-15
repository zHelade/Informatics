n = int(input())
answer = 1
if n != 0:
    for i in range(1, n+1):
        answer *= i
else:
    answer = 0
print(answer)
