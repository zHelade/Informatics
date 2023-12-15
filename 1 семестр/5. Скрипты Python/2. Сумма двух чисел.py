a = map(float, input("Введите два числа через пробел: ").split())
answer = sum(a)
answer = int(answer) if int(answer) == answer else answer
print(answer)
