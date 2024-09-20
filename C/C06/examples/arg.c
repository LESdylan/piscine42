int main(int argc, char **argv)
{
    int i; 
    i = 0;
    if(argc > 1){
        while(i < argc)
        {
            printf("argv[%d] = %s\n", i, argv[i]);
            i++;
        }
        printf("argv[size - 1] = %s\n", argv[argc]);
        printf("argc = %d", argc);
    }
    else
        printf("The command had no others arguments\n");
    return 0;
}