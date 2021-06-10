#!/usr/bin/env python3

import math

mod = int(1e9+7)

def solve():
    n,m = map(int, input().split())

    ans = pow(2, (n-1), mod)*m
    print(ans%modq)




t = 1
t = int(input())

for _ in range(t):
    # print(f"Case #{_+1}: ", end="")
    solve()        


