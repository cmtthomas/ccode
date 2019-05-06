// ifelse_2d.cpp
//compile g++ ifelse_2d.cpp

#include <iostream>
using namespace std;
#include <stdio.h>

int main()
{
		int r,c;//row and column
		string word = "word";
		int val = 0;
		int m[8][8] = {
			{1,4,4,4,4,4,4,1} ,
			{2,3,3,3,3,3,3,2} ,
			{2,3,3,3,3,3,3,2} ,
			{2,3,3,3,3,3,3,2} ,
			{2,3,3,3,3,3,3,2} ,
			{2,3,3,3,3,3,3,2} ,
			{2,3,3,3,3,3,3,2} ,
			{1,4,4,4,4,4,4,1}
		};

		  for (r = 0; r < 8; r++){
				for (c = 0; c < 8; c++){
				  val = m[r][c];
				  //switch
					  switch (val){
							case 1:
								word = "*";
								break;
							case 2:
							  word = "|";
							  break;
							case 3:
							  word = "/";
								break;
							case 4:
							  word = "-";
								break;
							default:
								word = "Hej";
								break;
					//end switch
				  }
				cout << word;
				}//end c
			cout<<"\n";
		}//end r
	return 0;
}
