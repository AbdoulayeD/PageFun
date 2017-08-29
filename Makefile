CC= gcc-7
CXX= g++-7
CFLAGS= -I./headers
EXFLAG= -o
DEPS = customPRImp.h
SOURCE = ./sources/customPRImp.c
TARGET= customPRImp
CLOG= $(TARGET).clog
ELOG= $(TARGET).elog

ALLC: compC execC clean
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

clean:
	rm *.exe
