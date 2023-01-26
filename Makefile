BINOUT := test
#依赖的动态库或静态库
LIBS := 

#头文件路径
INCS :=  ./  \
	 ../common/include \
	 ./include 

#动态库或静态库文件的相对路径
LIBPATHS := ./lib \
	    ./libpaths
    
    #编译源程序时所使用的宏
USED_MARCOS := _LINUX_OS_ _UNIT_TEST_

#所使用的编译器
GCC = g++
#编译时的参数配置
CFLAGS = -g -Wall -O2  

#编译时所依赖的通用c++源程序
COMMONSRCS=$(wildcard ../common/src/*.cpp ../abc/src/*.cpp)
COMMONOBJS=$(patsubst %.cpp,%.o,$(COMMONSRCS))

#源程序文件
SOURCE := $(wildcard ./*.cpp)  
OBJS := $(patsubst %.cpp,%.o,$(SOURCE))

all:$(BINOUT)

$(BINOUT): $(OBJS) $(COMMONOBJS)
	    $(GCC) $(CFLAGS) -o $@ $^   $(addprefix -L,$(LIBPATHS)) $(addprefix -l,$(LIBS)) 
	      
%.o:%.cpp
	    $(GCC) $(CFLAGS) $(addprefix -D,$(USED_MARCOS)) $(addprefix -I,$(INCS)) -c $< -o $@


clean :  
	    rm -rf $(COMMONOBJS) $(OBJS) $(BINOUT)
