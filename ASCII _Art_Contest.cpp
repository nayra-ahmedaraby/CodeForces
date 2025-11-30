#include <iostream>
using namespace std;

int main(){
    int g;
    int arr[3];
    for(int i=0; i<3;i++ ){
        cin>>g;
        //sort(arr, arr + 3);
        if(i==1){
          if(g>arr[0]){
            arr[i]= arr[0];
            arr[0]= g;
            continue;
          }  
        }else if(i==2){
            if(g> arr[0]){
                arr[i]= arr[1];
                arr[1]=arr[0];
                arr[0]= g;
                continue;
            }else if (g> arr[1])
            {
               arr[i]= arr[1];
               arr[1]= g;
               continue; 
            }   
        }
       arr[i]=g; 

    }
    int d=arr[0]- arr[2];
    if (d>= 10)
    {
       cout<<"check again";
    }else{
        cout <<"finall "<<arr[1];
    }
    
    return 0;
}