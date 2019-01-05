#include<iostream>
using namespace std;

int main(){
int x,y;

cout<<"PROGRAM MENGETAHUI KUADRAN DARI INPUTAN X DAN Y"<<endl;

cout<<"Masukan X : ";
cin>>x;
cout<<"Masukan Y : ";
cin>>y;

if(x>0&&y>0)
    cout<<"KUADRAN I"<<endl;
if(x>0&&y<0)
    cout<<"KUADRAN II"<<endl;
if(x<0&&y<0)
    cout<<"KUARAN III"<<endl;
if(x<0&&y>0)
    cout<<"KUADRAN IV"<<endl;
if(x==0&&y==0)
    cout<<"TITIK PUSAT"<<endl;

return 0;











}
