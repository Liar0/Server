#ifndef _CBASEMANAGER_H_
#define _CBASEMANAGER_H_

#include<stdio.h>

template<class T>
class CBaseManager{
	public:
		static T *GetInstance();
		static void DestoryInstance();
	protected:
		CBaseManager();
		~CBaseManager();
		static T *m_Instance;
		
};

template<class T>
T* CBaseManager<T>::m_Instance = NULL;

#endif
