import re

f = open('bin.txt')
txt = f.read()
f.close()

nt = ""
for line in txt.splitlines():
    nl = line
    if line.startswith('typedef'):
        defimatch = re.search('DEFI_[a-zA-Z0-9]+', line)
        defi = line[defimatch.start():defimatch.end()]

        typematch = re.search('(?<=typedef )(.*?)(?=\\()', line)
        type = line[typematch.start():typematch.end()]
        nl = f"{type} HOOK_{defi[5:]}("
    if line == "":
        nl = f"{{\n    return ORIG_\n}}\n"

    nt += nl
    nt += "\n"

o = open('bout.txt', 'w')
o.write(nt)
o.close()