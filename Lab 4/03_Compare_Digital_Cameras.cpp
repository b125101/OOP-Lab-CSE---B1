#include <iostream>
using namespace std;
class Camera{private:string brand,model;float megapixels;int storageCapacity;public:Camera(string b,string m,float p,int s):brand(b),model(m),megapixels(p),storageCapacity(s){}friend void compareCamera(Camera c1,Camera c2);};
void compareCamera(Camera a,Camera b){Camera x=a;if(b.megapixels>a.megapixels||(b.megapixels==a.megapixels&&b.storageCapacity>a.storageCapacity))x=b;cout<<"Brand: "<<x.brand<<"\nModel: "<<x.model<<"\nMegapixels: "<<x.megapixels<<" MP\nStorage: "<<x.storageCapacity<<" GB";}
int main(){Camera c1("Canon","EOS 200D",24.1,128),c2("Sony","Alpha A6400",24.2,256);compareCamera(c1,c2);return 0;}
