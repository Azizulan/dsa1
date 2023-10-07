Certainly, here's a `README.md` file that provides an overview of your C program for sorting algorithms and the changes you made to allow input from a text file:

```markdown
# Sorting Algorithms in C

This C program demonstrates the implementation of three sorting algorithms: Bubble Sort, Insertion Sort, and Selection Sort. It also includes a menu-driven interface that allows the user to choose a sorting algorithm and the sorting order (ascending or descending). Additionally, it provides the capability to read input data from a text file, making it easier to work with larger datasets.

## Table of Contents

- [Getting Started](#getting-started)
- [Usage](#usage)
- [File Input](#file-input)
- [Sorting Algorithms](#sorting-algorithms)
- [Contributing](#contributing)
- [License](#license)

## Getting Started

To use this program, you should have a C compiler installed on your system. You can compile and run the program with the following steps:

1. Clone the repository to your local machine:

   ```bash
   git clone https://github.com/Azizulan/dsa1
   ```

2. Change to the project directory:

   ```bash
   cd dsa1
   ```

3. Compile the C code:

   ```bash
   gcc Practice.c -o sorting
   ```

4. Run the program:

   ```bash
   ./sorting
   ```

## Usage

Once the program is running, it will prompt you with a menu-driven interface where you can select the sorting algorithm and the sorting order. Here's how to use it:

1. Enter the name of the input file containing your data. The file should have one number per line.

2. Select a sorting algorithm from the menu:
   - 1 for Bubble Sort
   - 2 for Insertion Sort
   - 3 for Selection Sort

3. Choose the sorting order:
   - 1 for Ascending
   - 2 for Descending

4. The program will perform the selected sorting algorithm on the data and display the sorted array.

## File Input

To use your own dataset, create a text file with your data. Each number should be on a separate line in the file. The program will read this file and sort the data accordingly.

Example input file (input.txt):

```
5
12
1
8
3
```

## Sorting Algorithms

The program provides implementations of three sorting algorithms:

- Bubble Sort
- Insertion Sort
- Selection Sort

You can choose any of these algorithms to sort your data.

## Contributing

Contributions are welcome! If you'd like to improve this program or add new features, please fork the repository and create a pull request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
```
