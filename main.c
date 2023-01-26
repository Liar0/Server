#include<stdio.h>
#include"CSockManager.h"


#define running true

int main(){
	
	CSockManager* m_sock = CBaseManager<CSockManager>::GetInstance();

	printf("%p\n",m_sock);

	
	return 0;	
}
