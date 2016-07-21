#include<iostream>
#include<vector>
using namespace std;
int main(){
int num;
cin >> num;
bool done;
int sum =0;
int biggest = 0;
vector<int>riceball;

for (int i = 0; i < num+1; i++){
int x;
if(i < num ){
cin >> x;
riceball.push_back(x);
}

}

//while(done == false){

for (int i = 0; i < riceball.size(); i++){


if (riceball[i]> biggest){
    biggest = riceball[i];
}
if(riceball[i] == riceball[i-1]){
    riceball[i-1] = riceball[i] + riceball[i-1];

    sum = riceball[i-1];
if(biggest < sum){
  biggest = sum;
}
    riceball.erase(riceball.begin()+i);
    i = 0;
}

else if (riceball[i] == riceball[i-2]){


 riceball[i-2] = riceball[i]+riceball[i-1]+riceball[i-2];

     sum = riceball[i-2];
if(biggest < sum){
  biggest = sum;
}

 riceball.erase(riceball.begin()+ i);
riceball.erase(riceball.begin()+ (i-1));

   i =0;
}


}








//}



cout << biggest;
return 0;
}
