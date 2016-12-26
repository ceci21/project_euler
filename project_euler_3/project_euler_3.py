def isPrime(n):
    if n == 1:
        return False
    if n == 2:
        return True
    if n == 3:
        return True
    if n == 4:
        return False
    for k in range(3, n):
        if n % k == 0:
            return False
    return True


def challenge_3():
    # divide number by every digit less than or equal to half of itself
    # for every number that it is being divided into, check if that number
    #   can ever be divided by a number less than half of itself. 
    number = 600851475143
    largestPrime = 0
    for n in range (1, (number // 2)):
        primeness = isPrime(n)
        if primeness == True and number % n == 0:
            largestPrime = n
        print(largestPrime)
    print(largestPrime)


challenge_3()
