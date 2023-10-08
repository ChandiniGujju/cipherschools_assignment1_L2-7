#include<iostream>
using namespace std;
int main(){
    int password;
    cout<<"Enter the password: ";
    cin>>password;
    while(password<999999){
        cout<<"the password does not meet required conditions.please enter the password again"<<endl;
        cin>>password;
    }
    cout<<" the user has now entered a correct password"<<endl;
}






#include<iostream>
using namespace std;
int main(){
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=100);
}






#include<iostream>
using namespace std;
int main(){
    int count=0;
    while(1){
        cout<<"choclates";
        count++;
        if(count>100){
            break;
        }
    }
}






#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<100;i++){
        cout<<i<<" ";
        if(i>100){
            break;
        }
    }
}

