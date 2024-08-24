#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the circular linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Function prototypes
void createList(Node** head);
void displayList(Node* head);
void insertAtBeginning(Node** head, int data);
void insertAtEnd(Node** head, int data);
void deleteFromBeginning(Node** head);
void deleteFromEnd(Node** head);
void deleteAfterNode(Node* head, int afterData);
void deleteEntireList(Node** head);
void menu();

int main() {
    Node* head = NULL;  // Initialize the head of the list to NULL
    int choice, data, afterData;

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
                printf("Enter data after which to delete: ");
                scanf("%d", &afterData);
                deleteAfterNode(head, afterData);
                break;
            case 6:
                deleteFromBeginning(&head);
                break;
            case 7:
                deleteFromEnd(&head);
                break;
            case 8:
                deleteEntireList(&head);
                break;
            case 9:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

// Display the menu options
void menu() {
    printf("\n--- Circular Linked List Menu ---\n");
    printf("1. Create a circular linked list\n");
    printf("2. Display the circular linked list\n");
    printf("3. Insert a node at the beginning\n");
    printf("4. Insert a node at the end\n");
    printf("5. Delete a node after a given node\n");
    printf("6. Delete a node from the beginning\n");
    printf("7. Delete a node from the end\n");
    printf("8. Delete the entire circular linked list\n");
    printf("9. Exit\n");
}

// Create a new circular linked list
void createList(Node** head) {
    int n, data;
    Node *newNode, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Number of nodes must be positive.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        newNode = (Node*)malloc(sizeof(Node));
        if (newNode == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);
        newNode->data = data;

        if (*head == NULL) {
            *head = newNode;
            newNode->next = *head;
        } else {
            temp = *head;
            while (temp->next != *head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = *head;
        }
    }
}

// Display all elements of the circular linked list
void displayList(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
        return;
    }
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(head)\n");
}

// Insert a node at the beginning of the circular linked list
void insertAtBeginning(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *head;

    if (*head == NULL) {
        *head = newNode;
        newNode->next = *head;
    } else {
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        *head = newNode;
    }
}

// Insert a node at the end of the circular linked list
void insertAtEnd(Node** head, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = *head;

    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = *head;

    if (*head == NULL) {
        *head = newNode;
    } else {
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Delete a node from the beginning of the circular linked list
void deleteFromBeginning(Node** head) {
    Node* temp = *head;
    Node* last;

    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    if (temp->next == *head) {  // Only one node
        free(temp);
        *head = NULL;
    } else {
        last = *head;
        while (last->next != *head) {
            last = last->next;
        }
        *head = temp->next;
        last->next = *head;
        free(temp);
    }
}

// Delete a node from the end of the circular linked list
void deleteFromEnd(Node** head) {
    Node* temp = *head;
    Node* prev = NULL;

    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    if (temp->next == *head) {  // Only one node
        free(temp);
        *head = NULL;
        return;
    }

    while (temp->next != *head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = *head;
    free(temp);
}

// Delete a node after a given node in the circular linked list
void deleteAfterNode(Node* head, int afterData) {
    Node* temp = head;
    Node* nodeToDelete;

    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    do {
        if (temp->data == afterData) {
            nodeToDelete = temp->next;
            if (nodeToDelete == head) {
                printf("No node to delete after node with data %d\n", afterData);
                return;
            }
            temp->next = nodeToDelete->next;
            free(nodeToDelete);
            return;
        }
        temp = temp->next;
    } while (temp != head);

    printf("Node with data %d not found\n", afterData);
}

// Delete the entire circular linked list
void deleteEntireList(Node** head) {
    Node* temp = *head;
    Node* nextNode;

    if (*head == NULL) {
        printf("The list is empty.\n");
        return;
    }

    do {
        nextNode = temp->next;
        free(temp);
        temp = nextNode;
    } while (temp != *head);

    *head = NULL;
    printf("The entire list has been deleted.\n");
}
