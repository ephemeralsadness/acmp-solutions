k, n = (int(i) for i in input().split())

steps = [0 for i in range(n + 1)]
steps[0] = 1


for i in range(n + 2):
    for j in range(1, k + 1):
        if (i + j <= n):
            steps[i + j] += steps[i]

print(steps[n])
