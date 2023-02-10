### Multiple two numbers
```
Start
Input num1, num2
output = num1 * num2
print output
End
```

### Circumfernce of a circle
```
Start
Input radius
cicumference = 2 * 3.14 * radius
print circumference
End
```

### Find perimeter of triangle
```
Start
Input side1, side2, side3
perimeter = side1 + side2 + side3
print perimeter
End
```

### Average of three numbers
```
Start
Input num1, num2, num3
average = (num1 + num2 + num3) / 3
print average
End
```

### Find simple interest
```
Start
Input principal, rate, time
simple_interest = (principal * rate * time) / 100
print simple_interest
End
```

### Find maximum of three numbers
```
Start
Input num1, num2, num3
max = num1
if num2 > max, then max = num2
if num3 > max, then max = num3
print max
End
```

### Check number is odd or even
```
Start
Input num
if num % 2 == 0, then print Even
else
    print Odd
End
```

### Check number is +ve, -ve or 0
```
Start
Input num
if num > 0. then print positive
else if num <0, then print negative
else
    print 0
```

### Valid triangle or Not
```
Start
Input side1, side2, side3
if (side1 + side2 <= side3) or (side1 + side3 <= side2) or (side2 + side3 <= side1), then print Invalid
else
    print Valid
End
```

### Students and Grades
```
Start
Input marks
if marks >= 90, then grade = A
else if marks >= 80, then grade = B
else if marks >= 60, then grade = C
else if marks >= 40, then grade = D
else
    grade = F
print grade
End
```

### Print Counting from 1 to N
```
Start
Input N
i = 1
if i > N, then End
else
    print i
    i = i + 1
    goto Step 4
```

### Add N numbers from users
```
Start
Input N
i = 1, sum = 0
if i > N
    print sum
    End
else
    Input num
    sum = sum + num
    i = i + 1
    goto step 4
```

### Print counting from N to 1
```
Start
Input N
i = N
if i >= 1
    print i
    i = i - 1
    goto step 4
else End
```

### Printing 1 to N but only even numbers
```
Start
Input N
i = 2
if i > N, then End
else
    print i
    i = i + 2
    goto Step 4
```

### Check prime number
```
Start
Input num
i = 2
if i < num
    if num % i == 0
        print not_prime
        End
    else
        i = i + 1
        goto step 4
else
    print prime
    End
```

### Find factorial of a number
```
Start
Input num
i = 1, factorial = 1
if i > num
    print factorial
    End
else
    factorial = factorial * i
    i = i + 1
    goto step 4
```