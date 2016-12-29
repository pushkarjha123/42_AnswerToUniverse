import math
number=input()
series=math.factorial(number)+3**number-number
print (series%(10**9+7))  