#include <iostream>
using namespace std;

int Steps(int n) {
 size_t n1 = 0, n2 = 1;          //O(1) 
 

 for (size_t i = 0; i < n; i++)            //O(n) 
 {
  size_t n3 = n1;
  n1 = n2;
  n2 += n3;
 }
 return n2;
}




int main() {
 cout << "������������̨����" << endl;
 int n;
 cin >> n;
 cout <<"���Ʒ�ʽ�ķ���Ϊ��"<< Steps(n) << endl;
 
 return 0;
 }                        //���Ӷȷ���ΪO(n) 
