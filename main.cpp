//Lab Exercise 7 - Ahmed Mohamed COSC 2P95 Nov 2018
#include <iostream>
#include "PriorityQueue.h"
#include <string>

using namespace std;

int main(){
	/*Note: Min priority value is 1 (highest priority)*/
	string s; //data
	int p;	  //priority
	int input;	//0:quit, 1:enqueue, 2:dequeue, 3:peak, 4:isEmpty
	/*Intialize Queue*/
	cout<<"Welcome. Note: Max is 1000. Priority must be less than 1000."<<endl<<endl;
	PriorityQueue<string,1000> queue;
	/*Recieve first value*/
	cout<<"What would you like to start the queue with? (Type String value)"<<endl;
	cin>>s;
	cout<<endl;
	cout<<"What would you like the priority (lower precendence) of this value to be? (Type number greater than or equal to 1)"<<endl;
	cin>>p;
	cout<<endl;
	/*Populate First Value*/
	queue.enqueue(s,p);	//enqueue
	bool running;
	running = true;
	/*Run until user quits*/
	while (running){
		cout<<endl;
		cout<<"What would you like to do? (Type Number -> 0:Quit, 1:Enqueue, 2:Dequeue, 3:Peak, 4:isEmpty)"<<endl;
		cin>>input;
		/*Quit(0)*/
		if (input == 0){
			cout<<"Quiting..."<<endl;
			running = false;
			break;
		}
		/*Enqueue(1)*/
		else if (input == 1){
			cout<<endl;
			cout<<"What would you like to add to the queue? (Type String value)"<<endl;
			cin>>s;
			cout<<"What would you like the priority (lower precendence) of this value to be? (Type number greater than or equal to 1)"<<endl;
			cin>>p;
			queue.enqueue(s,p);	//enqueue
		}
		/*Dequeue(2)*/
		else if (input == 2){
			cout<<endl;
			cout<<"Value removed: "<<queue.dequeue()<<endl;
		}
		/*Peak(3)*/
		else if (input == 3){
			cout<<endl;
			cout<<"Peak (Front of Queue): "<<queue.peak()<<endl;
		}
		/*isEmpty(4)*/
		else if (input == 4){
			cout<<endl;
			cout<<"The queue is ";
			if (queue.isEmpty() == true){
				cout<<"empty."<<endl;
			}
			else{
				cout<<"not empty"<<endl;
			}
		}

	} //while

	return 0;

} //main
