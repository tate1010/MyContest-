#include<iostream>
using namespace std;
int main(){

int num;

cin >> num;
int temp = 2* num;
string lis[temp];
int correct = 0;
for (int i = 0; i < temp; i++){

    cin >> lis[i];


}
for (int j = 0; j < num; j++){


if( lis[j] == lis[j+num]){
    correct += 1;




}
}

cout << correct;
return 0;
}
