#include<iostream>
#include<vector>
using namespace std;
void singlenum(vector<int>vec,int size){
    size=7;
    for(int j=0;j<size;j++){
int count=0;
for(int i=0;i<size;i++){
if (vec[i]==vec[j]){
    count++;
}
}
if(count==1){
    cout<<vec[j]<<endl;

}
}
}
void num(vector<int>vec){
    int ans=0;
    for(int val:vec){
        ans=ans^val;
    }
    cout<<ans<<endl;
}
int main(){
vector<int>vec={1,2,3,4,1,2,3};
singlenum(vec,7);
num(vec);
return 0;
}