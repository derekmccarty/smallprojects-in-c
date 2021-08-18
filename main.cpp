#include "Stats.h"
using csci2100::Stats;

#include <iostream>
using std::cout, std::endl;

#include <vector>


int main(){
	Stats initiallist;
	
	initiallist.addEntry(-6.8);
	initiallist.addEntry(9.7);
	initiallist.addEntry(8.6);
	
	
	cout<< "the average of the list is (should be 3.8333) " << initiallist.mean() << endl;
	cout<<"the median of the odd # list is (should be 8.6) " << initiallist.median()<<endl;
	
	//even # of entries
	initiallist.addEntry(5.6);
	
	cout<< "the average of the list is (should be 4.275) " << initiallist.mean() << endl;
	cout<<"the median of the even # list is (should be 7.1) " << initiallist.median()<<endl;
	
	//should have 4 entries 
	cout<<"number of entries (should be 4) "<<initiallist.numberOfEntries()<<endl;
	
	//empty vector and see if the # of entries =0 
	initiallist.clear();
	cout<<"number of entries (should be 0) "<<initiallist.numberOfEntries()<<endl;
	cout<<"mean of clear vector "<<initiallist.mean()<<endl;
	cout<<"median of clear vector "<<initiallist.median()<<endl;
	
	initiallist.addEntry(1.48);
	
	cout<<"# of entries " << initiallist.numberOfEntries()<<endl;
	
	

}
