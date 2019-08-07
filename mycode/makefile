
CXXFLAGS += -pthread -fPIC $(COMMON_FLAGS) $(WARNINGS) -std=c++11
NVCCFLAGS += -D_FORCE_INLINES -ccbin=$(CXX) -Xcompiler -fPIC $(COMMON_FLAGS) -std=c++11
LINKFLAGS += -pthread -fPIC $(COMMON_FLAGS) $(WARNINGS) -std=c++11

DOC_OUT_TXT=data1.txt 
DOC_SET_OUT=hello_word

clean:
	rm -f $(DOC_OUT_TXT) $(DOC_SET_OUT)
	
