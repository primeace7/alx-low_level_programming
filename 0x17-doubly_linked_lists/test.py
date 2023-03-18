#!/usr/bin/python3

for a in range(999, 99, -1):
     for b in range(999, 99, -1):
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
     if check:
          break
if not check:
     print('There\'s no such number')
