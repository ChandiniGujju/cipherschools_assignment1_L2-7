#include<iostream>
using namespace std;
int main(){
    int a[4];
    cout<<"give 5 integers as input"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
}





//printing 10 numbers consequtively
#include<iostream>
using namespace std;
int main(){
    int a[9];
    for(int i=1;i<10;i++){
        cin>>a[i];
    }
    for(int i=9;i>=0;i--){
        cout<<a[i]<<" ";
    }
}






#include<iostream>
using namespace std;
int main(){
    int a[4];
    cout<<"give 5 integers as input"<<endl;
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    for(int i=0;i<5;i++){
        cout<<&a[i]<<" ";
    }
}

