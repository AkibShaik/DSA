//1-  Sum of Even Num
#include<iostream>
using namespace std;

int main(){
    int i=1,num;
    int sum=0;
    cin>>num;

    while(i!=num){
        if(i%2==0){
            sum+=i;
        }
        i++;

    }
    cout<<"Sum of even numbers: "<<sum<<endl;
}




//2-  Prime or Not
#include<iostream>
using namespace std;

int main(){
    int num;
    int PRIME=true;
    cin>>num;
    
    for(int i=2;i<num;i++){
        if(num%i==0){
            PRIME=false;
            break;              //age check nhi krna
        }

    }
    if(PRIME){
        cout<<"PRIME";
    }
    else{
        cout<<"NOT_PRIME";
    }
}
