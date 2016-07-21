#include <iostream>
#include <sstream>
using namespace std;
int main (){
    long long num;
    cin >> num;
long long gen ;
long long cell[num];
long long cell2[num];
cin >> gen;
string input;
cin >> input;

for (int i = 0; i < num; i++){
string x;
x= input.at(i);
int y;
istringstream convert(x);

convert >> y;
cell[i]= y;
cell2[i]= y;
}

for(long long i = 0; i < gen; i++){

    if (i%2 ==0 ){
            if(cell[num-1]==1&&cell[1]==0
   ){
cell2[0] = 1;

}
else if (cell[num-1]==0&& cell[1]==1){
cell2[0] = 1;


}
else{
    cell2[0] = 0;

}



if(cell[0]==1 && cell[num-2]==0
   ){
cell2[num-1] =1;

}
else if (cell[0]==0 && cell[num-2] == 1){

cell2[num-1] = 1;


}
else{
    cell2[num-1] = 0;

}
for(long long c = 1; c< num-1; c++){



if(cell[c-1]==0&& cell[c+1]==1||cell[c-1]==1&&cell[c+1] ==0){
cell2[c] = 1;

}
else{
    cell2[c] = 0;

}

}
    }
 else  {
               //
            if(cell2[num-1]==1&&cell2[1]==0
   ){
cell[0] = 1;


}
else if (cell2[num-1]==0 && cell2[1]==1){
cell[0] = 1;

}
else{

    cell[0] = 0;

}



if(cell2[0]==1 && cell2[num-2]==0
   ){
cell[num-1] =1;

}
else if (cell2[0]==0 && cell2[num-2] == 1){

cell[num-1] = 1;


}
else{
    cell[num-1] = 0;

}
        for(long long c = 1; c< num-1; c++){
if(cell2[c-1]==0&& cell2[c+1]==1||cell2[c-1]==1&&cell2[c+1] ==0){
cell[c] = 1;

}
else{
    cell[c] = 0;

}
}


    }


}//
for (int i = 0; i < num; i++){
        if(gen%2==0){
cout << cell[i];

        }
        if (gen%2==1){
            cout << cell2[i];

        }
}

return 0;
}
