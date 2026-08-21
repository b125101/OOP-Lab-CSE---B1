#include <iostream>
using namespace std;
class EventParticipant{private:string participantName,registrationStatus;int age;public:EventParticipant(string n,int a,string s):participantName(n),age(a),registrationStatus(s){}friend void verifyParticipant(EventParticipant p);};
void verifyParticipant(EventParticipant p){cout<<"Name: "<<p.participantName<<"\nAge: "<<p.age<<"\nRegistration: "<<p.registrationStatus<<endl;if(p.age>=18&&p.registrationStatus=="Active")cout<<"Eligible";else cout<<"Not Eligible";}
int main(){EventParticipant p("Ritesh Kumar",19,"Active");verifyParticipant(p);return 0;}
