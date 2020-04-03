#include <bits/stdc++.h> 
using namespace std; 

	int	n;	

//  counting jumped clouds
int jumping_cloud(int str[]){
	int jump = 0;
	int i=0;
	while(i<(n-1))
	{
		if(str[i+2]==0)
		{
			jump +=1;
			i+=2;
//			continue;	
		}
		else if(str[i+1]==0)
		{
			jump +=1;
			i++;
		}
		else  
		{
			break;
		}
	}
	return jump;
}
	

int main() 
{ 
	cout<<"Type number of clouds \n";
	cin>>n;
	cout<<endl;
    int clouds[n] = {0,0,0,0,1,0}; 
	cout << jumping_cloud(clouds);
    return 0; 
} 
