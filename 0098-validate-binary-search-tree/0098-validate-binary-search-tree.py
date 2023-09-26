# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        arr =[]
        def rec(root):
            if root==None:
                return
            else:
                rec(root.left)
                arr.append(root.val)
                rec(root.right)
        rec(root)
        '''for i range(1,len(root)-1):
              if arr[i-1] >arr[i]:
                    return 'NO'
              else''' 
        #print(arr)
        '''for i in range(1,len(arr)):
            
            if arr[i]>arr[i-1]:
                print(arr,'\n',arr[i],arr[i-1],';')
                pass
            else:
                return 'NO'
        return 'YES' '''
        if len(arr) == 2:
            if (arr[0]==arr[1]) or arr[0] > arr[1]:
                 return False
        for i in range(1, len(arr)-1):
            
            if (arr[i-1]>=arr[i] or arr[i]>=arr[i+1]):
                 return False
        return True