#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
void createList(Node** head);
void displayList(Node* head);
void insertAtBeginning(Node** head, int newData);
void insertAtEnd(Node** head, int newData);
void insertBeforeNode(Node** head, int beforeData, int newData);
void insertAfterNode(Node* head, int afterData, int newData);
void deleteFromBeginning(Node** head);
void deleteFromEnd(Node** head);
void deleteAfterNode(Node* head, int afterData);
void deleteEntireList(Node** head);
void menu();

int main() {
    Node* head = NULL;  // Initialize the head of the list to NULL
    int choice, data, beforeData, afterData;

    while (1) {
        menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createList(&head);
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 4:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 5:
                printf("Enter data to insert before: ");
                scanf("%d", &beforeData);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertBeforeNode(&head, beforeData, data);
                break;
            case 6:
                printf("Enter data to insert after: ");
                scanf("%d", &afterData);
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAfterNode(head, afterData, data);
                break;
            case 7:
                deleteFromBeginning(&head);
                break;
            case 8:
                deleteFromEnd(&head);
                break;
            case 9:
                printf("Enter data of the node after which to delete: ");
                scanf("%d", &afterData);
                deleteAfterNode(head, afterData);
                break;
            case 10:
                deleteEntireList(&head);
                break;
            case 11:
                printf("Exiting...\n");
                exit(0);
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Display the menu options
void menu() {
    printf("\n--- Linked List Menu ---\n");
    printf("1. Create a linked list\n");
    printf("2. Display the linked list\n");
    printf("3. Insert at the beginning\n");
    printf("4. Insert at the end\n");
    printf("5. Insert before a node\n");
    printf("6. Insert after a node\n");
    printf("7. Delete from the beginning\n");
    printf("8. Delete from the end\n");
    printf("9. Delete after a node\n");
    printf("10. Delete the entire list\n");
    printf("11. Exit\n");
}

// Create a new linked list
void createList(Node** head) {
    int n, data;
    Node *newNode, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newNode->data = data;
        newNode->next = NULL;

        if (*head == NULL) {
            *head = newNode;
        } else {
            temp = *head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}

// Display all elements of the linked list
void displayList(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    printf("Elements in the linked list:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Insert a node at the beginning
void insertAtBeginning(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Insert a node at the end
void insertAtEnd(Node** head, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Insert a node before a given node
void insertBeforeNode(Node** head, int beforeData, int newData) {
    Node *newNode, *temp = *head, *prev = NULL;

    if (temp == NULL) {
        printf("List is empty\n");
        return;
    }

    if (temp->data == beforeData) {
        insertAtBeginning(head, newData);
        return;
    }

    while (temp != NULL && temp->data != beforeData) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found\n", beforeData);
        return;
    }

    newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next = temp;
    prev->next = newNode;
}

// Insert a node after a given node
void insertAfterNode(Node* head, int afterData, int newData) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = head;

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = newData;
    newNode->next = NULL;

    while (temp != NULL && temp->data != afterData) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Node with data %d not found\n", afterData);
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Delete a node from the beginning
void deleteFromBeginning(Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Delete a node from the end
void deleteFromEnd(Node** head) {
    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    Node *temp = *head, *prev = NULL;

    if (temp->next == NULL) {
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);
}

// Delete a node after a given node
void deleteAfterNode(Node* head, int afterData) {
    Node* temp = head;
    Node* nodeToDelete;

    while (temp != NULL && temp->data != afterData) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("No node found after node with data %d\n", afterData);
        return;
    }

    nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    free(nodeToDelete);
}

// Delete the entire linked list
void deleteEntireList(Node** head) {
    Node* temp = *head;
    Node* nextNode;

    while (temp != NULL) {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    *head = NULL;
    printf("The entire list has been deleted.\n");
}
