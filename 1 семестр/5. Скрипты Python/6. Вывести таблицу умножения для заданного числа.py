n = int(input())
d = 1
answer = []
while d ** 2 <= n:
    if n % d == 0:
        answer.append((d, n // d))
    d += 1

for i in answer:
    print(i[0], i[1])  # Не знаю как оформить вывод
