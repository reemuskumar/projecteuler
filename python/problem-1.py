# https://projecteuler.net/problem=1

# Summation formula
def sum(n):
    return n * (n+1) // 2

# below 1000 - so decrement 1
n = 1000
n -= 1

# Sum of number divisible by 3 or 5 below 1000
total_sum = (3 * sum(n // 3)) + (5 * sum(n // 5))

# Multiples of 15(3*5) would have been added twice - so subtract it from the total sum
total_sum -= (15 * sum(n // 15))

print(total_sum)
