for i in range (2,102,2):
 print(i)

for i in range (1,100,2):
 print(i)

for i in range(1,11):
  print(f"Iteration {i}: ")
  for j in range(1,6):
   print(f"\t{j}")

for i in range(1,5):
 print(f"{i} quarter: ")
 for j in range(1,4):
  print(f"\t{j} chopped")

count = 10
while (count > 0):
  print(count)
  count-=1
  if (count == 5):
   break