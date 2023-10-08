#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Input 4 integers a,b,c and d\n";
    cin>>a>>b>>c>>d;
    cout<< (a>b&&c>d) <<endl;
    cout<< (a>b||c>d) <<endl;
}




#include<iostream>
using namespace std;
int main(){
    float a,b;
    cin>>a>>b;
    if(a>0.01 || b>a){
        cout<<"condition is true"<<endl;
    }

}




#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"please enter the marls to calculate te grade : ";
    cin>>marks;
    if(marks>90){
        cout<<"A";
    }
    else if(marks>80){
        cout<<"B";
    }
    else if(marks>70){
        cout<<"C";
    }
    else{
        cout<<"Pass";
    }
}












#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<"Give three integers as inputs : a,b,c"<<endl;
    cin>>a>>b>>c>>d;
    if(a>b && c>d){
        cout<<"haha";
    }
    else if(a>b && c<d){
        cout<<"hehe";
    }
    else{
        cout<<"huhu";
    }
}






#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a integer a ";
    cin>>a;
    switch(a){
    case 1:
        cout<<"value of a is 1";
        break;
    case 2:
        cout<<"value of a is 2";
        break;
    default:
        cout<<"default will be always printed";
        break;
    }
}

