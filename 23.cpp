//#include<iostream>
//#include<queue>
//using namespace std;
//#include<vector>
// struct ListNode {
//     int val;
//     ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
// //class Solution {
// //public:
//
//	// bool isAllNull(vector<ListNode*>& lists)
//	// {
//	//	 for (int i = 0; i<lists.size(); i++)
//	//	 {
//	//		 if (lists.at(i) != NULL)return false;
//	//	 }
//	//	 return true;
//	// }
//	// ListNode* mergeKLists(vector<ListNode*>& lists) {
//
//
//	//	 int list_len = lists.size();
//	//	 ListNode* head = NULL, *temp = NULL, *temp1 = NULL;
//	//	 int i = 0;
//	//	 while (!isAllNull(lists))
//	//	 {
//	//		 for (i = 0; i<list_len; i++)
//	//		 {
//	//			 if (lists.at(i) != NULL)
//	//			 {
//	//				 if (temp == NULL)
//	//				 {
//	//					 temp = lists.at(i);
//	//				 }
//	//				 else if (temp->val>lists.at(i)->val)
//	//				 {
//	//					 temp = lists.at(i);
//	//				 }
//
//	//			 }
//	//		 }
//	//		 if (temp == NULL)return head;
//	//		 else
//	//		 {
//	//			 if (head == NULL)
//	//			 {
//	//				 head = temp;
//	//				 temp1 = temp;
//	//				 temp = temp->next;
//	//				 lists.at(i) = temp;
//	//			 }
//	//			 else
//	//			 {
//	//				 temp1->next = temp;
//	//				 temp1 = temp;
//	//				 temp = temp->next;
//	//				 lists.at(i) = temp;
//	//			 }
//	//		 }
//	//	 }
//	//	 return head;
//	// }
// //};
//
//
// struct Info
// {
//	 int idx;
//	 ListNode* node;
//	 bool operator < (const Info& a)const
//	 {
//		 return a.node->val < node->val;
//	 }
// };
// class Solution
// {
// public:
//
//	 ListNode* mergeKLists(vector<ListNode*>& lists)
//	 {
//		 priority_queue<Info> q;
//		 int len = lists.size();
//		 Info info;
//		 for (int i = 0; i < len; i++)
//		 {
//			 if (lists[i] != NULL)
//			 {
//				 info.idx = i;
//				 info.node = lists[i];
//				 q.push(info);
//			 }
//		 }
//		 ListNode*head = NULL, *temp = NULL;
//
//		 while (!q.empty())
//		 {
//			 if (head == NULL)
//			 {
//				 temp = q.top().node;
//				 head = temp;
//			 }
//			 else
//			 {
//				 temp->next = q.top().node;
//				 temp = temp->next;
//			 }
//			 int idx = q.top().idx;
//			 q.pop();
//			 lists[idx] = lists[idx]->next;
//			 if (lists[idx] != NULL)
//			 {
//				 info.idx = idx;
//				 info.node = lists[idx];
//				 q.push(info);
//			 }
//
//		 }
//
//		 return head;
//	 }
// };
//
//int main()
//{
//
//	vector<ListNode*> lists;
//	ListNode*head1, *head2, *head3;
//	head1 = new ListNode(1);
//	head1->next = new ListNode(4);
//	head1->next->next = new ListNode(5);
//
//	head2 = new ListNode(1);
//	head2->next = new ListNode(3);
//	head2->next = new ListNode(4);
//
//	head3 = new ListNode(2);
//	head3->next = new ListNode(6);
//	lists.push_back(head1);
//	lists.push_back(head2);
//	lists.push_back(head3);
//
//	Solution solver;
//	solver.mergeKLists(lists);
//	return 0;
//}