echo '#include <stdio.h>
int main (void) {
    int x = 1;
    return 0;
}' | awk '{
    print;
    if (substr($0,0,11) == "int main (") {
        print "    initialize();"
    }
}'
