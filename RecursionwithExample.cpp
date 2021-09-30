#include<iostream>
using namespace std;
/*
      Tracing is done in a form of a tree
*/
void fun1(int n){
    if(n>0)  // Base Condition
    {
        cout<<n<<endl;
        fun1(n-1);
    }
}
int main()
{
    int x = 7;
    fun1(x);
    return 0;
}
/*
OUTPUT:
7
6
5
4
3
2
1
*/