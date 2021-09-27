#include <iostream>
using namespace std;
long Factorial(long n) {
 if (n==1)                                 //O(1) 
 {
  return 1;
 }
 else
 {
  return n *Factorial(n - 1);             //O(n) 
 }
}
int main(){
 long n;
 cout << "请输入n的值：" << endl;
 cin >> n;
 cout <<"n的阶乘为：" << Factorial(n) << endl;
 return 0;
}                                //复杂度分析为：O(n) 


