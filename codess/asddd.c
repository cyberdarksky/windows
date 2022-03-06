#include <stdio.h> 
int main(){

        printf("\n[%d] " GREEN("Sub Menu1") "\n[%d] " GREEN("Save Text") "\n[%d] " GREEN("Exit") "\n > ", 1, 2, 3);

        scanf("%d", &selectedOption);

        switch (selectedOption)
        {
        case 1:
            (*ptr)();
            break;
        case 2:
            printf("\nEnter filename: ");
            scanf("%s", &filename);
            char *fil3name = filename;
            char *local_file = ("./%s",fil3name);
            char *ts2 = strdup(local_file);
            char *file_name = basename(ts2);
            printf(file_name);
            printf("Enter a sentence:\n");
            scanf("%s", &sentence);
            SaveTextIntoFile(sentence);
            break;
        case 3:
            printf("Bye bye");
            toolsBool = false;
            break;
        default:
            break;
        }
    
}