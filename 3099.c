int sumOfTheDigitsOfHarshadNumber(int x) {
    int temp, digit, sum = 0;

    temp = x;

    while (temp > 0) {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    return x%sum == 0?sum:-1;
}
