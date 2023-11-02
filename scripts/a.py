f = open('ain.txt')
txt = f.read()
f.close()

for line in txt.splitlines():
    words = line.split(' ')
    defi = words[0]
    orig = words[1]
    print(f"{orig} = ({defi}) GetProcAddress(mod, \"{orig[5:]}\");")