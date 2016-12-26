def challenge_1():
    sum = 0
    for n in range(0, 1000, 1):
        if n % 15 == 0:
            sum = sum + n
        elif n % 5 == 0:
            sum = sum + n
        elif n % 3 == 0:
            sum = sum + n
    print(sum)

challenge_1()
