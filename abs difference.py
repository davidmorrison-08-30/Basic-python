def minimumAbsoluteDifference(arr):
    res = list()
    for i in range(len(arr)-1):
        for j in range(i+1,len(arr)):
            k = abs(arr[i]-arr[j])
            res.append(k)
    return min(res)

n = int(input())
arr = list(map(int,input().strip().split()))[:n] #entering n space-seperated integers, which are the array's elements
print(minimumAbsoluteDifference(arr))
