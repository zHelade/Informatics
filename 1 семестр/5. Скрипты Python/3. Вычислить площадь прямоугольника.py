def square(t: tuple):
    if t[0] < 0 or t[1] < 0:
        return 'Сторона не может иметь отрицательне значение'
    answer = t[0]*t[1]
    answer = int(answer) if int(answer) == answer else answer
    return answer


a = tuple(map(float, input("Введите стороны прямоугольника через пробел: ").split()))
print(square(a))
