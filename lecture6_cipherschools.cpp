#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    i=0;
    j=0;
    k=0;
    cout<<i<<" "<<j<<" "<<k<<endl;
    j=i++;
    cout<<i<<" "<<j<<" "<<k<<endl;
    k=++i;
    cout<<i<<" "<<j<<" "<<k<<endl;

}





#include<iostream>
using namespace std;
int main(){
    int i;
    for(i=0;i<=100;i++){
        cout<<i<<" ";
    }
}






#include<iostream>
using namespace std;
int main(){
    int i=1;
    while(i<101){
        cout<<i<<" ";
        i++;
    }
}







#include<iostream>
using namespace std;
int main(){
    int i=3;
    while(i<101){
        if(i==6){
            break;
        }
        cout<<i<<" ";
        i++;
    }
}






#include<iostream>
using namespace std;
int main(){
    int i;
    int input;
    for(i=1;i<101;i++){
        cin>>input;
        if(input==65){
            cout<<"congrats you have guessed correct";
            break;
        }
    }
}
