#include<cstdio>
#include<iostream>
#include<vector>
using namespace std;
int M[2000][2000];
int knapsack(int value[], int weight[], int C, int n)
{      
  for(int i = 1; i <= C; i++){
    for(int j = 0; j <n; j++){
      if(j > 0){
        M[j][i] = M[j-1][i];
        if (weight[j] <= i)
          M[j][i] = max(M[j][i], M[j-1][i-weight[j]]+value[j]);
      }
      else{
        M[j][i] = 0;
        if(weight[j] <= i)
          M[j][i] = max(M[j][i], value[j]);
      }
    }
    //    cout << M[i][n-1] << endl;
  }        
  return M[n-1][C];
}  

int main()
{
    int C, N;
    cin >> C >> N;
    //    cout << C << endl;
    int* value = new int[N+1];
    int* weight = new int[N+1];
    for ( int i = 0; i < N; i++) {
        cin>>weight[i]>>value[i];
    }
    //   vector < int >back(N, 0);
    cout<<knapsack(value,weight,C,N)<<endl;
    return 0;
}