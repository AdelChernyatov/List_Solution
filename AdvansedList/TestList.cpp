#include "TestList.h"
#include <iostream>
#include <list>
namespace ListSpace
{
	namespace TestList
	{
		void test1()
		{
			ListSpace::List l{ "Adel",100 };
			std::cout << "My name is " << l.name << ";my mark is " << (int)l.mark
				<< std::endl;
			std::cout << sizeof(l)<<std::endl;
		}
		
		void test2() 
		{
			/*ListSpace::List l{ "Adel",100 };
			l.next = new List{ "Max",50 };
			std::cout << "My name is " << l.next -> name << ";my mark is " << (int)l.next -> mark
				<< std::endl;*/

			List* head{nullptr};  // ������� ��������� - �������� 8 ����
			head = new List{ "Artur", 100 };
			List ez{ "Dasha",56 };
			//head->next = &ez;		// & - ���������, � ��� ������� �� ����� �����
			(*head).next = &ez;        // ���������� ���� List or head -> next
			List* root{ head };
			while (root != nullptr)
			{
				std::cout << "My name is " << (*head).name << ";my mark is " << (int)(*head).mark
					<< std::endl;
				root = root->next;
				root->name;
				root->mark;				// root = root -> next-> next �������� ����� ����, �� ����������� ������� & root-> next != nullptr
			}
			
			
		}
		void test3()
		{
			l = make_list(); // ������� ������
			make_list();
			{
				list <int> this_list = { 1,2,3,4 };
			}
			bool f = has_loop(l); // ��������� ���� �� ����

			bool has_loop(List* head);      // ��� ������ ��������� ������� ������ � ����� �������� �� leetcode
			{
				int t = 0;
				int h = 0;
				while (root != nullptr)
				{
					
				}
				return false;
			}
		};



	} // Testlist
} // Listspace