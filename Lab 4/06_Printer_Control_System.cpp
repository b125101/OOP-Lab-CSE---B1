#include <iostream>
using namespace std;
class PrinterManager; class Printer{private:string printerName;int pagesPrinted,inkLevel;bool powerStatus;public:Printer(string n,int p,int i,bool s):printerName(n),pagesPrinted(p),inkLevel(i),powerStatus(s){}friend class PrinterManager;};
class PrinterManager{public:void displayInfo(Printer&p){cout<<"Name: "<<p.printerName<<"\nPages: "<<p.pagesPrinted<<"\nInk: "<<p.inkLevel<<"%\nPower: "<<(p.powerStatus?"ON":"OFF")<<endl;}void turnOn(Printer&p){p.powerStatus=true;}void turnOff(Printer&p){p.powerStatus=false;}void checkInk(Printer&p){cout<<"Ink: "<<p.inkLevel<<"%\n";}void resetPageCount(Printer&p){p.pagesPrinted=0;}};
int main(){Printer p("HP LaserJet",1250,75,false);PrinterManager m;m.displayInfo(p);m.turnOn(p);m.checkInk(p);m.resetPageCount(p);m.turnOff(p);m.displayInfo(p);return 0;}
