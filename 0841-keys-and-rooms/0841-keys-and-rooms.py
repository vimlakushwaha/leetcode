class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        #BFS in graph
        n = len(rooms)
        status = [0]*n
        s  = 0
        q = [s]
        status[s]= 1
        while(q):
            x = q.pop(0)
            l = rooms[x]
            for nd in l:
                if(status[nd]==0):
                    q.append(nd)
                    status[nd] = 1
                    
        for x in status:
            if x== 0 :
                return False
        else:
             return True
