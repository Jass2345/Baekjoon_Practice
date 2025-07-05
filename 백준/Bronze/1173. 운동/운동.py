N, m, M, T, R = map(int, input().split())

if m + T > M:
  print(-1)
else:
  exT = 0  
  t = 0     
  p = m    
  while exT < N:
    t += 1 
    if p + T <= M:
      p += T 
      exT += 1 
    else:
      p -= R 
      if p < m:
        p = m
  print(t)