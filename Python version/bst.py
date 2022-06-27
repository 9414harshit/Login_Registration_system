class Node:
    def __init__(self, key, password):
        self.left = None
        self.right = None
        self.val = key
        self.password=password

# A utility function to insert
# a new node with the given key


def insert(root, key,ps):
    if root is None:
        return Node(key,ps)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert(root.right, key,ps)
        else:
            root.left = insert(root.left, key,ps)
    return root

# A utility function to do inorder tree traversal

def search(root,key,ps):    
    while root is not None:
        if root.val==key:
            if root.password==ps:
                return 1
            return 0
        elif root.val> key:
            root = root.left
            
        else:
            root=root.right
    return 0