#include <iostream>

using namespace std;

int main()
{
    int i;
    double c,f;
    cout << "1.�����¶ȡ���>�����¶�" << endl;
    cout << "2.�����¶ȡ���>�����¶�" << endl;
    cout << "3.�˳�" << endl;
    cin >>i;
    for(int j=0;;j++){
        if(i==1){
            cout <<"���������¶�"<<endl;
            cin >>c;
            f=9*c/5 +32;
            cout <<c<<"���϶ȶ�Ӧ"<<f<<"�����¶�"<<endl;
        }else if(i==2){
            cout <<"���뻪���¶�"<<endl;
            cin >>f;
            c=(5/9)*(f-32);
            cout <<f<<"�����¶ȶ�Ӧ"<<c<<"���϶�"<<endl;
        }else if(i==3){
            break;
        }
    }
    return 0;
}
