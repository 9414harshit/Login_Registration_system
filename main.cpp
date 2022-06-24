#include "password.h"
#include "bst.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	string input,pass;
	int id;
	bool flag=0;
	BST b, *root = NULL;
	while(1){
	//asking for new user or old
		system("CLS");
		cout<<"Type 'NEW' if you are a new user or Type 'Login' if you are already a user"<<endl;
		cin>>input;
		if(input=="NEW") {
			cout<<"Enter Your Last 4 digit of Mobile Number"<<endl;
			cin>>id;
			cout<<"Enter a AlphaNumeric Password"<<endl;
			pass=takePasswdFromUser();
			if(!flag) {
				root=b.Insert(root,id,pass);
				flag=1;
			}
			else {
				if(b.search(root,id,"")) {
					cout<<"Already Registered";
					getch();
					continue;
				}
				b.Insert(root,id,pass);
			}
		}
		else if(input=="Login"){
			bool check=0;
			cout<<"Enter Your Last 4 digit of Mobile Number"<<endl;
			cin>>id;
			cout<<"Enter a AlphaNumeric Password"<<endl;
			pass=takePasswdFromUser();
			check=b.search(root,id,pass);
			if(check) cout<<"Thanks for logging!";
			else cout<<"wrong credentials"<<endl;
			cout << "Press Enter to Continue";
			getch();
		}
		if(input=="quit") break;
	}
	return 0;
}
