# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def fun(self,root, depth):
        if root == None:
            return depth
        else:
            l = fun(root.left,depth+1)
            r = fun(root.right,depth+1)
            return max(l,r)
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        
        def fun(root, depth):
            if root == None:
                return depth
            else:
                l = fun(root.left,depth+1)
                r = fun(root.right,depth+1)
                return max(l,r)
        d = fun(root,0)
        return d