#Two strings are called anagrams when elements in a string can change order to make up the rest one. 
#Your task is to write a function caculate how many pairs of substrings there are in a given string. 

ef sherlockAndAnagrams(s):
    anagram = []
    for i in range(len(s)):
        for j in range(i,len(s)):
            total = 0
            for k in range(i+1,len(s)-(j-i)):
                t = set(s[i:j+1])
                m = set(s[k:k+(j-i)+1])
                q = s[i:j+1]
                k = s[k:k+(j-i)+1]
                if t == m and len(q) == len(k):
                    for l in t:
                        count_q = 0
                        count_k = 0
                        for u in q:
                            if u == l: count_q += 1
                        for o in k:
                            if o == l: count_k += 1
                        if count_q != count_k: break
                    else:
                        total += 1
                        print(q,k)
            anagram.append(total)
    return sum(anagram)
