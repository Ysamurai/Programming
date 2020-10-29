print("Выберите способ ввода параметров треугольника:")
print("1. Длины сторон")
print("2. Координаты вершин")

form = float (input())
if form == 1:
    a = float(input("a: "))
    b = float(input("b: "))
    c = float(input("c: "))
    if a > b + c or b > a + c or c > a + b:
        print ("Треугольника с такими длинами не существует")
    else :
        P = a + b + c
        S = (P * (P - a) * (P - b) * (P - c)) ** 0.5
        print("S =", S)
    

if form == 2:
    xA, yA = map(float, input("Введите вершины A : ").split())
    xB, yB = map(float, input("Введите вершины B : ").split())
    xC, yC = map(float, input("Введите вершины C : ").split())
    AB = ((xB - xA) ** 2 + (yB - yA) ** 2) ** 0.5
    BC = ((xC - xA) ** 2 + (yC - yA) ** 2) ** 0.5
    AC = ((xB - xC) ** 2 + (yB - yC) ** 2) ** 0.5
    if AB > BC + AC or BC > AB + AC or AC > AB + BC:
        print("Треугольника с такими длинами сторон не существует")
    else :
        P = AB + BC + AC
        S = (P * (P - AB) * (P - BC) * (P - AC)) ** 0.5
        print("S =", S)
