#include <iostream>
using namespace std;
 
int stair(int a) {
 if (a==1)
 {
  return 1;                           //O(1) 
 }
 if (a==2)
 {
  return 2;                             //O(1) 
 }
 return (stair(a - 1) + stair(a - 2));            //O(n) 
}
int main() {
 int n;
 cout << "请输入需计算的台阶数：" << endl;
 cin >> n;
 cout << "递归方式方法为：" << stair(n) << endl;

 return 0;
}                                  //复杂度分析为O(n) 
