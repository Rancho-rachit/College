#include<iostream>
using namespace std;

int main(){
    int n;

    cout<<"Enter number of process (less than 20):";
    cin>>n;

    int arr[20];
    int bur[20];
    int p_id[20];
    int x;
    
    for(int i=0;i<n;i++){
        cout<<"\n\t\t"<<"Sequence No. :"<<i+1<<"\t\t\n";
        cout<<"Enter Process ID:";
        cin>>p_id[i];
        cout<<"Enter Arrival Time:";
        cin>>arr[i];
        cout<<"Enter Burst Time:";
        cin>>bur[i];
        cout<<"You Entered "<<i<<" process.";
    }

    for(int j=0;j<n;j++){
        for(int k=j;k<n;k++){
            if (arr[j]>arr[k]){
                // Arrival Time
                x=arr[j];
                arr[j]=arr[k];
                arr[k]=x;

                // Burst Time
                x=bur[j];
                bur[j]=bur[k];
                bur[k]=x;

                // Process ID
                x=p_id[j];
                p_id[j]=p_id[k];
                p_id[k]=x;

            }
            else{
                continue;
            }
        }
    }
    int time=0;
    int wa_time=0;
    for(int h=0;h<n;h++){
        wa_time=time-arr[h];
        time=time+bur[h];
        if(wa_time<=0){
            wa_time=0;
        }
        cout<<"\nWaiting Time for \tProcess ID :"<<p_id[h]<<"\tSequence No. :"<<h<<"\tis :"<<wa_time<<endl;
    }

    return 0;
}