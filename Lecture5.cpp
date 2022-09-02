//Operation on Bit
#include<iostream>
using namespace std;

int main(){
    int a=4;
    int b=6;

    cout<< "a&b " <<(a&b) <<endl;
    cout<< "a|b " <<(a|b) <<endl;
    cout<< "~a "  <<~a <<endl;
    cout<< "a^b " <<(a^b) <<endl;

    //Left sift right  :-in case of bigger it create -ve number
    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19>>1)<<endl;
    cout<< (21>>2)<<endl;
}


//Fibonacci Series
#include<iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int n;
    cout<<"enter hm-fibSeries do want to print"<<endl;
    cin>>n;
    
    cout<<a <<" "<<b<<endl;
    for(int i=1; i<=n ; i++){
        int nextNum = a+b;
        cout<<nextNum<<endl;

        //Changing value
        a = b;
        b = nextNum;
    }
}


//LeetCode-1  
#include<iostream>
using namespace std;

int main(){
    int product=1;
    int sum=0;

    int n;
    cout <<"enter ur number";
    cin>> n;
    

    while(n!=0){
       int digit = n % 10;     //find last digit ex(234) last digit is 4
       product *=digit;
       sum += digit;
       n = n/10;           //when we find last-digit then update also so we also find their last digit  23 :) 
    }
    cout<< "product is :- "<<product<<endl;
    cout<< "sum is :- "<<sum<<endl;
    
    int answer = product - sum;
    cout<< "answer is:  "<<answer<<endl;
}




//LeetCode-2
#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int isTimesOnes = 0;

//we dont want to check to end (32 bit)  **logic:- when Binarydigit is remove from number and it completely 0 when value of number is = 0 and loop will be stop..

    while( n != 0){
        if(n & 1){
            isTimesOnes++;
        }
        n = n >> 1;  //update num from remove a Binary digit
    }
    cout<<"no of times 1 present:- "<<isTimesOnes<<endl;
}

