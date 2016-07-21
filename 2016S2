#include<iostream>
#include<algorithm>
using namespace std;

int main(){
int type;

cin >> type;
if (type ==1 ){
int num;
cin >> num;
int speed1[num];
for (int i = 0; i < num; i++){
    cin >>speed1[i];

}
int speed2[num];

for (int i = 0; i < num; i++){
    cin >>speed2[i];

}

sort(speed1,speed1+num);
sort(speed2,speed2+num);
int sum = 0;
for(int i=0; i< num; i++){
if(speed1[i] < speed2[i]){
    sum+= speed2[i];
}
if(speed1[i] > speed2[i]){
    sum+= speed1[i];

}
if(speed1[i] == speed2[i]){
   sum+= speed1[i];

}

}
cout << sum;
}
if (type ==2){
int num;
cin >> num;
int speed1[num];
for (int i = 0; i < num; i++){
    cin >>speed1[i];

}
int speed2[num];

for (int i = 0; i < num; i++){
    cin >>speed2[i];

}

sort(speed1,speed1+num);
sort(speed2,speed2+num);
int sum = 0;
for(int i=0; i< num; i++){
if(speed1[i] < speed2[num-i-1]){
    sum+= speed2[num-i-1];
}
if(speed1[i] > speed2[num-i-1]){
    sum+= speed1[i];

}
if(speed1[i] == speed2[num-i-1]){
   sum+= speed1[i];

}

}
cout << sum;
}





return 0;
}
