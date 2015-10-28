#include <iostream> //cin and cout come from extension
using namespace std;

int main(){
  int N;
  int f_0=0;
  int f_1=1;
  int f_next;
  
 cout << "N =" << endl;
 cin >> N; //value of N is read from console
 
 for(int i=2; i<=N; i++){
  f_next=f_0+f_1;
  f_0=f_1;
  f_1=f_next;
 }
  cout << f_next << endl; 
  return 0;
}
