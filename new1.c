int main(int argc, char **argv) {
 int i = 0;
 for (i = 0; i < 1000000; i++) {
 malloc(32);
 }
 exit (0);
}

