#include <iostream>
using namespace std;
class Weather{private:string cityName;float temperature;string weatherCondition;public:Weather(string c,float t,string w):cityName(c),temperature(t),weatherCondition(w){}friend void generateReport(Weather w);};
void generateReport(Weather w){cout<<"City: "<<w.cityName<<"\nTemperature: "<<w.temperature<<" C\nCondition: "<<w.weatherCondition<<endl;if(w.temperature>35)cout<<"Category: Very Hot";else if(w.temperature>=20)cout<<"Category: Pleasant";else cout<<"Category: Cool";}
int main(){Weather w("Bhubaneswar",32.5,"Sunny");generateReport(w);return 0;}
