even = {x: 2*x for x in range(1, 6)}
odd = {x: 2*x+1 for x in range(0, 5)}

sum_odd, sum_even = 0, 0

for i in even.keys():
	sum_even += even[i]
for j in odd.keys():
	sum_odd += odd[j]

sum = sum_odd + sum_even

print("Sum of the first 10 natural numbers is: ", sum)
print(even)
print(odd)
