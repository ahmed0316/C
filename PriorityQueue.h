//Lab Exercise 7 - Ahmed Mohamed COSC 2P95 Nov 2018
template <typename T, int capacity>

class PriorityQueue {


private:
	T data[capacity];	//data items
	int priority[capacity]; //capacities
	int numItems;
	// dataIndex is 0;
	// priorityIndex is 1;

public:
	PriorityQueue() : numItems(0) {}
	void enqueue(T item, int p) {
		if (priority[0] > 0){ //head's priority > 0 (not first item & valid)
			int i = 0;			
			while(priority[i] > 0 && (p >= priority[i]) && i <= numItems){
				i++; //find spot to insert (i)
			}
			data[i] = item;     //data
			priority[i] = p; //priority
			numItems++;
		}
		else {	//first item (was empty)
			data[0] = item;
			priority[0] = p;
			numItems++;
		}
	} //enqueue.


	T dequeue() {
		if (priority[0] > 0){ //head's priority > 0
			T returnVal = data[0];
			for (int i = 0 ; i < capacity - 1 ; i++){ //remove val from front.
				data[i] = data[i+1]; //data
				priority[i] = priority[i+1]; //priority
			} 
			numItems--;
			return returnVal;	//return deleted val
		}
		else {	//invalid
			return data[0]; //failed
		}
	} //dequeue.



	T peak() {
		return data[0];
	} //peak.


	int count() {
		return numItems;
	} //count.



	bool isEmpty() {
		if ( numItems <= 0 ){
			return true;
		}
		else {
			return false;
		}
	} //isEmpty.


}; //Queue
