import random
a = 1
c = 5
m = 0
i = 1
print("Приветствую тебя загадай число от одного до ста))")
while i <= c:
    if a == 1 or a == 0:
        b = random.randint(0,100)
        print("Как думаете что я загадал)")
    if a == 5:
        d = int(input())
        if d == b:
            print("Да вы экстрасенс!)")
            print("сыграем еще раз? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
        else:
            print ("Вам не повезло я загадал:",b)
            print ("Еще раз? (1-Да)")
            f = int(input())
            if f == 1:
                c = c * 2
                a = 0
    else:
        d = int(input())
        m = m + 1
        if d == b:
            print("Вау! Вы угадали")
            print("Еще раз? (1-Да)")
            if f == 1:
                c = m + 5
                a = 0
        else:
            if d > b:
                print("Слишком высоко")
            else:
                print("Нет побробуй больше))")
    a = a + 1
    i = i + 1