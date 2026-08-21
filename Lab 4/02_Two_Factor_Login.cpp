#include <iostream>
using namespace std;
class UserAccount{private:string username;int loginAttempts;string accountStatus;public:UserAccount(string u,int a,string s):username(u),loginAttempts(a),accountStatus(s){}friend void checkAccount(UserAccount u);};
void checkAccount(UserAccount u){cout<<"Username: "<<u.username<<"\nLogin Attempts: "<<u.loginAttempts<<endl;if(u.loginAttempts>=3)cout<<"Account Locked";else cout<<"Account Active";}
int main(){UserAccount u("Ritesh",2,"Active");checkAccount(u);return 0;}
