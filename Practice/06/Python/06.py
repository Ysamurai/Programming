a = float(input("a:"))
b = float(input("b:"))
c = float(input("c:"))
d = b * b - 4 * a * c
if a == 0:
    print("один корень: ", -c / b)
elif d > 0:
    print("первый корень: ", (-b + (d ** 0.5)) / (2 * a))
    print("второй корень: ", (-b - (d ** 0.5)) / (2 * a))
elif d == 0:
    print("один корень: ", -b / (2 * a))
else:
    print("уравнение не имеет корней ")
