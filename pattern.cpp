// ####
// ####
// ####
// ####

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//   cout<<"hello"<<n;
//    return 0;
// }
// {THE FIRST PATTERN }

// *****
// *****
// *****
// *****
// *****
// *****


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//   int n;
//   cin>>n;
//   for(int i=0;i<n;i++){
//      for(int j=0;j<n;j++){
//       cout<<"*";
//      }
//      cout<<endl;
//   }
//    return 0;
// }

// {SECOND PATTERN}

// *
// **
// ***
// ****

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//       for(int j=0;j<i;j++){
//           cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {THIRD PATTERN}

// 1
// 12
// 123
// 1234

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//         cout<<j;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {FORTH PATTERN}

// 1
// 22
// 333
// 4444
// 55555

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=1;i<=n;i++){
//       for(int j=1;j<=i;j++){
//          cout<<i;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {FIFTH pattern}

// ****
// ***
// **
// *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {SIX PATTERN}

// 1234
// 123
// 12
// 1
   

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<j;
//       }

//       cout<<endl;
//    }
//    return 0;
// }

// {SEVENTH PATTERN}

//      *
//     ***
//    *****   
//   *******  
//  *********

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<" ";
//       }
//       for(int k=0;k<2*i+1;k++){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {EIGHTTH PATTERN }

// *****
//  ***
//   *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=0;j<=i;j++){
//          cout<<" ";
//       }
//       for(int k=2*(n-i)-1;k>0;k--){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {nineth pattern}

//      1
//     21
//    321
//   4321

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<" ";
//       }
//       for(int j=0;j<=i;j++){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }


// {tenth pattern}

//      *
//     ***
//    *****   
//   *******  
//  *********
//  *********
//   *******
//    *****
//     ***
//      *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<" ";
//       }
//       for(int k=0;k<2*i+1;k++){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    for(int p=0;p<n;p++){
//       for(int q=0;q<=p;q++){
//          cout<<" ";
//       }
//       for(int r=2*(n-p)-1;r>0;r--){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    return 0;
// }


// {eleventh pattern}

// *
// **
// ***
// ****
// ****
// ***
// **
// *

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=0;j<=i;j++){
//          cout<<"*";
//       }
//       cout<<endl;
//    }
//    for(int i=0;i<n;i++){
//       for(int j=n-i;j>0;j--){
//          cout<<"*";
//       }
//     cout<<endl;
//    }
//    return 0;

// }

// {twoventh pattern}

// 1
// 01
// 101
// 0101
// 10101


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=0;j<=i;j++){
//          if(j%2==0){
//            cout<<"1";
//          }
//          else{
//             cout<<"0";
//          }
//       }
//       cout<<endl;
//    }
//    return 0;
// }


// {thirneeth pattern}

// 1      1
// 12    21
// 123  321
// 12344321

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       for(int j=1;j<=i;j++){
//          cout<<j;
//       }
//       for(int k=2*(n-i)-2;k>0;k-- ){
//          cout<<" ";
//       }
//       for(int l=1;l<=i;l++){
//          cout<<l;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {fortheenth pattern}

// 1
// 23
// 456
// 6789
// 1011121314

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//     int cnt = 1;
//    for(int i=0;i<n;i++){
//      for(int j=0;j<=i;j++){
//         cout<<cnt;
//         cnt++;
//      }
//      cout<<endl;
//    }
//    return 0;
// }

// {fifth pattern}

// A
// AB 
// ABC 
// ABCD 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
   
//    for(int i=0;i<n;i++){
//       int x =65;
//       for(int j=0;j<=i;j++){
//          char ch = (char)x;
//          cout<<ch;
//          x++;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {sixth pattern }

// ABCDE
// ABCD
// ABC 
// AB 
// A

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       char ch = 'A';
//       for(int j=n-i;j>0;j--){
//         cout<<ch;
//         ch++;
//       }
//       cout<<endl;
//    }
//    return 0;
// }

// {seventeenth pattern }

// A 
// BB
// CCC 
// DDDD 

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    char ch = 'A';
//    for(int i=0;i<n;i++){
//       for(int j=0;j<=i;j++){
//          cout<<ch;
//       }
//       ch++;
//       cout<<endl;
//    }
//    return 0;
// }

// {eighteenth pattern}

//      A 
//     ABC 
//    ABCDE
//   ABCDEFG
     

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//    int n;
//    cin>>n;
//    for(int i=0;i<n;i++){
//       char ch = 'A';
//       for(int j=n-i;j>0;j--){
//          cout<<" ";
//       }
//       for(int k=0;k<2*i+1;k++){
//          cout<<ch;
//          ch++;
//       }
      
//       cout<<endl;
//    }
//    return 0;
// }

// {ninetheenth patternl}

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         for(int j=n-i;j>0;j--){
//             cout<<'*';
//         }
//         for(int k=0;k<2*i;k++){
//             cout<<" ";
//         }
//         for(int l=0;l<n-i;l++){
//            cout<<"*";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<'*';
//         }
//         for(int k=2*(n-i)-2;k>0;k--){
//             cout<<" ";
//         }
//         for(int l=0;l<=i;l++){
//            cout<<"*";
//         }
//         cout<<endl;
//     }
// }

