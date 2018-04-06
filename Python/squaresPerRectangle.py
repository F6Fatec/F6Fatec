s1 = int(input("Type one rectangle side:"))
s2 = int(input("Type the other rectangle side:"))

if s1 > s2:
	ss= s2
else:
	ss= s1

for i in range(1, ss + 1):
	n= (s1 // i) * (s2 // i)
	print("The number of {0} size squares that fits into this rectangle is {1}".format(i, n))
