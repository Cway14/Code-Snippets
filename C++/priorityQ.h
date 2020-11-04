class priorityQueue{
private:
	std::vector<int> Queue;

public:
	priorityQueue(){
		
	}
	void insert(int x){ 
		Queue.push_back(x);
		for(int i = Queue.size()-1; i >=0 ; i--){
			if (x > Queue.at(i)){
				Queue.at(i+1) = Queue.at(i);
				Queue.at(i) = x;
			}
		}
	}

	int removeMin(){
		int min = Queue.at(Queue.size()-1);
		Queue.pop_back();
		return min;
	}

	void print(){
		for(int i = 0; i < Queue.size(); i++){
			printf("%d \n", Queue.at(i));
		}
	}
	bool isEmpty(){
		return Queue.size() == 0;
	}

};