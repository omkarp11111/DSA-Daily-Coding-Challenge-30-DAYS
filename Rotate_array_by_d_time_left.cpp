// Rotate the array left N times. Accept N value from the user.
#include<iostream>
using namespace std;
void rotate_array_left(int arr[],int d,int n ){
    int temp[n];
        int k=0,i=0,j=0,l=0;
        for (i=d;i<n;i++){
           temp[k]=arr[i];
            k++;
        
        }
        for(j=0;j<d;j++ ){
           temp[k]=arr[j];
           k++;
         }
        for (l=0;l<n;l++){
           arr[l]=temp[l];
       }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main(){
    int n=0, i=0,d=0;
    //getting input from user 
    cout << "enter the size of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter the array element one after other " << endl;
    //getting the array element from user 
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"enter the value of d for rotating array left by d times "<<endl;
    cin>>d;
    cout<<"before rotating "<<endl;
    print_array(arr,n);
    rotate_array_left(arr,d,n );
    cout<<"\nafter rotating "<<endl;
    print_array(arr,n);


    return 0;
}
