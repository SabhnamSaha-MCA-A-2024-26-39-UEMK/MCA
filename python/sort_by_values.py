"""Sort by values"""
d={'a':10, 'c':2, 'b':1, 'd':90}
t=list()
for k,v in d.items():
    t.append((v,k))
print (t)
print(sorted(t))
