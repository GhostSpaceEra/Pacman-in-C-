#include<iostream>
#include<conio.h>
#include<dos.h>
using namespace std;
int main(){

	string arr[15][15];
	int x,y;
    int n=1,m=1;
    char move;
    int score = 0;

    for(x=0;x<15;x++){
		for(y=0;y<15;y++)
		{
		cout<<arr[x][y];

		}
	}


	for(x=0;x<15;x++){
		for(y=0;y<15;y++)
		{
		if(x==0||x==14){
			arr[x][y]="#";
		}
		else if(y==0||y==14){
		arr[x][y]="#";
		}
		else if(x==5 && y>2 && y<10)
		{
		  arr[x][y]="#";
		}
		else if(x==9 && y>2 && y<10)
		{
		  arr[x][y]="#";
		}
		else if(y==9 && x>2 && x<10)
		{
		  arr[x][y]="#";
		}
		else if(y==12 && x>2 && x<10)
		{
		  arr[x][y]="#";
		}
		else if(y==1 && x>6 && x<10)
		{
		  arr[x][y]="#";
		}
		else{
			arr[13][12]="0";
			arr[x][y]=".";
	}

	}
	}



    arr[n][m]="C";
    cout<<"\t\t\tScore: "<<score;
    cout<<endl;
	for(x=0;x<15;x++){
		for(y=0;y<15;y++)
		{

		cout<<arr[x][y]<<" ";

		}
		cout<<endl;
	}

	while(true){
		cout<<"\nEnter move: ";
		cin>>move;

		if(move=='s'){

			n++;
	    	if(n>0){

	    		arr[n-1][m]=" ";

	    	}
	}

		if(move=='w'){

			n--;
	    	if(n>0){

	    		arr[n+1][m]=" ";

	    	}
	}

		if(move=='a') {

			m--;
	    	if(m>0){

	    		arr[n][m+1]=" ";

	    	}
	}

	if(move=='d'){

			m++;
	    	if(m>0){

	    		arr[n][m-1]=" ";

	    	}
	}

	if(arr[n][m]=="0"){
		system("cls");
		cout<<"FINISH";
		cout<<"\t\t\tScore: "<<score;
        cout<<endl;
		break;
	}

	if(arr[n][m]=="#"){
		system("cls");
		cout<<"GAME IS OVER";
		cout<<"\t\t\tScore: "<<score;
        cout<<endl;
		break;
	}

	    if(arr[n][m]=="."){

	    	score+=1;

	    }

		system("cls");


		arr[n][m]="C";
	cout<<"\t\t\tScore: "<<score;
    cout<<endl;
	for(x=0;x<15;x++){
		for(y=0;y<15;y++)
		{

		cout<<arr[x][y]<<" ";

		}
		cout<<endl;
	}
}


}
