//add books on the left and books get removed from the right and fall off from the right if width of books exceeds width of shelf
//book id is like the title of the book 
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main(){
//initialize vectors first
vector<int> widths(101,0);		//stores the widths of the books
vector<int> positions(101,0);	//stores the position of the books

int shelfsize=0;
cout<<"what is initial size of shelf? "<<endl;
cin>>shelfsize;

//need 3 methods add (denoted A), remove (denoted R), and end (denoted E)
string input;
cout<<"what action to take? "<<endl;
cin>>input;
	
	while(input != "E"){
		if (input == "A"){			//trying to add book to shelf
			int title;
			cout<<"title of the book? "<<endl;
			cin>>title;
			
			int width;
			cout<<"Width of book? "<<endl;
			cin>>width;
			
			//first need to add book to the front of each vector 
			positions.insert(positions.begin(), title);
			widths.insert(widths.begin(), width);
			
			//figure out total width and if it exceeds shelf space then need to remove books until width is <= shelfsize
			int k=0;
			int totalwidth=0;
			while(widths[k] !=0){
				totalwidth +=widths[k];
				k++;
			}
			//need to remove books at end of shelf till total width < shelfsize
			while (totalwidth > shelfsize){				//get rid of last elements until totalwidth < shelfsize
				totalwidth -=widths[k];
				positions.erase(positions.begin()+k);
				widths.erase(widths.begin()+k);
				k--;
			}
		}
		if (input == "R"){			//trying to remove a book
			int title2;
			cout<<"what is the title of the book you're removing? "<<endl;
			cin>>title2;
			
			//need to see if book is in vector and if it is need to remove it from both positons and widths vectors 
			for(int j=0; j<=positions.size(); j++){
				if(positions[j]==title2){
					positions.erase(positions.begin()+j);
					widths.erase(widths.begin()+j);
					}
			}
		cout<<"what action next? "<<endl;
		cin>>input;
		}
	}
	//input was E so need to print the remaining titles in shelf
	for(int i=0; i<=positions.size();i++){
		if(positions[i] != 0){
			cout<<positions[i]<<endl;
		}
	}
	
}
