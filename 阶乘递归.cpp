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
 cout << "������n��ֵ��" << endl;
 cin >> n;
 cout <<"n�Ľ׳�Ϊ��" << Factorial(n) << endl;
 return 0;
}                                //���Ӷȷ���Ϊ��O(n) 


