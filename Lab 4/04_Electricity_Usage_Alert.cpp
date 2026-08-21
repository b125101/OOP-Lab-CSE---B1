#include <iostream>
using namespace std;
class ElectricMeter{private:int meterNumber,unitsConsumed;string consumerName;public:ElectricMeter(int m,string n,int u):meterNumber(m),consumerName(n),unitsConsumed(u){}friend void checkUsage(ElectricMeter e);};
void checkUsage(ElectricMeter e){cout<<"Meter Number: "<<e.meterNumber<<"\nConsumer Name: "<<e.consumerName<<"\nUnits Consumed: "<<e.unitsConsumed<<endl;if(e.unitsConsumed<100)cout<<"Low Usage";else if(e.unitsConsumed<=300)cout<<"Moderate Usage";else cout<<"High Usage";}
int main(){ElectricMeter e(10234,"Ritesh Kumar",245);checkUsage(e);return 0;}
