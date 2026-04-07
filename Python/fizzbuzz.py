def fizzbuzz(n):
    list = []

    for i in range(1, n + 1):

        if i % 5 == 0 and i % 3 == 0:
            list.append("FizzBuzz")
        elif i % 5 == 0:
            list.append("Buzz")
        elif i % 3 == 0:
            list.append("Fizz")
        else:
            list.append(str(i))

    return list

if __name__ == "__main__":
    
    try:
        n = int(input("Type any number: "))
    except KeyboardInterrupt:
        print("[-] Exiting !")
    
    list = fizzbuzz(n)
    print(' '.join(list))
