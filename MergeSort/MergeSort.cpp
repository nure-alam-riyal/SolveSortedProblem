#include<bits/stdc++.h>
using namespace std;
int arr[100];
void merge(int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int Larr[n1];
    int Rarr[n2];
    for(int i=0;i<n1;i++)
    Larr[i]=arr[l+i];
    for(int i=0;i<n2;i++)
    Rarr[i]=arr[mid+1+i];

    int m=0,n=0,k=l;
    while(m<n1 && n<n2){
        if(Larr[m]<=Rarr[n]){
            arr[k]=Larr[m];
            m++;
        }
        else{
            arr[k]=Rarr[n];
            n++;
        }
        k++;
    }
    while (m < n1) {
        arr[k++] = Larr[m++];
    }
    while (n < n2) {
        arr[k++] = Rarr[m++];
    }
    
}
void mergeSort(int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(l,mid);
        mergeSort(mid+1,r);
        merge(l,mid,r);
    }

}
int main(){
    int num;
    cout <<"Enter the Number of the Valuse: "<<endl;
    cin>>num;
    cout <<"Enter the valuse: "<<endl;
    for(int i=0;i<num;i++)
        cin>>arr[i];
    cout<<"Unsoted Valuse: "<<endl;
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    mergeSort(0,num-1);
    cout<<"Sorted Valuse: "<<endl;
    for(int i=0;i<num;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;   


}