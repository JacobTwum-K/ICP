/*
Jacob Twum-Koranteng
05672023
*/

#include <iostream>
#include <cstdlib>
#include ctime>

using namespace std;

int main(){
srand(time(0));
int N = 8;
int A[N][N];

for(int i = 0; i<N; i++){
for(intj = 0; j<N; j++){
A[i][j]=1+(rand() % 1000);
}
}

for(int i = 0; i<N; i++){
for(intj = 0; j<N; j++){
if (i>=j){
cout<<A[i][j]<<"";
}
else{
cout<<0<<" ";
}
}

void LinearIndx(){
B[I] = A[i][j]
}


void InverseIdx(int A[i][j], int size){
int a1[size];
a1[A[i][j] - 1] = i + 1;
for (int i = 0; i < size; i++)
cout << a1[i] << " ";
}

int main(){
int size = sizeof(A[i][j])/sizeof(arr[0]);
}

}cout<<endl;