#pragma once
#include <string>
namespace ListSpace
{
	using Mark = unsigned char;
	struct List  // ��� public, � ������ - privat
	{
		std::string name;
		Mark mark;
		List* next;
		List(const std::string& name = "",
			Mark mark = 0,
			List* next = nullptr) noexcept; // noexcept - �� ����� ����������� ����������
	};


} // ListSpace


