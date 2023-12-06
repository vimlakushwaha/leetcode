class Solution:
    def canFinish(self, numCourses, prerequisites):
        adj = [[] for i in range(numCourses)]
        res,q = [],[]
        indeg = [0]*numCourses
        for u,v in prerequisites:
            adj[v].append(u)
            indeg[u]+=1

        #return indeg

        for i in range(numCourses):
            if indeg[i]==0:
                q.append(i)

        while(q):
            x = q.pop(0)
            l = adj[x]
            res.append(x)
            for y in l:
                indeg[y] -=1
                if(indeg[y]==0):
                    q.append(y)
        if(len(res)==numCourses):
            return True
        else:
            return False
