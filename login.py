import bst
import password

r=bst.Node(7376235797,"harshit")
def login():
    print("Enter Mobile Number")
    user_id=int(input())
    pswd=password.pswd()
    if(bst.search(r,user_id,pswd)):
        print("Logged in")
    else:
        print("Wrong credential")
    
    return

def registration():
    user_id=int(input())
    pswd=password.pswd()
    bst.insert(r,user_id,pswd)
    print("successed")
              
              
def ask():
    print("What do you want to do, Login or Registration?")
    a=input()
    if(a=="Login"):
        login()
    elif(a=="Registration"):
        registration()
    elif(a=="quit"):
        return
    ask()
        
        
              
    
if __name__ == '__main__':
    ask()