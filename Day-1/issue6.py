even = {x for x in range(0, 11) if x%2==0}
odd = {x for x in range(1, 10) if x%2!=0}

sum_odd, sum_even = 0, 0

sum_even = sum(even)
sum_odd = sum(odd)

sum = sum_odd + sum_even

print("Sum of the first 10 natural numbers is: ", sum)
print(even)
print(odd)
