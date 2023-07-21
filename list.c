#include<stdio.h>
#include<stdlib.h>

class LinkedList {

	Node head;


	static class Node {

		int data;
		Node next;
		Node(int d)
		{
			this.data = d;
			next = null;
		} // Constructor
	}


	public void printList()
	{
		Node n = head;
		while (n != null) {
			System.out.print(n.data + " ");
			n = n.next;
		}
	}


	public static void main(String[] args)
	{

		LinkedList llist = new LinkedList();


		llist.printList();
	}
}
