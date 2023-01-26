#ifndef _CSOCKMANAGER_H_
#define _CSOCKMANAGER_H_

#include"CBaseManager.h"
#include<stdio.h>

class CSockManager{
	public:
		void Print();
		friend class CBaseManager<CSockManager>;
	private:
		CSockManager();
		~CSockManager();


};





#endif
