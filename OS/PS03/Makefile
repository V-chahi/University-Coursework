CC = gcc
CFLAGS = -Wall -lm -lpthread
TARGET = pdi_numbers
PYTHON = python3
C_SRC = pdi_numbers.c
PY_SCRIPT = plot_results.py
RESULTS_FILE = execution_times.txt

# Default target
all: $(TARGET)

$(TARGET): $(C_SRC)
	$(CC) $(C_SRC) -o $(TARGET) $(CFLAGS)

# Rule to run the C program w/ different thread counts
# and collect execution times
run-tests: $(TARGET)
	echo "Threads Execution_Time" > $(RESULTS_FILE)
	for t in 1 2 4 8 16; do \
		echo "Running with $$t threads..."; \
		./$(TARGET) -s 1 -e 1000000 -t $$t | grep "Execution time" | awk -v threads=$$t '{print threads, $$3}' >> $(RESULTS_FILE); \
	done

# Rule to plot the results using Python script
plot: run-tests
	$(PYTHON) $(PY_SCRIPT)

# Clean the build and generated files
clean:
	rm -f $(TARGET) $(RESULTS_FILE)

