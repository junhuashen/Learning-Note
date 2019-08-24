#define complier
NVCC:=nvcc
#define src file
SRC_FILES:=test.cu

#define complie flag
NVCC_FLAGS:=-std=c++11 -lstdc++   -g
#defin include path
NVCC_INCLUDE_PATH:=$(PATH)
#define library path
NVCC_LIBARAY_PATH:=$(LD_LIBRARY_PATH)
#define object
NVCC_OBJ:=$(SRC_FILES:.cu= )
#define temp
NVCC_TEMP:=


#define comand
.PHONY:all,clean

all:
	$(NVCC) -o $(NVCC_OBJ) $(SRC_FILES) -I$(NVCC_INCLUDE_PATH) -L$(NVCC_LIBARAY_PATH) $(NVCC_FLAGS)

clean:
	rm -rf $(NVCC_OBJ) $(NVCC_TEMP)

