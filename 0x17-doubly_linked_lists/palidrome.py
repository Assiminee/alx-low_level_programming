#!/usr/bin/python3

palindromes = []
for num1 in range(100, 1000):
    for num2 in range(100, 1000):
        prod = num1 * num2
        if str(prod) == str(prod)[::-1]:
            palindromes.append(prod)
print(max(palindromes))
