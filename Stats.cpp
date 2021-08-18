#include "Stats.h"
#include <vector>
#include <algorithm>

//implementation of the Stats class

namespace csci2100 {
	//Stats(vector<double> initialList): _listnum(initialList){}
	
	void Stats::addEntry(double number){
		
		_listnum.push_back(number);
		std::sort( _listnum.begin(), _listnum.end()); //sorts numbers as they are added
	}
	
	void Stats::clear(){
		
		_listnum.clear();
	}
	
	double Stats::mean() const{    //returns mean/average of vector 
		
		if (_listnum.size() != 0){
			double avg={0};
			double total={0};
		
			for (int index={0}; index<_listnum.size(); index++){
				total += _listnum[index];
			}
		
			avg=total/_listnum.size();
			return avg;
		}
		
		else if (_listnum.size() == 0){
			return 0;
		}
	}
	
	double Stats::median() const{
		
		int index={0};
		
		//need conditonals for when list has even or odd number of entries but first need to make sure vector not empty
		if (_listnum.size() != 0){
			//if vector has even # of entries need to add middle 2 and average
			if (_listnum.size()%2==0){
				index=_listnum.size()/2;
				return (_listnum[index]+_listnum[index-1])/2;
				}
			
			//if vector has odd number of entries
			else if (_listnum.size()%2 !=0){
				index=_listnum.size()/2;
				return _listnum[index];
				}
		}
		
		else if (_listnum.size() == 0){
			return 0;
		}
	}
	
	int Stats::numberOfEntries() const{
		return _listnum.size();
	}
}
	
