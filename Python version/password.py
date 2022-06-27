import getpass
 
def pswd():
    try:
        p = getpass.getpass()
    except Exception as error:
        print('ERROR', error)
    else:
        return p
