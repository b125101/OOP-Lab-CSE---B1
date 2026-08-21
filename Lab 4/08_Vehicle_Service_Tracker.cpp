#include <iostream>
using namespace std;
class ServiceManager; class VehicleService{private:string vehicleNumber,ownerName;bool serviceDue;int lastServiceKm;public:VehicleService(string n,string o,bool d,int k):vehicleNumber(n),ownerName(o),serviceDue(d),lastServiceKm(k){}friend class ServiceManager;};
class ServiceManager{public:void displayInfo(VehicleService&v){cout<<"Vehicle: "<<v.vehicleNumber<<"\nOwner: "<<v.ownerName<<"\nLast Service: "<<v.lastServiceKm<<" km\nDue: "<<(v.serviceDue?"Yes":"No")<<endl;}void completeService(VehicleService&v){v.serviceDue=false;}void updateServiceKm(VehicleService&v,int k){if(k>=0)v.lastServiceKm=k;}void checkService(VehicleService&v){cout<<(v.serviceDue?"Service required":"Service not required")<<endl;}};
int main(){VehicleService v("OD02AB1234","Ritesh Kumar",true,15000);ServiceManager m;m.displayInfo(v);m.checkService(v);m.completeService(v);m.updateServiceKm(v,16000);m.checkService(v);m.displayInfo(v);return 0;}
