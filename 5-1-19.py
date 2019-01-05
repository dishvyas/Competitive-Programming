import re
def contains_word(s, w):
    return (' ' + w + ' ') in (' ' + s + ' ')
a='not'
b='NOT'
t=int(input())
for i in range(t):
    s=str(input())
    c=contains_word(s,a)
    d=contains_word(s,b)
    if c==True or d==True:
        print("Real Fancy")
    else:
        print("regularly fancy")
