// Specification file for the Llist class
#ifndef Llist_H
#define Llist_H
typedef int ElementType;
class Llist
{
private:
   // Declare a structure for the list
   struct ListNode
   {
      ElementType value;           // The value in this node
      struct ListNode *next;  // To point to the next node
   }; 

   ListNode *head;            // List head pointer

public:
   // Constructor
   Llist() { head = NULL; }
      
   // Destructor
   ~Llist();
      
   // Linked list operations
   void appendNode(ElementType e);
   void insertNode(ElementType e);
   void deleteNode(ElementType e);
   void displayList() const;
};
#endif
