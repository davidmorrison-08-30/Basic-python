'''Although many languages have function to calcualte the square root of a non-negative number, we still have another
sublime approach to this problem: determining the number of integers in range(a,b+1) (include b) whose square roots 
are also integers (we call these integers square integers). Even binary search is not as fast as this way'''

def square(a,b):
    count = 0
    a = a**(1/2)
    b = b**(1/2)
    if int(a) == a: a = int(a)
    else: a = int(a)+1
    b = int(b)
    return b-a+1
print(square(3,9))
print(square(24,47))
print(square(328224504,926780103))
