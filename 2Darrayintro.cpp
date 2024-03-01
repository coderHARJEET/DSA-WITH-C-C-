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

void printsum(int arr[][4], int row, int col){
  for(int row=0;row<3;row++){
  int sum=0;
  for( int col=0;col<4;col++){
    sum+=arr[row][col];
    
  }
    cout<<sum<<" ";
}
  cout<<endl;
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
    cout<<"fouund"<<endl;
  }
  else{
    cout<<"not found"<<endl;
  }
  
  printsum(arr,3,4);
  
  

}