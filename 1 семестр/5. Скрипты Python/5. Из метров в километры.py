def m_to_km(m: float):
    if m < 0:
        return 'Расстояние не может быть меньше нуля'
    km = m/1000
    km = int(km) if int(km) == km else km
    return km


meters = float(input('Введите расстояние в метрах: '))
print(m_to_km(meters))
