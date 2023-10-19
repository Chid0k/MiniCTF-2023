flag = """miniCTF{I_kn0w_u_kn0w_4sc11_t4b1e}"""

for c in flag:
    if c == '{' or c == '}' or c == '_':
        print(c, end =' ')
    else:
        print(ord(c), end = ' ')