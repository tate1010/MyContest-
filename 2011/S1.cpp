#include <iostream>
#include <vector>
using namespace std;

int main(){
vector <int> lis;
int sum = 0;
int num;
int cou;
cin >> cou;
for(int i = 0; i < cou; i++){
        cin >> num;
if (num == 0 ){
    sum -= lis.back();
    lis.pop_back();
}
else{

    lis.push_back(num);
    sum += lis.back();
}
}

cout << sum;
return 0;
}
