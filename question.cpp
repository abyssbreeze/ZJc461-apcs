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

      int n ;
      int d ;
      int m ;
      int sm ;
      int min , max ;
      int av  ;
      int num = 0 ;
      int sum = 0 ;

      cin>>n>>d ;
      for(int i = 0 ; i<n ; i++){
        sm = 0 ;
        min = 101 ;
        max = -1 ;
        for(int j = 0 ; j<3 ;j++){
          cin>>m ;
          sm += m ;
          if(m>max){
            max = m ;
          }
          else if(m<min){
            min = m ;
          }          
        }
        av = sm/3 ;
        if(max-min>=d){
          num++ ;
          sum += av ;
        }
      }
      cout<<num<<" "<<sum<<"\n" ;

      return 0 ;
}
    
      
