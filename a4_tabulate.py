
# This just prints an ungodly large number... guess i'll just use excel 
def calc_t(n):
    t_values = [0] * (n + 1)
    
    for i in range(2, n + 1):
        t_values[i] = i - 1 + 2 * t_values[i - 1]
    
    return t_values[n]

# Define the range of n values
start_n = 10000
end_n = 1000000
step = 10000

# Calculate t(n) for each value of n in the specified range and print the results with a newline after each value
for n in range(start_n, end_n + 1, step):
    t_n = calc_t(n)
    print(f"n = {n}, t(n) = {t_n}\n")
