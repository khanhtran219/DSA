#include<iostream>
#include<string.h>
#include<iomanip>
#include<math.h>
using namespace std;
struct Point{
  double x, y;
};
void input(struct Point &A){
  cin>>A.x>>A.y;
}
double distance(struct Point &A,struct Point &B){
  double k = sqrt(pow(abs(A.x-B.x),2)+pow(abs(B.y-A.y),2));
  return k;
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
