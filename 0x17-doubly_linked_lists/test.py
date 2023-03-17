#!/usr/bin/python3
a, b = 999, 999
while b > 0:
     product = a * b
     prod_str = str(product)
     mid = len(prod_str)//2
     check = True
     i = 0
     while check and i <= mid:
         if prod_str[i] == prod_str[len(prod_str) - 1 - i]:
                     i += 1
         else:
              check = False
              break
     if check:
             print(f'required num: {b}, {a} * {b} = {a*b}')
             break
     b -= 1
if not check:
     print('There\'s no such number')
