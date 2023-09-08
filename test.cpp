#include<bits/stdc++.h>
using namespace std;
class heamng{
   
   private : 
   int a=100,b=200;  
   public:
   void seta(int x){
        a=x;
   }
   int geta(){
    return a;
   }

   
};
int main()
{
    heamng h;
    h.seta(300);
    cout<<h.geta()<<endl;
}