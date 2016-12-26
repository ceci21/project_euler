def challenge_2():
    num1 = 0
    num2 = 1
    temp = 0
    counter = 0
    totalSum = 0
    while num2 < 4000000:
        temp = num1 + num2
        num1 = num2
        num2 = temp
        if num2 % 2 == 0:
            totalSum += num2
        counter += 1
    print(totalSum)
    
challenge_2()
