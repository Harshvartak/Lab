str1="Hello world"
str2 = str1[6:]
print(str1)
print(str1[0:5])
print(str2)

li=['hi','hello',34,'python']
print(li)
print(li[0])
li.append('there')
print(li)
li.insert(2,'bang')
print(li)
li.remove(34)
print(li)
for i in li:
    print(i)


t1=(1,2,3,4,5,6,7)
t2=(55,3,22,45,12)
print(t1)
print(t2)
t3=t1+t2
print(t3)
print(len(t3))
li2=list(t2)
print(li2)

di={1:"Hello",2:"There",3:"abc",4:"xyz",5:"pqr",6:['hi','hello','ohho']}
print(di)
print(di.keys())
di['hey']='hi'
print(di)
d2={'k':'hhh',55:['b','v','a']}
print(d2)
di.update(d2)
print(di)

s1={1,2,3,5,4,3,1,6,5,9,8}
s2={1,3,4,3,1,7,9,0}
print(s1)
print(s2)
s1.add(5)
print(s1)
print(s1.symmetric_difference(s2))
