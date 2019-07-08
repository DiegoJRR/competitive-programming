#include <iostream>
#include <string>

using namespace std;

int main()
{
    int N, rotations=0;
    string rot;
    string pos = "^>v<^>v<";

    cin>>N>>rot;
    
		char in[N][N];

		for (int i=1; i<=N;i++){
			for (int j=1; j<=N;j++){
					cin>>in[i][j];
        }
    }
		cout<<rot<<endl;
		//For every direction character in the rot string
		for(int i=0;i<rot.length();i++) {
			  cout<<rot[i]<<endl;
				if (rot[i] == 'R'){
					rotations ++;
				}
				else {
					rotations += 3;
				}
		}

		rotations = rotations - (rotations/4)*4;
    
		cout<<rotations<<endl;
    return 0;
}