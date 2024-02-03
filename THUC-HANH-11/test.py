import re

string = 'anh yeu em den dien dau'
i=1
kq=re.findall('\w{'+str(i)+',}',string)
print(kq)