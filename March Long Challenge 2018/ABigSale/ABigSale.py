test = int(input())
while (test > 0) :
dishes = int(input())
total = 0.00000
for i in range(dishes) :
    str = input()
    mylist = str.split()
    price = float(mylist[0])
    qnt = float(mylist[1])
    discount = float(mylist[2])
    total = total + price*qnt*discount*discount/10000
print(total)
test -= 1 
