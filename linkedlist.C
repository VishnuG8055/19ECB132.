//linked list pratice programs

void doubly_linked_list() {
  printf("\n*** Doubly Linked List ***");
  int choice = 1;
  struct doubly_node *head = NULL, *new_node, *temp;
  
  while (choice == 1) {
    new_node = (struct doubly_node *)malloc(sizeof(struct doubly_node));
    printf("\nEnter node data: ");
    scanf("%d", &new_node->data);
    new_node->next = NULL;
    new_node->prev = NULL;
    
    if (head == NULL) {
      head = temp = new_node;
    } else {
      temp->next = new_node;
      new_node->prev = temp;
      temp = new_node;
    }
    
    printf("\nTo insert a new node press 1 else any other integer: ");
    scanf("%d", &choice);
  } 

  printf("\nThe elements in the Doubly Linked list are...");
  temp = head;
  while (temp != NULL) {
    printf("\n%d", temp->data);
    temp = temp->next;
  }
}
