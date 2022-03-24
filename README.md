## Introduction
This project is part off [19school42's](https://www.facebook.com/19network42/) curriculum. It's my first encounter with using static variables and on how to write code using dynamically allocated memory without memory leaks.

## Project description:
* Follow the school's [norm](https://github.com/42School/norminette). E.g. I can only use while loops. 
* prototype of my function: `char *get_next_line(int fd)`
* repeated calls to get_next_line() functions should read the text file pointed to by the file descriptor, one line at a time. The function should return the line that was read. If there is nothing else to read or if an error occurred, it should return NULL.
* The returned line should include the terminating '\n' character except if the end of the file was reached and does not end with '\n'.

## Approach:
- [x] Get data from document
- [x] Loop through data to see if there is a '\n' or EOF (end of file).
- [x] If no then store data in static variable buffer. Use ft_strjoin() to join current data with new data. Repeat untill you reach '\n'
- [x] If yes then also store data in buffer using ft_strjoin() and loop trough updated buffer to substring from buffer[0] till buffer[i]=='\n'
- [x] Then update buffer by deleting substring from buffer
- [x] Repeat untill you reach EOF
