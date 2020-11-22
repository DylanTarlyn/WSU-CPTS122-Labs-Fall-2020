#include "Header.h"

// Description: Allocates space for a new Node and inserts the new
// Node into the list in alphabetic order('a' - 'z')
// based on the name field
// Returns: TRUE if memory was allocated for a Node; FALSE
// otherwise

Boolean insertContactInOrder(Node** pList, Contact newData)
{

}

// Description: Deletes a Contact in the list based on the name field;
// deletes the first occurrence of the name
// Returns: TRUE if the Contact was found; FALSE otherwise

Boolean deleteContact(Node** pList, Contact searchContact)
{

}

// Description: Edits a Contact in the list based on the name field; edits
// the first occurrence of the name
// Returns: TRUE if the Contact was found; FALSE otherwise

Boolean editContact(Node* pList, Contact searchContact)
{

}

// Description: Loads all Contact information from the given file, in
// alphabetic order, based on the name, into the list
// Returns: TRUE if all Contacts were loaded; FALSE otherwise

Boolean loadContacts(FILE* infile, Node** pList)
{

}

// Description: Stores all Contact information from the list into the
// given file
// Returns: TRUE if all Contacts were stored; FALSE otherwise


Boolean storeContacts(FILE* infile, Node* pList)
{

}

// Description: Prints all contact information in the list
// Returns: Nothing

void printList(Node* pList)
{

}