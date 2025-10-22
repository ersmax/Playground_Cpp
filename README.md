# C++ Practice Playground

This repository contains practical exercises to practice C++ standard 14.
This section is for theoretical programs.For project-oriented programs, see the other repo `Programming_Projects_Java`.
Feel free to explore each file for code examples and explanations.

---

## Chapter 1: Section 2 Expressions

- [Cpp vs Java](1_Start/1.2_Expressions/1_0_0_Cpp_vs_Java.cpp) - Explains differences between Java and C\+\+ handling of `char`/`byte` and Unicode.
- [Greetings](1_Start/1.2_Expressions/1_0_1_Greetings.cpp) - Greeting program that asks how many languages the user used and responds.
- [Deposit](1_Start/1.2_Expressions/1_0_2_Deposit.cpp) - Reads a deposit amount and computes the balance after one year with a fixed interest rate.
1. [Declarations](1_Start/1.2_Expressions/1_1_Declaration_Int.cpp) - Shows two ways to declare and initialize `feet` and `inches` variables.
2. [Declarations double](1_Start/1.2_Expressions/1_2_Declaration_Double.cpp) - Shows two ways to declare and initialize `count` (int) and `distance` (double).
3. [Uninitialized Variables](1_Start/1.2_Expressions/1_3_Undefined_Behaviour_Undefined_Var.cpp) - Demonstrates undefined/garbage values from uninitialized local variables and behavior.
4. [Expressions Examples](1_Start/1.2_Expressions/1_4_Expressions.cpp) - Converts simple mathematical formulas into C\+\+ expressions with user input.
5. [Output Characters](1_Start/1.2_Expressions/1_5_Output.cpp) - Shows character assignments and outputs the resulting character sequence.
6. [Integer Division](1_Start/1.2_Expressions/1_6_Output.cpp) - Demonstrates integer-division pitfalls using `(1/3) * 3`.
7. [Quotient and Remainder](1_Start/1.2_Expressions/1_7_Output_and_remainder.cpp) - Reads two integers and prints the whole-number quotient and remainder.
8. [Temperature Conversion](1_Start/1.2_Expressions/1_8_Temperature_conversion.cpp) - Shows a Celsius-to-Fahrenheit conversion bug due to integer division and correction.

## Chapter 1: Section 3 Console In and Console Out

- [Age](1_Start/1.3_Console_In_Out/1_3_0_1_Age.cpp) - Reads a dog's age and name, then computes the equivalent human years.
9. [Message](1_Start/1.3_Console_In_Out/1_3_9_Message.cpp) - Outputs the multi-line phrase about Life, the Universe, and Everything being 42.
10. [Input Prompt](1_Start/1.3_Console_In_Out/1_3_10_Input.cpp) - Prompts for and reads an integer into the variable `theNumber`.
11. [Formatting Statement](1_Start/1.3_Console_In_Out/1_3_11_Statement.cpp) - Demonstrates setting `cout` to fixed notation, `showpoint`, and precision of 3.
12. [Greet](1_Start/1.3_Console_In_Out/1_3_12_Greet.cpp) - Minimal program that prints `Hello world`.
13. [Tabs](1_Start/1.3_Console_In_Out/1_3_13_tabs.cpp) - Outputs `A`, newline, `B`, a tab, and `C`.
14. [Fix Error](1_Start/1.3_Console_In_Out/1_3_14_Fix_error.cpp) - Fixes input/output to read first and last name separately and display full name with age.
15. [String Concatenation Result](1_Start/1.3_Console_In_Out/1_3_15_result.cpp) - Shows string concatenation of `"5"` and `"3"` producing `53`.

---

## Chapter 2: Section 1 Boolean expressions

1. [Boolean expressions](2_Flow_of_control/2.1_Boolean_expressions/2_1_boolean_exp.cpp) - Evaluates a set of Boolean expressions with `count = 0` and `limit = 10`, demonstrates short-circuiting and notes division-by-zero pitfalls.
2. [Boolean interval](2_Flow_of_control/2.1_Boolean_expressions/2_2_Boolean_interval.cpp) - Explains why `2 < x < 3` is incorrect in C\+\+ and shows the correct expression `2 < x && x < 3`.
3. [Quadratic positive region](2_Flow_of_control/2.1_Boolean_expressions/2_3_Quadratic_exp.cpp) - Shows the Boolean condition where `x^2 - x - 2` is positive: `x < -1 || x > 2`.
4. [Quadratic negative region](2_Flow_of_control/2.1_Boolean_expressions/2_4_Quadratic_exp_negative.cpp) - Shows the Boolean condition where `x^2 - 4x + 3` is negative: `x > 1 && x < 3`.

## Chapter 2: Section 2 Branching

- [Temperatures](2_Flow_of_control/2.2_Branching/2_0_1_temperatures.cpp) - Temperature-based branching example (if-else).
- [Vehicle class](2_Flow_of_control/2.2_Branching/2_0_2_Vehicle_class.cpp) - Switch statement for vehicle toll classes.
- [Greetings (while)](2_Flow_of_control/2.2_Branching/2_0_3_Greetings.cpp) - Repeated greetings using `while`.
- [Greetings once (do-while)](2_Flow_of_control/2.2_Branching/2_0_4_Greetings_once.cpp) - At-least-once greetings using `do-while`.
- [Calories](2_Flow_of_control/2.2_Branching/2_0_6_Calories.cpp) - Summing item calories with a loop.
5. [Division short-circuit](2_Flow_of_control/2.2_Branching/2_5_Division_0.cpp) - Short-circuit boolean example preventing division by zero.
6. [High greater](2_Flow_of_control/2.2_Branching/2_6_High_greater.cpp) - Simple if-else comparing `score` to 100.
7. [Solvent vs Bankrupt](2_Flow_of_control/2.2_Branching/2_7_Solvent_Bankrupt.cpp) - Solvent vs Bankrupt logic updating `savings`.
8. [Passed/Failed](2_Flow_of_control/2.2_Branching/2_8_Passed_Failed.cpp) - Compound condition for pass/fail.
9. [Temperature/Pressure](2_Flow_of_control/2.2_Branching/2_9_Temperature_Pressure.cpp) - Warning/OK using logical OR.
10. [Outputs truthiness](2_Flow_of_control/2.2_Branching/2_10_Outputs.cpp) - Demonstrates truthiness of 0, 1, -1 in `if`.
11. [Greetings options](2_Flow_of_control/2.2_Branching/2_11_Greetings_options.cpp) - Nested `if` output/flow example.
12. [Sizes](2_Flow_of_control/2.2_Branching/2_12_Sizes.cpp) - Multi-branch size classification example.
13. [Smaller sizes](2_Flow_of_control/2.2_Branching/2_13_Smaller_sizes.cpp) - Variant for negative value.
14. [Larger sizes](2_Flow_of_control/2.2_Branching/2_14_Larger_sizes.cpp) - Variant for zero value.
15. [Multiway If-else](2_Flow_of_control/2.2_Branching/2_15_Multiway_If_else.cpp) - Multiway classification of integer `n`.
16. [Directions](2_Flow_of_control/2.2_Branching/2_16_Directions.cpp) - Enum ordering demonstration.
17. [Updated directions](2_Flow_of_control/2.2_Branching/2_17_Updated_directions.cpp) - Enum with explicit values and usage.

## Chapter 2: Section 3 Loops

- [Negative numbers](2_Flow_of_control/2.3_Loops/2_0_1_Negative_numbers.cpp) - Read 4 negative numbers, break on non\-negative input and sum the valid entries.
- [Negative continue](2_Flow_of_control/2.3_Loops/2_0_2_Negative_continue.cpp) - Read 4 negative numbers, use `continue` to re\-prompt on non\-negative input and sum.
18. [Loop1 (post\-decrement)](2_Flow_of_control/2.3_Loops/2_18_Loop1.cpp) - Demonstrates `while(count-- > 0)` output ordering.
19. [Loop2 (pre\-decrement)](2_Flow_of_control/2.3_Loops/2_19_Loop2.cpp) - Demonstrates `while(--count > 0)` output ordering.
20. [Loop3 (do\-while with n++)](2_Flow_of_control/2.3_Loops/2_20_Loop3.cpp) - `do`/`while` with post\-increment shows outputs ending at 4.
21. [Loop4 (do\-while with ++n)](2_Flow_of_control/2.3_Loops/2_21_Loop4.cpp) - `do`/`while` with pre\-increment shows outputs ending at 3.
22. [Loop5](2_Flow_of_control/2.3_Loops/2_22_Loop5.cpp) - `while` decrementing by 3 prints 10, 7, 4, 1.
23. [Loop6](2_Flow_of_control/2.3_Loops/2_23_Loop6.cpp) - `while(x < 0)` with `x = 10` produces no output.
24. [Loop7 (do\-while)](2_Flow_of_control/2.3_Loops/2_24_Loop7.cpp) - `do`/`while` variant that prints 10, 7, 4, 1.
25. [Loop8 (do\-while negative start)](2_Flow_of_control/2.3_Loops/2_25_Loop8.cpp) - `do`/`while` with negative start prints the initial value once.
26. [While vs Do\-while](2_Flow_of_control/2.3_Loops/2_26_Loop9.cpp) - Explains the key difference: condition check before vs after body.
27. [For loop 1](2_Flow_of_control/2.3_Loops/2_27_For_loop1.cpp) - `for` producing 2 4 6 8.
28. [For loop 2](2_Flow_of_control/2.3_Loops/2_28_For_loop2.cpp) - `for` decrementing by 2 printing `Hello` with the loop variable.
29. [For loop 3](2_Flow_of_control/2.3_Loops/2_29_For_loop3.cpp) - `for` with `double` step prints 2 1.5 1 0.5.
30. [For loop rewrites](2_Flow_of_control/2.3_Loops/2_30_For_loop4.cpp) - Rewrite `while`/`do` examples as `for` loops.
31. [For loop log](2_Flow_of_control/2.3_Loops/2_31_For_loop5.cpp) - Counts doublings until a limit (prints `1024 10`).
32. [For loop with empty body](2_Flow_of_control/2.3_Loops/2_32_For_loop6.cpp) - Demonstrates trailing semicolon producing an empty loop body.
33. [For loop infinite pitfall](2_Flow_of_control/2.3_Loops/2_33_For_loop7.cpp) - Shows an unintended infinite loop when starting at 0 and multiplying.
34. [Loop choice guidance](2_Flow_of_control/2.3_Loops/2_34_For_loop8.cpp) - Advice on when to use `while`, `do`/`while`, or `for`.
35. [Infinite growth example](2_Flow_of_control/2.3_Loops/2_35_For_loop10.cpp) - `while` that increases the variable causing an infinite loop.
36. [Break statement](2_Flow_of_control/2.3_Loops/2_36_Break_statement.cpp) - Explains `break` behavior in loops and `switch`.
37. [Nested loops output](2_Flow_of_control/2.3_Loops/2_37_Output.cpp) - Nested `for` loops producing a multiplication table.

## Chapter 2: Section 4 File Input


