
def fibsum(user_number):
    Fib1 = 0
    Fib2 = 1
    sumFibn = 0
    while(Fib1 < user_number):
            sumFibn += Fib1
            currFib=Fib1
            Fib2=currFib+Fib1
            Fib2=Fib1
        print(sumFibn)

def prime(user_number):
     calcNumb = int(user_number**(0.5))
         for p in range(2, calcNumb)
             if(user_number%p==0)
                    print("Number is not prime.")
                    return 
     print("Number is prime! and divisible by!",p)

def toBinary(user_number):
    binaryN=ln[0,0,0,0,0,0,0]
        for p in range (0 7)
            while(user_number > 0):
              binaryN[p] = user_number%2
              user_number = int(user_number/2)
        print(binaryN)
        
def main():
        user_number = int(input("Please type positive number"))
             fibsum(user_number)
             prime(user_number)
             toBinary(user_number)
        

print("Thank you! Goodbye")
