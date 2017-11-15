#pragma once
#include "StackOverflowException.h"
#include "StackUnderflowException.h"

namespace StackExercise
{
	const int STACK_SIZE = 10;

	template<typename T>
	class IntStack
	{
	public:
		IntStack();

		void Push(T val);
		T Pop();

	private:
		T m_impl[STACK_SIZE];
		int m_nextIndex;
	};

	template<typename T>
	IntStack<T>::IntStack()
		: m_nextIndex(0)
	{}

	template<typename T>
	void IntStack<T>::Push(T val)
	{
		if (m_nextIndex < STACK_SIZE)
		{
			m_impl[ m_nextIndex ] = val;
			++m_nextIndex;
		}
		else
		{
			throw StackOverflowException();
		}
	}

	template<typename T>
	T IntStack<T>::Pop()
	{
		if (m_nextIndex > 0)
		{
			--m_nextIndex;
			return m_impl[ m_nextIndex ];
		}
		else
		{
			throw StackUnderflowException();
		}
	}
}