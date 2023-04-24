#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);
char** split_string(char*);

int parse_int(char*);

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(int arr_count, int* arr) 
{
    //Sorting the array first
    for(int m=0;m<arr_count;m++)
    {
        for(int n=0;n<arr_count;n++)
        {
            if(arr[m]<arr[n])
            {
                int temp = arr[m];
                arr[m] = arr[n];
                arr[n] = temp;
            }
            
        }
    }
    
    int max=0, max_count=0, count=0;
    // Calculating the highest frequency
    for(int i=0;i<arr_count;i++)
    {
        if(max==arr[i])
            count += 1;
        if(max<arr[i])
        {
            max = arr[i];
            count = 1;
        }
        //printf("%d", max_count);
        if(max_count<count)
            max_count = count;
    }
    
    // for the highest frequency the first type we encounter will the required one
    int sum=0, result=0;
    for(int j=0;j<arr_count;j++)
    {
        for(int k=j;k<max_count+j;k++)
        {
            
            if(arr[k]==arr[j])
            {
                sum += arr[k];
                if(sum%max_count==0 && sum/max_count==arr[k])
                {
                    result = arr[k];
                    break;
                }
            
            }
            else
            {
                sum = 0;
            }
            //printf("%d ", arr[k]);
            //printf("\n%d\n", result);
               
        }
        if(result!=0)
            break;
    }
    
    
    //printf("%d %d %d %d %d\n%d ", arr[0], arr[1], arr[2], arr[3], arr[4], max_count);
    return result;

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    int arr_count = parse_int(ltrim(rtrim(readline())));

    char** arr_temp = split_string(rtrim(readline()));

    int* arr = malloc(arr_count * sizeof(int));

    for (int i = 0; i < arr_count; i++) {
        int arr_item = parse_int(*(arr_temp + i));

        *(arr + i) = arr_item;
    }

    int result = migratoryBirds(arr_count, arr);

    fprintf(fptr, "%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

char** split_string(char* str) {
    char** splits = NULL;
    char* token = strtok(str, " ");

    int spaces = 0;

    while (token) {
        splits = realloc(splits, sizeof(char*) * ++spaces);

        if (!splits) {
            return splits;
        }

        splits[spaces - 1] = token;

        token = strtok(NULL, " ");
    }

    return splits;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}

