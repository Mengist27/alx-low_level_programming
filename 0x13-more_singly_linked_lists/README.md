# The Project Name:- 0x13. C - More singly linked lists

Each Tasks
0. Print list
1. List length :- To write the fuction tha t returns The number of elements in a linked listint_t list using the prototpye size_t listint_len(const listint_t *h);
2. Add node:- To write the function that adds a new node at the beginning of a listint_t list using the prototpye:-  listint_t *add_nodeint(listint_t **head, const int n);
3. Add node at the end:- To write the function that adds a new node at the end of a listint_t list. by using the prototpye:- listint_t *add_nodeint_end(listint_t **head, const int n); and return the address of the new element, or NULL if it failed
4. Free list:- To Write a function that frees a listint_t list. by using the prototpye:- void free_listint(listint_t *head);
5. Free:- to Write the function that frees a listint_t list. by using Prototype: void free_listint2(listint_t **head);  The function sets the head to NULL
6. Pop:- Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n). by using the Prototype: int pop_listint(listint_t **head); and if the linked list is empty return 0.
7. Get node at index:- To Write a function that returns the nth node of a listint_t linked list. by using Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index); and where index is the index of the node, starting at 0 and if the node does not exist, return NULL.
8. Sum list:- To Write a function that returns the sum of all the data (n) of a listint_t linked list. by using the Prototype: int sum_listint(listint_t *head); and if the list is empty, return 0.
9. Insert:- To Write a function that inserts a new node at a given position. by using the Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n); and where idx is the index of the list where the new node should be added. Index starts at 0, Returns: the address of the new node, or NULL if it failed and if it is not possible to add the new node at index idx, do not add the new node and return NULL.
10. Delete at index:- To Write a function that deletes the node at index index of a listint_t linked list. By using the Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
where index is the index of the node that should be deleted. Index starts at 0 and Returns: 1 if it succeeded, -1 if it failed

