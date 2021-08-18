//header file for Stats clss

#pragma once 
#include <vector>
#include <algorithm> 

namespace csci2100 {
	
	class Stats{
		private:
			std::vector<double> _listnum; 
			
			
		public:
			
			//all desired member functions 
			
			void addEntry(double number); //adds entry to vector
			
			void clear(); //clears all entries in vector 
			
			double mean() const; //returns the mean of all entries in vector 
			
			double median() const;//returns the median of entries in vector 
			
			int numberOfEntries() const; //return the total number of entries in vector 
		};
	}
			
			
			
			
			
