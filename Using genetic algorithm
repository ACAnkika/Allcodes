import string
import random

# Possible characters
possibleCharacters = string.ascii_lowercase + string.digits + \
                     string.ascii_uppercase + ' ., !?;:'

# Target string
t = "geek"

# Generate initial random string
def generate_random_string(length):
    return ''.join(random.choice(possibleCharacters) for _ in range(length))

# Fitness function: count matching characters
def fitness(current):
    return sum(1 for a, b in zip(current, t) if a == b)

# Mutation function: change one random character
def mutate(parent):
    index = random.randint(0, len(parent) - 1)
    child = list(parent)
    child[index] = random.choice(possibleCharacters)
    return ''.join(child)

# Main evolution loop
attempt = generate_random_string(len(t))
iteration = 0

while attempt != t:
    print(attempt)
    new_attempt = mutate(attempt)
    
    # Keep the mutation only if it improves fitness
    if fitness(new_attempt) >= fitness(attempt):
        attempt = new_attempt

    iteration += 1

print(f"Target matched after {iteration} iterations")
