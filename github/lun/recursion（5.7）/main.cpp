#include <iostream>

using namespace std;
int z;
int rec(int x,int y)
{
    if(y==1){
        return z;

    }
    z=z*rec(x,y-1);
}
main(){
    int x,y,result;
    cout <<"������x��y��ֵ"<<endl;
    cin >>x>>y;
    z=x;
    result=rec(x,y);
    cout<<x<<"��"<<y<<"�η���"<<result<<endl;
}
