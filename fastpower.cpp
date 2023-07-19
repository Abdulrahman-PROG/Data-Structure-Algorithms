

#include <iostream>

using namespace std;

int c=0;
int fpow(int a,int b){
    c++;
    if(b==1) return a;
    if(b==0) return 1;
    int cache = fpow(a,b/2);
    if(b%2 == 1) return cache*cache*a;
    return cache*cache;
}
int pow(int x, int y){
    c++;
    if(y==0)return 1;
    return x*pow(x,y-1);


}

int main()
{
    cout<<pow(2,3)<<endl;
    cout<<c;
    return 0;
}
