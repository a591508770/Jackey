#include <iostream>

using namespace std;
void list();
void chose();
void cancle();
void entry();
struct student {
    string name=" ";
    int num;
    double grade;
  //  student *next;
   // student *last;
}stu[100];
int StuNum=0;
//Student,*studentPtr;
int main()
{
    int i;
    do{
        cout <<"1,�鿴����ѧ������"<<endl;
        cout <<"2,ѡ��"<<endl;
        cout <<"3,��ѡ"<<endl;
        cout <<"4,¼��ɼ�"<<endl;
        cout <<"5,�˳�����"<<endl;
        cin >>i;
        switch(i){
            case(1):list();break;
            case(2):chose();break;
            case(3):cancle();break;
            case(4):entry();break;
            case(5):cout <<"��ӭʹ�ñ�����"<<endl;break;
            default:cout<<"�����������������"<<endl;
        };
    }while(i!=5);
    return 0;
}
void list(){
    int k=1;
    char YoN;
    cout <<"ѧ��"<<'\t'<<"����"<<'\t'<<"�ɼ�"<<endl;
    do{
        if(stu[k].name==" ") {

            cout<<"��Ϣ�Ե���"<<endl;break;
        }
        cout<<stu[k].num<<'\t'<<stu[k].name<<'\t'<<stu[k].grade<<endl;
       k++;
    }while(k<=StuNum);

}
void chose(){
    int chosenum;
    cout<<"��ӭѡC++�γ�"<<endl;
    cout<<"1,���������Ϣ"<<endl;
    cout<<"2,�˳�"<<endl;
    cin >>chosenum;
    if(chosenum==2) return;

    next:
        for(int k=StuNum+1;;k++){
            cout<<"����������ѧ�ţ�"<<endl;
            cin >>stu[k].num;
            cout<<"����������������"<<endl;
            cin >>stu[k].name;
            cout<<"���������ĳɼ���"<<endl;
            cin >>stu[k].grade;
            cout<<"���ǵ�"<<StuNum+1<<"λѡc++��ѧ������ȷ�������Ϣ����"<<endl;
            StuNum++;
            cout<<"1,��������   2���������˵�"<<endl;
            cin >>chosenum;
            if(chosenum==1) goto next;
            else if(chosenum==2) return;
    }
}
void cancle(){
    int stunum;
    int chosenum;
    cout <<"���������ѧ��"<<endl;
    cin >>stunum;
    for(int i=stunum;i<StuNum;i++){
        stu[i]=stu[i+1];
    };StuNum--;
    cout <<"1������    2���������˵�"<<endl;
    cin >>chosenum;
    if(chosenum==1) cancle();
    if (chosenum==2) return ;
}
void entry(){
    int stunum;
    int chosenum;
    cout <<"��������Ҫ¼��ɼ���ѧ����ѧ��"<<endl;
    cin >>stunum;
    cout <<"��������Ҫ¼��ĳɼ�"<<endl;
    cin >>stu[stunum].grade;
     cout <<"1������    2���������˵�"<<endl;
    cin >>chosenum;
    if(chosenum==1) entry();
    if (chosenum==2) return ;
}
