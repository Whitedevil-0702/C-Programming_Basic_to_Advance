/// Recursion in C and Tree method 
basic structure of recursion in C is as follows:
void function_name() {
    // Base case: condition to stop recursion
    if (base_condition) {
        return; // Exit the function
    }
    
    // Recursive case: function calls itself
    function_name(); // Recursive call
    
    // Optional: additional code to execute after the recursive call
}