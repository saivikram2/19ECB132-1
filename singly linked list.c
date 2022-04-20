C# implementation to modify the
// contents of the linked list
using System;
 
class GFG
{
     
/* Linked list node */
public class Node
{
    public int data;
    public Node next;
};
 
/* Function to insert a node at
the beginning of the linked list */
static Node push(Node head_ref,
                  int new_data)
{
    /* allocate node */
    Node new_node = new Node();
     
    /* put in the data */
    new_node.data = new_data;
         
    /* link the old list at the end
    of the new node */
    new_node.next = head_ref;
         
    /* move the head to point to the new node */
    head_ref = new_node;
     
    return head_ref;
}
 
static Node front, back;
 
/* Split the nodes of the given list
into front and back halves,
and return the two lists
using the reference parameters.
Uses the fast/slow pointer strategy. */
static void frontAndBackSplit( Node head)
{
    Node slow, fast;
     
    slow = head;
    fast = head.next;
     
    /* Advance 'fast' two nodes, and
    advance 'slow' one node */
    while (fast != null)
    {
        fast = fast.next;
        if (fast != null)
        {
            slow = slow.next;
            fast = fast.next;
        }
    }
     
    /* 'slow' is before the midpoint in the list,
        so split it in two at that point. */
    front = head;
    back = slow.next;
    slow.next = null;
}
 
/* Function to reverse the linked list */
static Node reverseList(Node head_ref)
{
    Node current, prev, next;
    current = head_ref;
    prev = null;
    while (current != null)
    {
        next = current.next;
        current.next = prev;
        prev = current;
        current = next;
    }
    head_ref = prev;
    return head_ref;
}
 
// perform the required subtraction operation
// on the 1st half of the linked list
static void modifyTheContentsOf1stHalf()
{
    Node front1 = front, back1 = back;
     
    // traversing both the lists simultaneously
    while (back1 != null)
    {
        // subtraction operation and node data
        // modification
        front1.data = front1.data - back1.data;
         
        front1 = front1.next;
        back1 = back1.next;
    }
}
 
