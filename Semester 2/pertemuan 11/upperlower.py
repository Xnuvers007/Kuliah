import itertools

s = 'single'
file = open('single.txt', 'wb')
print(list(map(''.join, itertools.product(*list(zip(s.upper(), s.lower()))))))

for i in itertools.product(*list(zip(s.upper(), s.lower()))):
    str(file.write((''.join(i) + '\n').encode('utf-8')))

file.close()