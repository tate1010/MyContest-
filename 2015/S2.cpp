#include<iostream>
using namespace std;
int main(){
int num;
cin >> num;
int athletes;
cin >> athletes;
string shirts;
int number;
int shirt[num];
int sum =0;
for(int i = 0 ; i < num; i ++){
    string temp;
cin >>temp;
if (temp == "S"){
    shirt[i] = 1;

}
if (temp == "M" ){
    shirt[i] = 2;
}
if (temp == "L"){
    shirt[i] = 3;
}
}
for(int i = 0; i < athletes; i ++){

int counter ;
    cin >> shirts;
    if (shirts == "S"){
    counter = 1;

}
if (shirts =="M" ){
    counter = 2;
}
if (shirts == "L"){
    counter = 3;
}
    cin >> number;

if (shirt[number-1] >= counter){
sum++ ;
shirt[number-1] = -1;

}


}
cout << sum;

return 0;
}
