/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dylan-soul <dylan-soul@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:17:30 by dylan-soul        #+#    #+#             */
/*   Updated: 2024/09/11 00:51:32 by dylan-soul       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * article ->  https://pvs-studio.com/en/blog/posts/cpp/0640/
 */
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    
}

#define DEST_BUF 10

int main()
{
    char    destBuffer[DEST_BUF];
    char    srcBuffer[256];
    int     i;
    char    c;
    
    for (int j= 0; j<10; ++j)
    {
        // clean the buffer
        for (int i=0; i<256;++i)srcBuffer[i] = 0; for(int i = 0; i<DEST_BUF; ++i)destBuffer[i] = '/';
        //create a random string in buffer
        i = 0;
        while((c = rand()%27+97) != 123)
            srcBuffer[i++] = c;
        //strlcat returns me the bytes concatenated
        printf("\n\n--------------------"
                    "\nRandom source -> %s Len -> %lu"
                    "\n         the size of destBuffer                      ->  %lu"
                    "\n         the len of srcBuffer (return value strlcat) ->  %lu\n",
                    *srcBuffer == 0 ? "empty string" : srcBuffer, strlen(srcBuffer),
                    sizeof(destBuffer), strlcat(destBuffer, srcBuffer, DEST_BUF));
        puts("DEST AFTER ORIGINAL FUNCTION");
            puts(destBuffer);
        //see the bytes
        printf("BYTES FROM DEST\n");
        for(int i = 0; i<DEST_BUF; ++i)destBuffer[i] = '/';
        printf("\n\n---------------------------------------------------------------------------------"
                "\nRandom source -> %s Len -> %lu"
                "\n                 the size of destBuffer                              -> %lu"
                "\n                 the len of srcBuffer (return the value strlcat)     -> %d\n",
                *srcBuffer == 0 ? "empyt string" : srcBuffer, strlen(srcBuffer),
                sizeof(destBuffer), ft_strlcat(destBuffer, srcBuffer, DEST_BUF));
        puts("DEST AFTER MY FUNCTION");
            puts(destBuffer);
        //see the bytes
        printf("BYTES FROM DEST\n");
        for(int i = 0; i < DEST_BUF; ++i)destBuffer[i] == 0 ? printf("\\0") : printf("%c", destBuffer[i]);
        puts("\n"
                "------------------------------------------------------------------------------------\n\n\n\n"
        );
    }
}