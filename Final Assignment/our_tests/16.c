int a[12];
main () {
    int b[12];
    b[0] = 1;
    b[1] = a[2];
    b[2] = b[0] + b[1];
    b[3] = a[1 + 3];
    b[4] = b[3] + b[2 + a[0]];
    printf("%d\n", b[4]);
}