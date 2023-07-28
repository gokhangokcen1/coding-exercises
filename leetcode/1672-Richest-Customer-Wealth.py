acc = [[2,8,7],[7,1,3],[1,9,5]]

maxWealth = 0

for i in range(len(acc)): #üç kez dönecek üç kişi
    total = 0
    for j in range(len(acc[i])): #4 kez dönecek her kişinin 4 banka hesabı var.
        total += int(acc[i][j])
        if total > maxWealth:
            maxWealth = total
            

print(maxWealth)