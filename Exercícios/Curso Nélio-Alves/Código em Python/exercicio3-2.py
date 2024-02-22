N = int(input())

i = 0

inn = 0
out = 0

while i<N:
    enter = int(input())
    if enter >=10 and enter <= 20:
        inn = inn + 1
    else:
        out = out + 1
    i = i+1

print(inn, "in")
print(out, "out")