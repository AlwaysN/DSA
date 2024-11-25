// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cout<<"enter a number : ";
//     cin>>n;
//     int a =0;
//     for(int i = 2 ; i<= n-1 ; i++){
//         if(n%i == 0) {
//             a=1;
//             break;
//         }
//     }
//     if(a==1) cout<<"composite";
//     else if(n ==1) cout<<"NPNC";
//     else cout<<"prime";

       
       
       
       
//     return 0;
// }


#include<iostream>
#include<algorithm>
#include<limits.h>
#include<vector>
#include<set>
#include<numeric>
using namespace std;
int main()
{
       
    int n=1;
    int a=0;
    for(int i=2 ;i<n-1;i++){
        if(n%i == 0){
            a=1;
        }
    }
    if(a==1) cout<<"composite";
    else if(n==1) cout<<"npnc";
    else cout<<"prime";
       
       
    return 0;
}