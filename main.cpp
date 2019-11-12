#include <iostream>
#include <iomanip>
using namespace std;
double powerf(double n,int p);
int main() {
    //F=p(1+i)T
    double n,rs,interest;
    int power;
    n=3;
    power=2;
    cout<<"present"<<endl;
    cin>>n;

    cout<<"month"<<endl;
    cin>>power;

    cout<<"interest"<<endl;
    cin>>interest;

    rs=n*powerf(interest+1,power);
    cout<<"result-->"<<rs;
    return 0;
}
double powerf(double n,int p){
    if(p==1)return n;
    while(p>1){
        n*=n;
        p--;
    }
    cout<<n<<endl;
    return  n;
}
