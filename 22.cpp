// Kuch to ho raha h
#include "LL.cpp"

class stack{
	public:
	Node* top;
	LinkedList l1;
	
	//Construct
	stack(){
		top=l1.head;
	}

	//Functions
	// Upar se daalo
	void push(int value){
		//insertAt(int pos, int value)
		l1.insertAt(1,value);
		// Top = new_head
		top = l1.head;
	}

	//Upar se udao
	void pop(){
		//void deleteAt(int pos)
		l1.deleteAt(1);
		//top = new_head
		top = l1.head;
	}

	//Dabba khali?
	bool isEmpty(){
		if(top == NULL){return true;}
		return false;
	}

	//Kitna lamba h ye?
	void size(){
		//Use countItems
		l1.countItems();
	}

	//Upar kya h?
	void topDisplay(){
		cout << "The top is " << l1.head->data << endl;
	}

	// Aiyyo it's display
	void display(){
		l1.display();
	}
};
