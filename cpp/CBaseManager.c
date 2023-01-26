#include"CBaseManager.h"

//template<class T>
//T* CBaseManager<T>::m_Instance = NULL;


template<class T>
CBaseManager<T>::CBaseManager(){

}

template<class T>
CBaseManager<T>::~CBaseManager(){

}

template<class T>
T *CBaseManager<T>::GetInstance(){
	if(m_Instance == NULL)
		m_Instance = new T();
	return m_Instance;
}	

template<class T>
void CBaseManager<T>::DestoryInstance(){
	if(m_Instance != NULL)
		delete m_Instance;
}

