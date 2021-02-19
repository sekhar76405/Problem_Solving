//	A. Cards for Friends
//	time limit per test		1 second
//	memory limit per test	256 megabytes
//	inputstandard 			input
//	outputstandard 			output
//	
//	For the New Year, Polycarp decided to send postcards to all his n friends. He wants to make postcards with his own hands. For this purpose, he has a sheet of paper of size w�h, which can be cut into pieces.
//	Polycarp can cut any sheet of paper w�h that he has in only two cases:
//	If w is even, then he can cut the sheet in half and get two sheets of size w2�h;
//	If h is even, then he can cut the sheet in half and get two sheets of size w�h2;
//	If w and h are even at the same time, then Polycarp can cut the sheet according to any of the rules above.
//	After cutting a sheet of paper, the total number of sheets of paper is increased by 1.
//	Help Polycarp to find out if he can cut his sheet of size w�h at into n or more pieces, using only the rules described above.
//	Input
//	The first line contains one integer t (1=t=104) � the number of test cases. Then t test cases follow.
//	Each test case consists of one line containing three integers w, h, n (1=w,h=104,1=n=109) � the width and height of the sheet Polycarp has and the number of friends he needs to send a postcard to.
//	Output
//	For each test case, output on a separate line:
//	"YES", if it is possible to cut a sheet of size w�h into at least n pieces;
//	"NO" otherwise.
//	You can output "YES" and "NO" in any case (for example, the strings yEs, yes, Yes and YES will be recognized as positive).
//	
//	Example
//	inputCopy
//	5
//	2 2 3
//	3 3 2
//	5 10 2
//	11 13 1
//	1 4 4
//	outputCopy:---
//	YES
//	NO
//	YES
//	YES
//	YES
//	Note:---
//	In the first test case, you can first cut the 2�2 sheet into two 2�1 sheets, and then cut each of them into two more sheets. As a result, we get four sheets 1�1. We can choose any three of them and send them to our friends.
//	In the second test case, a 3�3 sheet cannot be cut, so it is impossible to get two sheets.
//	In the third test case, you can cut a 5�10 sheet into two 5�5 sheets.
//	In the fourth test case, there is no need to cut the sheet, since we only need one sheet.
//	In the fifth test case, you can first cut the 1�4 sheet into two 1�2 sheets, and then cut each of them into two more sheets. As a result, we get four sheets 1�1.

// the approach is to dissect the pages by width as far as possible then, after reachinng max by width, we start cutting by height
// and we keep counting the pages divided as on each cut the number gets x2.

#include<iostream>
using namespace std;
int main()
{
	int test_cases,w,h,n;
	scanf("%d",&test_cases);
	int **mat;						//creating a dynamicmatrix for storing the input
	mat = new int *[test_cases];
	for(int i=0;i<test_cases;i++)
	{
		mat[i] = new int[3];		// as the number of coloums are fixed w,h,n 3
		scanf("%d %d %d",&mat[i][0],&mat[i][1],&mat[i][2]);
	}
//	for(int i=0;i<test_cases;i++)
//	{
//		printf("%d %d %d",mat[i][0],mat[i][1],mat[i][2]);
//		cout<<endl;
//	}
	for(int i=0;i<test_cases;i++)			// looping for each case and priting its a yes or no
	{
		int count_pages=1;					//initial pages are 1 given
		while(mat[i][0]%2==0)				//first dissecting by width as far as possible
		{
			mat[i][0]=mat[i][0]/2;
			count_pages *= 2;				//as once a paper is cut there are two halfs so we get x2 every time
		}
		while(mat[i][1]%2==0)				// then  by height
		{
			mat[i][1]=mat[i][1]/2;
			count_pages *= 2;
		}
		if(count_pages>=mat[i][2])			//asked condition and print
		printf("YES\n");
		else
		printf("NO\n");
	}
	delete mat;
	return 0;
}
