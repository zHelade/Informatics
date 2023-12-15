def c_to_f(c: float):
    answer = (c*9/5)+32
    return answer


a = float(input('Введите температуру по Цельсию: '))
print(c_to_f(a))
