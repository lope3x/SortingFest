#include <bits/stdc++.h>

using namespace std;

#define INF 0x3f3f3f3f

void merge_sort(vector<int> &v){

  if(v.size()==1) return;
  vector<int> u1, u2;

  for(int i=0;i<v.size()/2;i++) u1.push_back(v[i]);
  for(int i=v.size()/2;i<v.size();i++) u2.push_back(v[i]);


  merge_sort(u1);
  merge_sort(u2);


  u1.push_back(INF);
  u2.push_back(INF);

  int ini1=0, ini2=0;


  for(int i=0;i<v.size();i++){
    if(u1[ini1]<u2[ini2]){
      v[i]=u1[ini1];
      ini1++;
    }
    else{
      v[i]=u2[ini2];
      ini2++;
    }
  }
  return;
}



int main(){

  vector<int> v;
  int n;
  int aux;

  cin>> n;

  for(int i =0; i<n; i++){
    cin>> aux;
    v.push_back(aux);
  }

  merge_sort(v);
  cout<< "Welcome to HacktoberFest!\n";
  for(int i =0; i<v.size(); i++) cout<< v[i] << " ";
  cout<< endl;


  return 0;
}
