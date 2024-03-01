#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
     if(arr[i][j]==target){
       return 1;
     }
  }
}
return 0;
}
int main() {
 int arr[3][4];
/*
//ROW WISE INPUt
  for(int i=0;i<3;i++){
  for(int j=0;j<4;j++){
    cin>>arr[i][j];
  }
}
  */



  // COL WISE INPUT

    for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      cin>>arr[j][i];
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
      cout<<arr[i][j]<<" ";
    }cout<<endl;
  }
  cout<<"enetr elemnt to search"<<endl;
  int target;
  cin>> target;
  if(isPresent(arr, target , 3 , 4)){
    cout<<"found";
  }
  else{
    cout<<"not found"<<endl;
  }

}