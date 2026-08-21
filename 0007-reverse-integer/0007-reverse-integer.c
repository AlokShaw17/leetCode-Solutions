int reverse(int x) {
    long long s = 0;

    while (x != 0) {
        s = s * 10 + x % 10;
        x /= 10;
    }

    if (s > 2147483647 || s < -2147483648)
        return 0;

    return (int)s;
}