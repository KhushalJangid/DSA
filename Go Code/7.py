
class pushNode:
    def __init__(self, data):
        self.data = data
        self.left = self.right = None
        
        
def inorder(node):
    if (not node):
        return
    inorder(node.left)
    print(node.data, end = " ")
    inorder(node.right)
    
    
def MergeTrees(t1, t2):
    if (not t1):
        return t2
    if (not t2):
        return t1
    t1.data += t2.data
    t1.left = MergeTrees(t1.left, t2.left)
    t1.right = MergeTrees(t1.right, t2.right)
    return t1

if __name__ == '__main__':
    root1 = pushNode(1)
    root1.left = pushNode(2)
    root1.right = pushNode(3)
    root1.left.left = pushNode(4)
    root1.left.right = pushNode(5)
    root1.right.right = pushNode(6)
    print("Tree 1 : ")
    inorder(root1)
    print("\n")
    
    root2 = pushNode(4)
    root2.left = pushNode(1)
    root2.right = pushNode(7)
    root2.left.left = pushNode(3)
    root2.right.left = pushNode(2)
    root2.right.right = pushNode(6)
 
    print("Tree 2 : ")
    inorder(root2)
    print("\n")
 
    root3 = MergeTrees(root1, root2)
    
    print("The Merged Binary Tree is:")
    inorder(root3)
    print("\n")
 