#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "linkedList.h"


struct Node *IndexAt(struct Node *head, int index) {
    if (head == NULL || index < 0)
        return NULL;
    else {
        struct Node* current_node = head->next;
        for (int i = 0; i < index; i++) {
            if (current_node == NULL)
                return NULL;
            current_node = current_node->next;
        }
        return current_node;
    }
}

struct Node *Last(struct Node *head) {
    if (head == NULL)
        return NULL;
    else {
        struct Node* last_node = head;
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            last_node = current_node;
            current_node = current_node->next;
        }
        return last_node;
    }
}

int Size(struct Node *head) {
    if (head == NULL)
        return -1;
    else {
        int size = 0;
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            current_node = current_node->next;
            size++;
        }
        return size;
    }
}

int Insert(struct Node *head, int data, int index) {
    if (head == NULL || index < 0 || index > Size(head))
        return -1;
    else {
        struct Node* next_node = IndexAt(head, index);
        if (next_node == NULL)
            return InsertEnd(head, data);
        else {
            struct Node* prev_node = next_node->prev;
            struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
            if (new_node == NULL)
                return -1;
            new_node->data = data;
            new_node->prev = prev_node;
            new_node->next = next_node;

            prev_node->next = new_node;
            next_node->prev = new_node;
            return data;
        }
    }
}

int InsertEnd(struct Node *head, int data) {
    if (head == NULL)
        return -1;
    else {
        struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
        if (new_node == NULL)
            return -1;
        new_node->data = data;
        new_node->next = NULL;

        struct Node* last_node = Last(head);
        last_node->next = new_node;
        new_node->prev = last_node;
        return data;
    }
}

int Remove(struct Node *head, int index) {
    if (head == NULL)
        return -1;
    else {
        struct Node* delete_node = IndexAt(head, index);
        if (delete_node == NULL)
            return -1;
        else {
            int data = delete_node->data;
            delete_node->prev->next = delete_node->next;
            if (delete_node->next != NULL)
                delete_node->next->prev = delete_node->prev;

            delete_node->prev = NULL;
            delete_node->next = NULL;
            free(delete_node);
            delete_node = NULL;
            return data;
        }
    }
}

int Print(struct Node *head) {
    if (head == NULL)
        return -1;
    else {
        struct Node* current_node = head->next;
        while (current_node != NULL) {
            printf("%d -> ", current_node->data);
            current_node = current_node->next;
        }
        printf("END\n");
        return 0;
    }
}


int main(void) {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    if (head == NULL) return -1;
    head->prev = NULL;
    head->next = NULL;
    head->data = 0;

    printf("=== 삽입 테스트 ===\n");
    InsertEnd(head, 10);
    InsertEnd(head, 20);
    InsertEnd(head, 30);
    InsertEnd(head, 40);
    InsertEnd(head, 50);
    Print(head);

    printf("\n=== 중간 삽입 테스트 (index 2에 99 삽입) ===\n");
    Insert(head, 99, 2);
    Print(head);

    printf("\n=== 맨 앞 삽입 테스트 (index 0에 11 삽입) ===\n");
    Insert(head, 11, 0);
    Print(head);

    printf("\n=== Size 테스트 ===\n");
    printf("Size: %d\n", Size(head));

    printf("\n=== IndexAt 테스트 ===\n");
    struct Node* node = IndexAt(head, 3);
    if (node != NULL)
        printf("index 3의 값: %d\n", node->data);

    printf("\n=== 삭제 테스트 (index 0 삭제) ===\n");
    int removed = Remove(head, 0);
    printf("삭제된 값: %d\n", removed);
    Print(head);

    printf("\n=== 중간 삭제 테스트 (index 2 삭제) ===\n");
    removed = Remove(head, 2);
    printf("삭제된 값: %d\n", removed);
    Print(head);

    printf("\n=== 마지막 삭제 테스트 (index 4 삭제) ===\n");
    removed = Remove(head, 4);
    printf("삭제된 값: %d\n", removed);
    Print(head);

    printf("\n=== 잘못된 접근 테스트 ===\n");
    printf("index 99 접근: %d\n", Remove(head, 99));
    printf("index -1 접근: %d\n", Remove(head, -1));

    while (Size(head) > 0)
        Remove(head, 0);
    free(head);

    return 0;
}