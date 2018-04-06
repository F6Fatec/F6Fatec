import math

m1= 2
m2= 5
m3= 5

sizes= [float(m1), float(m2), float(m3)]
sizes= sorted(sizes)

if ((sizes[0] + sizes[1]) <= sizes[2]):
	area= int(-1)
	print(area)

else:
	s= (m1+m2+m3)/2
	area= (4/3) * math.sqrt(s*(s-m1)*(s-m2)*(s-m3))
	print("{0: .3f}".format(area))