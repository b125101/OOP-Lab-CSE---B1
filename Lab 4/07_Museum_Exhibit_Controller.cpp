#include <iostream>
using namespace std;
class MuseumManager; class Exhibit{private:string exhibitName;int exhibitID,visitorCount;bool displayStatus;public:Exhibit(string n,int i,int v,bool s):exhibitName(n),exhibitID(i),visitorCount(v),displayStatus(s){}friend class MuseumManager;};
class MuseumManager{public:void displayInfo(Exhibit&e){cout<<"Name: "<<e.exhibitName<<"\nID: "<<e.exhibitID<<"\nVisitors: "<<e.visitorCount<<"\nStatus: "<<(e.displayStatus?"Open":"Closed")<<endl;}void addVisitors(Exhibit&e,int n){if(n>0)e.visitorCount+=n;}void resetVisitors(Exhibit&e){e.visitorCount=0;}void openExhibit(Exhibit&e){e.displayStatus=true;}void closeExhibit(Exhibit&e){e.displayStatus=false;}void checkStatus(Exhibit&e){cout<<(e.displayStatus?"OPEN":"CLOSED")<<endl;}};
int main(){Exhibit e("Ancient Coins",101,50,true);MuseumManager m;m.displayInfo(e);m.addVisitors(e,25);m.checkStatus(e);m.closeExhibit(e);m.resetVisitors(e);m.displayInfo(e);return 0;}
