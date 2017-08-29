DIR= /Users/diarafdiop/Documents/machineLearningCode/PageRank
DATA_DIR= /Users/diarafdiop/Documents/machineLearningCode/datasets/PageRank
CC= gcc-7
CXX= g++-7
CFLAGS= -I./headers
EXFLAG= -o
DEPS = customPRImp.h
SOURCE = ./sources/customPRImp.c
TARGET= customPRImp
CLOG= $(TARGET).clog
ELOG= $(TARGET).elog


ALLC: compC execC
ALLCXX: compCXX execCXX clean

compC:
	$(CC) $(CFLAGS) $(SOURCE) $(EXFLAG) $(TARGET).exe > $(CLOG)

execC:
	./$(TARGET).exe > $(ELOG)

compCXX:
	$(CXX) $(CFLAGS) $(SOURCE) $(EXFLAG) $(TARGET).exe > $(CLOG)

execCXX:
	./$(TARGET).exe > $(ELOG)

show:
	vim $(ELOG) 

printData:
	vim $(DATA_DIR)/hollins.dat
clean:
	rm *.exe
	rm *log
