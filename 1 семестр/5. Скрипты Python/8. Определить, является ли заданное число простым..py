def is_simple(num: int) -> str:
    d = 2
    while d ** 2 <= num:
        if num % d == 0:
            return 'Число не простое'
        d += 1
    return 'Число простое'


n = int(input())
print(is_simple(n))
