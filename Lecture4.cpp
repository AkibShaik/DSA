/* 
    * 
    * * 
    * * *
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}




/*  1 
    2 2 
    3 3 3 
    4 4 4 4    */
#include<iostream>
using namespace std;

int main(){
    int n;      //n means no of row(Lines)
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }     
}




/*  4 3 2 1 
    4 3 2 1
    4 3 2 1
    4 3 2 1    */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n;j!=0;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }    
}



/*  1 2 3 
    4 5 6 
    7 8 9    */
#include<iostream>
using namespace std;

int main(){
    int global=1;
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<global<<" ";
            global++;
        }
        cout<<endl;
    }    
}





/*  1 
    2 1 
    3 2 1 
    4 3 2 1    */   
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int store=i;
        for(int j=1;j<=i;j++){
            cout<<store<<" ";
            store--;
        }
        cout<<endl;
    }
}




/* A B C D 
  E F G H
  I J K L
  M N O P  */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    char ch='A';

    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;         
        }
        cout<<endl;
    }
}




/*   A B C 
     A B C 
     A B C   */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n;j++){
            cout<<ch<<" ";
            ch++;           
        }
        cout<<endl;
    }
}




/* 
D 
C D 
B C D 
A B C D   */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        char ch='A'+n-i;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
            
        }
        cout<<endl;
    }
}




/*  *
   **
  ***
 ****
*****     */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        //PRINT SPACE 
        int space=n-i;
        for(int j=1;j<=space;j++){
            cout<<" ";           
        }

        //PRINT STAR
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}



        /*
*****
****
***
**
*      */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){

        //PRINT STAR
        int store=n-i+1;
        for(int k=1;k<=store;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}




          /*
*****
 ****
  ***
   **
    *    */   
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        //PRINT SPACE
        int Space=i-1;
        for(int j=1;j<=Space;j++){
            cout<<" ";
        }
        //PRINT STAR
        int store=n-i+1;
        for(int k=1;k<=store;k++){
            cout<<"*";
        }
        cout<<endl;
    }
}




/*
   1
  23
 345
4567     */


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        //PRINT SPACE
        int Space=n-i;
        for(int j=1;j<=Space;j++){
            cout<<" ";
        }
        //PRINT Number
        int num_print=i;
        for(int k=1;k<=i;k++){
            cout<<num_print;
            num_print++;
        }
        cout<<endl;
    }
}




           /*  5CR 🤷‍♂️
   1
  121
 12321
1234321    */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        
        //PRINT SPACE
        int Space=n-i;
        for(int j=1;j<=Space;j++){
            cout<<" ";
        }

        //PRINT 2nd Number Tringle
        for(int k=1;k<=i;k++){
            cout<<k;
        }

        //PRINT 3th Number Tringle
        int print_tak=i-1;
        int print_num=i-1;                  // i cannot use print_tak for printing becasue it effect loop!
        for(int t=1;t<=print_tak;t++){
            cout<<print_num; 
            print_num--;        
        }
        cout<<endl;
    }
}





/*   7CR🖤Dabbang_Pattern🤷‍♂️
1234554321
1234**4321
123****321
12******21
1********1        */

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){

        //First Tringle
        int tak1=n-i;
        for(int k=1;k<=tak1;k++){
            cout<<k;
        }

        //Second Tringle     so I take value of i is 0 😎
        int tak2=2*i;
        for(int s=1;s<=tak2;s++){
            cout<<"*";
        }

        //PRINT 3th Number Tringle
        int tak3=n-i;
        int Print=tak3;
        for(int t=1;t<=tak3;t++){
            cout<<Print;
            Print--;
        }
        cout<<endl;
    }
}




















