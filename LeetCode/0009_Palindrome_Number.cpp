
        // Reverse only half of the number
        while (x > reverse) {
            int digit = x % 10;
            reverse = reverse * 10 + digit;
            x = x / 10;
        }

        // Even digits: x == reverse
        // Odd digits: x == reverse / 10
        return x == reverse || x == reverse / 10;
    }
};
