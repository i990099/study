import keyword

print("hello world")
flag = False
name = 'python'
if name == 'python':         # 判断变量是否为 python 
    flag = True              # 条件成立时设置标志为真
    print("welcome boss")     # 并输出欢迎信息
else:
    print(name)             # 条件不成立时输出变量名称


print(keyword.kwlist)

#fp = open("C:/Users/zhulei/Desktop/test.txt","a+")
#print("hello python",file=fp)
#fp.close
print(chr(0b100111001011111))#转成汉字 ‘也’
print(ord('也'))
print(1.1+2.2)
from decimal import Decimal
print(Decimal('1.1')+Decimal('2.2'))
str1 = """ 人生苦短
我学Python"""

print(str1,type(str1))

quesion = input("你好呀")
print(quesion)