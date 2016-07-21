#include<iostream>

using namespace std;

int main(){
    int output = 0;
int gates;
cin >> gates;
int open[gates];

for (int i = 0; i < gates; i++){
    open[i] = 0;
}
int planes;
cin >> planes;
int plane[planes];
for (int a = 0; a < planes; a++){
    int currentplane;
 cin >> currentplane;
plane[a] = currentplane;
}
for (int i = 0; i < planes; i++){
 //int currentplane;
 //cin >> currentplane;
 bool landed = false;
for(int g = plane[i]-1; g >= 0; g--){

 if(open[g]== 0){
    output++;
  open[g]  = 1;
  g = -1;
landed = true;
 }

}
if(landed == false){

    i = planes+1;
}


}

cout << output;
return 0;
}
