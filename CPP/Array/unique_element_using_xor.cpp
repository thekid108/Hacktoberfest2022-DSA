//Finding unique element in array/vector using xor operation
#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        int a = nums[0];
        
        for(int i=1; i<nums.size(); i++)
        {
            a = a^nums[i];
        }
        return a;
    }
int main()
{
    vector<int> vec;    
    vec.push_back(1);   
    vec.push_back(5);   
    vec.push_back(3);  
    vec.push_back(5);   
    vec.push_back(6);  
    vec.push_back(6);   
    vec.push_back(3);   
    vec.push_back(8);  
    vec.push_back(1); 
    cout<<"Elements are\n";
    for(int i=0; i<vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<"\n"; 
    cout<<"Unique Element is "<<singleNumber(vec);
    
    return 0;
}