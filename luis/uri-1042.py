import fileinput
numbers = []
for line in fileinput.input():
     for n in line.split():
         numbers.append(int(n))
for n in sorted(numbers):
    print(n)
print()
for n in line.split():
   print(n)

