#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char* answers[] = {
    "It is certain.",
    "It is decidedly so.",
    "Without a doubt.",
    "Yes definitely.",
    "You may rely on it.",
    "As I see it, yes.",
    "Most likely.",
    "Outlook good.",
    "Yes.",
    "Signs point to yes.",
    "Reply hazy, try again.",
    "Ask again later.",
    "Better not tell you now.",
    "Cannot predict now.",
    "Concentrate and ask again.",
    "Don't count on it.",
    "My reply is no.",
    "My sources say no.",
    "Outlook not so good.",
    "Very doubtful."
};

int main(int argc, char *argv[]) {
    srand(time(NULL));

    if (argc < 2) {
        printf("usage: %s \"<your question here>\"\n", argv[0]);

        if (rand() % 10 == 0)  {
            printf("warning: do not drink the blue liquid inside! ;)\n");
        }
        return -1;
    }

    int length = sizeof(answers) / sizeof(answers[0]);
    printf("%s\n", answers[rand() % length]);

    return 0;
}
