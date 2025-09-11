/*
You sometimes see numeric intervals given as
2 < x < 3
In C++ this interval does not have the meaning you may expect. Explain
and give the correct C++ Boolean expression that specifies that x lies between 2
and 3.
*/

// My answer:

/*
In C++, the expression `2 < x < 3` is evaluated in two steps due to
operator precedence and associativity.
First, `2 < x` is evaluated, which results in a Boolean value (true or false).
Then, this Boolean value is compared to `3`, which is not the intended behavior.
The correct way to express that `x` lies between `2` and `3` is to use
the logical AND operator (`&&`) to combine two comparisons: `2 < x && x < 3`.
*/