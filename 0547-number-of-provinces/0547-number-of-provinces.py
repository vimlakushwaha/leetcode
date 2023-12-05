class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n = len(isConnected)
        res = 0
        adj = [[] for i in range(n)]
        for i in range(n):
            for j in range(n):
                if i!= j:
                    if isConnected[i][j] == 1:
                        adj[i].append(j)

        status = [0]*n
        for i in range(n):
            if status[i] ==0:
                res +=1
                q = [i]
                status[i] = 1
                while(q):
                    x = q.pop(0)
                    l = adj[x]
                    for nd in l:
                        if status[nd] == 0:
                            q.append(nd)
                            status[nd] = 1
        return(res)

                    
       