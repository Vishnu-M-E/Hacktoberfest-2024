even = {x: x+2 for x in range(0, 11, 2)}
odd = {x: x+2 for x in range(1, 10, 2)}

sum_odd, sum_even = 0, 0

for i in even.keys():
    sum_even += i
for j in odd.keys():
    sum_odd += j

sum = sum_odd + sum_even

print("Sum of the first 10 natural numbers is: ", sum)
print(even)
print(odd)
