CC = g++
CFLAGS = -std=c++11 -Wall

# List of source files
SRCS = main.cpp HotelManager.cpp

# Generate the object file names
OBJS = $(SRCS:.cpp=.o)

# Output executable name
TARGET = hotel_management.exe

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del $(OBJS) $(TARGET)
