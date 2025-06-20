#include <iostream>

struct Node
{
	int data;
	Node* next;
	Node(int value) : data(value), next(nullptr) {}
	
};
class LinkedList {
	private:
	Node* head;

		
public:
		LinkedList() : head(nullptr) {}	
		void push_front(int value) {

				Node* newNode = new Node(value);
				newNode->next = head;
				
				head = newNode;

	}
		void push_back(int value) {
			Node* newNode = new Node(value);
			if (!head) {
				head = newNode;
				return;
			}
			Node* current = head;
			while (current->next) {
				
				current = current->next;

			}
			
			current->next = newNode;
			
		}
		int find(int index) const {
			Node* current = head;
				size_t i=0;
			while (current) {
				if (i == index) return current->data;
				current = current->next;
				i++;
			}
			throw std::out_of_range("No Such Index");
		}
		int size() const {
			unsigned int count=0;
			Node* current = head;
			while (current) {
				count++;
				current = current->next;
			}
			return count;
		}
		void get_all() const {
			Node* current = head;
			while (current) {
				std::cout << current->data << ' ';
				current = current->next;
				
			}
			std::cout << '\n';
			
				

		}
		int pop_back() {
			if (!head) throw std::runtime_error("There is no data in List");
			if (!head->next) {
				int tmp = head->data;
				delete head;
				head = nullptr;
				
				return tmp;

			}
			Node* current = head;
			while (current->next->next) {
				current = current->next;
			}
			Node* toDelete = current->next;
			int val = toDelete->data;
			current->next = nullptr;
			delete toDelete;
			
			return val;
		}
		void remove(int index) {
			
			if (!head) {
				return ;
			}
			if (0 == index)
			{
				Node* tmp = head;
				head = head->next;
			
				delete tmp;
				return;
			}
			Node* current = head;
			int i = 1;
			while (current->next && i != index) {
				current = current->next;
				i++;
			}
			if (current->next) {
				Node* tmp = current->next;
				current->next = tmp->next;
				
				delete tmp;
			}
		}
		LinkedList& operator=(const LinkedList& other) {
			if (this == &other) return *this;
			Node* current = this->head;
			Node* tmp;
			while (current) {
				tmp = current;
				current = current->next;
				delete tmp;
			}
			head = nullptr;
			if (!other.head) return *this;
			head = new Node(other.head->data);
			Node* fillCur = head;
			Node* currentOther = other.head->next;
			while (currentOther) {
				fillCur->next = new Node(currentOther->data);
				fillCur = fillCur->next;
				currentOther = currentOther->next;
			}
			return *this;
		}
		LinkedList(LinkedList&& other) noexcept : head(other.head) {
			other.head = nullptr;
		}
		LinkedList(const LinkedList& other) : head(nullptr) {
			if (!other.head) return;
			head = new Node(other.head->data);
			Node* current = head;
			Node* currentOther = other.head->next;
			while (currentOther) {
				current->next = new Node(currentOther->data);
				current = current->next;
				currentOther = currentOther->next;
			}
		}
		~LinkedList() {
			Node* current = head;
			while (current){
				
				Node* tmp = current->next;
				delete current;
				current = tmp;
			}
		}
};


