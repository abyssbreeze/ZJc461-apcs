    #include<bits/stdc++.h>
    using namespace std ;

    #define long long int  

    
   //階乘
    // int i(int n){
    //   int ans = 1 ;
    //   for (int i = 1; i <= n; i++) {
    //     ans *= i;
    //   }
    //   return ans ;
    // }


    int main(){
      // cin.sync_with_stdio(0) ;
      // cin.tie(0) ;

      int a,b,c ;
      bool co = 0;
      cin>>a>>b>>c ;

      if(c==0){
        if(a==0&&b==0){
        cout<<"AND\n" ;
        co = 1 ;
        }
        else if(a!=0&&b==0){
          cout<<"AND\n" ;
          co = 1 ;
        }
        else if(a==0&&b!=0){
          cout<<"AND\n" ;
          co = 1 ;
        }
        if(a==0&&b==0){
          cout<<"OR\n" ;
          co = 1 ;
        }
        if(a==0&&b==0){
          cout<<"XOR\n" ;
          co = 1 ;
        }
        else if(a!=0&&b!=0){
          cout<<"XOR\n" ;
          co = 1 ;
        }
      }

      else if(c==1){
        if(a!=0&&b!=0){
        cout<<"AND\n" ;
        co = 1 ;
        }
        if(a!=0&&b==0){
          cout<<"OR\n" ;
          co = 1 ;
        }
        else if(a==0&&b!=0){
          cout<<"OR\n" ;
          co = 1 ;
        }
       else if(a!=0&&b!=0){
          cout<<"OR\n" ;
          co = 1 ;
        }
        if(a!=0&&b==0){
          cout<<"XOR\n" ;
          co = 1 ;
        }
        else if(a==0&&b!=0){
          cout<<"XOR\n" ;
          co = 1 ;
        }
      }
      if(co==0){
        cout<<"IMPOSSIBLE\n" ;
      }
      
      return 0 ;
}
    
      
