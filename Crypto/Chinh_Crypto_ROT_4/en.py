import codecs

def rot_alpha(n):
    from string import ascii_lowercase as lc, ascii_uppercase as uc
    lookup = str.maketrans(lc + uc, lc[n:] + lc[:n] + uc[n:] + uc[:n])
    return lambda s: s.translate(lookup)


text = "miniCTF{R0t10_r3p3aT_10_1im3s}"
for i in range(0,10):
    rot13 = rot_alpha(10)(text)
    text = rot13

print(text)

