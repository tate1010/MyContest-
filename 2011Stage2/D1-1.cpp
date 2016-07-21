#include <iostream>

using namespace std;

int main(){
int x ,y;
cin >> x;
cin >> y;
int comm[x][y];
for (int o = 0; o < x; o++){
    for (int p = 0; p < y; p++){
      comm[o][p] = 0;
    }
}
int n;
cin >> n;
for (int i = 0; i < n ; i ++){

 int a, b ;
 cin >>  a;
 cin >> b;
 if (comm[a][b] == 0 ){
  comm[a][b] = 1;

 }
 else{
        cout << "NO";
return 0;
}
}

cout <<"YES";
return 0;
}
