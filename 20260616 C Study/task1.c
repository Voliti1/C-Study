#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}node;

typedef struct {
	node* point;
}head_point;

head_point* create_head(void);
void node_Append(head_point* head);
void node_Search(head_point* head);
void node_Insert(head_point* head);
void node_Delete(head_point* head);
void allnode_Print(head_point* head);

int num = 0;
int in_data = 1;

int main() {
	head_point* head = create_head();

	while (num != 6) {
		printf("=== 기능 목록 ===\n1.노드 추가\n2.데이터 검색\n3.노드 삽입\n4.노드 삭제\n5.전체 노드 출력\n6.종료\n");
		printf("사용하실 기능 번호를 입력해 주세요 : ");
		scanf_s("%d", &num);
		printf("\n");
		switch (num) {
		case 1:
			node_Append(head); break;
		case 2:
			node_Search(head); break;
		case 3:
			node_Insert(head); break;
		case 4:
			node_Delete(head); break; 
		case 5:
			allnode_Print(head); break;
		case 6:
			printf("종료합니다.\n"); break;
		}
	}
	
}

head_point* create_head() {
	head_point* head;
	head = (head_point*)malloc(sizeof(head_point)); // 헤드 포인터 타입으로 메모리 할당
	head->point = NULL; // 처음에는 연결된 노드가 없으므로 NULL
	return head;
}

void node_Append(head_point* head) {

	node* newNode;
	node* temp;

	while (1) {
		printf("추가 데이터를 입력하세요(0 : 추가 종료) : ");
		scanf_s("%d", &in_data);

		if (in_data == 0)
			break;

		// 새 노드 생성 및 데이터 저장
		newNode = (node*)malloc(sizeof(node));
		newNode->data = in_data;
		newNode->next = NULL;

		//리스트가 비어있다면 (첫 번째 노드라면)
		if (head->point == NULL) {
			head->point = newNode;
		}
		// 이미 노드가 있다면 맨 뒤를 찾아가서 연결
		else {
			temp = head->point;
			while (temp->next != NULL)
				temp = temp->next;
			temp->next = newNode;
		}
	}
}

void node_Search(head_point* head){
	node* temp;
	int check = 0;
	int input = 0;
	
	if (head->point == NULL){ 
		printf("노드가 존재하지 않아 검색을 진행할 수 없습니다.\n1. 노드 추가를 통해 노드를 생성 후 사용해주세요.\n\n"); 

	}
	else {
		printf("검색하실 값을 입력해주세요 : ");
		scanf_s("%d", &input);

		temp = head->point;
		while(temp != NULL){
			if (input == temp->data) { 
				check = 1;
				printf("주소 %p에 값 %d이/가 저장되어 있습니다.\n", temp, temp->data); 
				break;
			}				
			else {
				temp = temp->next;
			}				
		}	
		if (check == 0) {
			printf("입력하신 값을 리스트에서 찾을 수 없습니다.\n");
		}
	}
}

void node_Insert(head_point* head) {
	node* temp;
	node* prev;
	node* buffer;
	node* newNode;

	int count = 1;
	int input = 0;
	int inputloc = 0;

	if (head->point == NULL) {
		printf("노드가 존재하지 않아 노드 삽입을 진행할 수 없습니다.\n1. 노드 추가를 통해 노드를 생성 후 사용해주세요.\n\n");
		return;
	}
	else {

		temp = head->point;
		printf("노드번호  현재 주소		값	다음 주소\n");
		while (temp != NULL) {
			printf("%d	  %p	%d	%p\n", count, temp, temp->data, temp->next);
			temp = temp->next;
			count++;
		}

		while (inputloc < 1 || inputloc > count)
		{
			printf("\n값을 넣으실 노드번호를 입력해주세요 : ");
			scanf_s("%d", &inputloc);

			if (inputloc < 1 || inputloc > count)
				printf("목록에 있는 노드 번호만 입력해주세요.");
		}
		printf("넣으실 값을 입력해주세요 : ");
		scanf_s("%d", &input);

		count = 1;

		temp = head->point;
		prev = head->point;

		while (temp != NULL) {
			if (count == inputloc) {

				newNode = (node*)malloc(sizeof(node));
				newNode->data = input;

				if(temp == head->point){
					buffer = head->point;
					head->point = newNode;					
					newNode->next = buffer;
				}
				else {
					buffer = prev->next;
					prev->next = newNode;
					newNode->next = buffer;
				}
						
				printf("노드 번호 %d에 값 %d을/를 삽입하였습니다.\n", count, input);

				count = 1;
				temp = head->point;
				printf("노드번호  현재 주소		값	다음 주소\n");
				while (temp != NULL) {
					printf("%d	  %p	%d	%p\n", count, temp, temp->data, temp->next);
					temp = temp->next;
					count++;
				}
				break;

			}
			else {
				prev = temp;
				temp = temp->next;
				count++;
			}
		}

	}
}

void node_Delete(head_point* head) {
	node* temp;
	node* prev;
	node* buffer;

	int count = 1;
	int del = 0;
	int delloc = 0;

	if (head->point == NULL) {
		printf("노드가 존재하지 않아 삭제를 진행할 수 없습니다.\n1. 노드 추가를 통해 노드를 생성 후 사용해주세요.\n\n");
	}
	else {
		temp = head->point;

		printf("노드번호  현재 주소		값	다음 주소\n");
		while (temp != NULL) {
			printf("%d	  %p	%d	%p\n", count, temp, temp->data, temp->next);
			temp = temp->next;
			count++;
		}

		while (delloc < 1 || delloc > count)
		{
			printf("\n삭제하실 노드번호를 입력해주세요 : ");
			scanf_s("%d", &delloc);

			if (delloc < 1 || delloc > count)
				printf("목록에 있는 노드 번호만 입력해주세요.");
		}

		count = 1;
		temp = head->point;
		prev = head->point;
		
		while (temp != NULL) {
			if (count == delloc) {

				if (temp == head->point) {
					head->point = temp->next;
				}
				else {
					prev->next = temp->next;
				}

				printf("%d번 노드를 삭제하였습니다.\n", count);

				count = 1;
				temp = head->point;
				printf("노드번호  현재 주소		값	다음 주소\n");
				while (temp != NULL) {
					printf("%d	  %p	%d	%p\n", count, temp, temp->data, temp->next);
					temp = temp->next;
					count++;
				}
				break;

			}
			else {
				prev = temp;
				temp = temp->next;
				count++;
			}
		}
	}
}

void allnode_Print(head_point* head) {
	node* temp;
	int count = 1;

	if (head->point == NULL) {
		printf("노드가 존재하지 않아 출력할 내용이 없습니다.\n1. 노드 추가를 통해 노드를 생성 후 사용해주세요.\n\n");
	}
	else {
		temp = head->point;
		printf("노드번호  현재 주소		값	다음 주소\n");
		while (temp != NULL) {
			printf("%d	  %p	%d	%p\n", count, temp, temp->data, temp->next);
			temp = temp->next;
			count++;
		}
	}
}