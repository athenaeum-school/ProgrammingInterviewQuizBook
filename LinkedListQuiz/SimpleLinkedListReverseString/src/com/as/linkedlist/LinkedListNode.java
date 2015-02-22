package com.as.linkedlist;

public class LinkedListNode<E> {
	
	private Node<E> head;
	
	private static class Node<E>
	{
		E value;
		Node<E> next;
		
		public Node() {
			this.value = null;
			this.next = null;
		}
		
		public Node(E value) {
			this.next = null;
			this.value = value;
		}
		
		public E getValue() {
			return this.value;
		}
		
		public void setValue(E value) {
			this.value = value;
		}
		
		public Node<E> getNext() {
			return this.next;
		}
		
		public void setNext(Node<E> next) {
			this.next = next;
		}
	}
	
	public LinkedListNode() 
	{
		head = new Node<E>();
	}
	
	public void push(E value)
	{
		Node<E> newNode = new Node<E>(value);
		Node<E> tmp = new Node<E>();
		tmp = head;
		if (head.value == null) {
			head.value = value;
		} else {		
			while(tmp.getNext() != null) {
				tmp = tmp.getNext();
			}
			tmp.setNext(newNode);
		}
	}
	
	public void reverse()
	{
		Node<E> rhead = null;
		Node<E> node = head;
		Node<E> prev = null;
		while(node != null) {
			Node<E> next = node.getNext();
			if(next == null) {
				rhead = node;
			}
			node.setNext(prev);;
			prev = node;
			node = next;
		}
		head = rhead;
	}
}
