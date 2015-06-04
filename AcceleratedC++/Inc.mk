CXX=g++
CC=gcc

CFLAGS=-g -O2 -pipe -W -Wall -fPIC
CXXFLAGS=-g -O2 -pipe -W -Wall -fPIC -finline-functions -Winline -Wreturn-type -Wtrigraphs -Wformat -Wparentheses -Wpointer-arith
LDFLAGS=-g 

ifndef LIB_PATH
	LIB_PATH=$(PWD)
endif

3RD_PATH=$(LIB_PATH)/3rd

ifndef 3RD_LIB_DIST_PATH
	3RD_LIB_DIST_PATH=$(3RD_PATH)
endif

GTEST_PATH=$(3RD_LIB_DIST_PATH)/gtest-1.7.0
GTEST_FILE=$(3RD_PATH)/gtest-1.7.0.zip
GTEST_LIB=$(GTEST_PATH)/lib/.libs/libgtest.a $(GTEST_PATH)/lib/.libs/libgtest_main.a

INCS=-I$(GTEST_PATH)/include -I$(LIB_PATH)/src

INSTALL_DIR=$(LIB_PATH)

LIBS= -L$(INSTALL_DIR) -lpthread -lrt -ldl
#LIBS= -L$(INSTALL_DIR) -lpthread -lrt -ltcmalloc -lprofiler

