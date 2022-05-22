#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i = 0;
    int currLen = 0;
    int maxLen = 0;
   

    while (1)
    {
        if (arr[i] != ' ')
        {
            currLen += 1;
            maxLen = max(maxLen, currLen);
        }
        else{
            currLen = 0;
            
        }
        if (arr[i] == '\0')
        {
            break;
        }   
        i++;    
        
    }
    cout<<maxLen<<endl;
    
  
    return 0;
}