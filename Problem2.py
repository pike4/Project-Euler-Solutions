cur = 1
prev = 0
swap = 0
total = 0

while cur < 4000000:
    swap = cur + prev
    prev = cur
    cur = swap
    if (swap % 2) == 0:
        total += swap

print(total)
