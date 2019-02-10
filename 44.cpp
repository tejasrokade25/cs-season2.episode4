// Kuch to ho raha h
#include"LL.cpp"

class queue{
	public:
	Node* front;
	Node* end;
	LinkedList l1;
	
	//Constructor
	queue(){
		end=l1.head;
		front=l1.tail;
	}

	//End se daalo
	void enqueue(int value){
		//Use insertAt from LL
		l1.insertAt(1,value);
		//Update front and end
		end=l1.head;
		front=l1.tail;

	}

	//Front se udao
	void dequeue(){
		l1.del();
		//You know the drill
		end=l1.head;
		front=l1.tail;
	}

	// Kahin mera queue khali to nhi h????
	bool isEmpty(){
		if(end == NULL){return true;}
		return false;
	}

	//Abe kitni lamba queue h?
	void size(){
		l1.countItems();
	}

	//Dekhe to zara...
	void display(){
		l1.display();
	}

	//End me kya h?
	void enddisp(){
		cout << "The head is " <<l1.head->data << endl;
	}

};
