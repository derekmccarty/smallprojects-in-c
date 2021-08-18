#pragma once
#include <list>
#include <iostream>
using std::cout, std::endl;

namespace csci2100 {
 
template <class ItemType>
class SortedList {
  private:
    std::list<ItemType> _internalList;
    
  public:
    void insert(ItemType item) {					 //first have to find where the element should go 
      auto index=_internalList.begin();
      while (index != _internalList.end() && *index < item){
		  index++;
	  }
	  _internalList.insert(index,item);				//need to insert element and already has given location picked 
    }
    
    bool contains(ItemType item) const {
      auto iter = _internalList.begin();
      while (iter != _internalList.end() && *iter < item) {
        iter++;
      }
      if (iter != _internalList.end() && *iter == item)
        return true;
      return false;
    }
    
    void remove(ItemType item) {								//first need to make sure the element is there before we can remove it 
      auto locate =_internalList.begin();
      while (locate !=_internalList.end() && *locate < item){
	  locate++;													//iterates through list till either element is found or goes to end of list and then returns index of element 
	  }
	  if(locate !=_internalList.end() && *locate ==item){		//found element so need to erase it 
		  _internalList.erase(locate);
	  }
	  else{
			std::cout<<"item not in list"<<std::endl;			//element not found so cant remove anything
	  }
    }
    
    int size() const {
      return _internalList.size();
    }
      
    bool isSorted() const {
      if (_internalList.size() < 2) return true;
      auto current = _internalList.begin();
      auto next = current;
      next++;
      while (next != _internalList.end()) {
        if (*next < *current) return false;
        current = next;
        next++;
      }
      return true;
    }  
    
    void print() const {
      for (ItemType item : _internalList)
        cout << item << " ";
      cout << endl;
    }
};  
} // namespace csci2100
