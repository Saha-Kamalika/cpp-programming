/*Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t[3][3];
    int avg[3]={0};
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>t[i][j];
            if(t[i][j]<1 || t[i][j]>100) t[i][j]=0;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            avg[i]+=t[j][i];
        }
        avg[i]/=3;
    }
    for(int i=0;i<3;i++){
        if(avg[i]>max) max=avg[i];
    }
    for(int i=0;i<3;i++){
        if(avg[i]==max){
            cout<<"Trainee Number "<<i+1<<endl;
        }
        if(avg[i]<=70){
            cout<<"Trainee Unfit "<<i+1<<endl;
        }
    }
    return 0;
}
