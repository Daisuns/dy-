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
 cout << "������������̨������" << endl;
 cin >> n;
 cout << "�ݹ鷽ʽ����Ϊ��" << stair(n) << endl;

 return 0;
}                                  //���Ӷȷ���ΪO(n) 
