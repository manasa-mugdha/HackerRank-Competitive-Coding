#python3

def prisonAfterNDays(cells, n):
    # Store the states in a set to detect cycles
    states = set()

    # Perform the simulation
    for _ in range(n):
        new_cells = [0] * 8
        for i in range(1, 7):
            if cells[i - 1] == cells[i + 1]:
                new_cells[i] = 1
        cells = new_cells

        # Check if a cycle is detected
        state = tuple(cells)
        if state in states:
            # If a cycle is detected, fast-forward to the remaining days
            n %= len(states)
            for _ in range(n):
                new_cells = [0] * 8
                for i in range(1, 7):
                    if cells[i - 1] == cells[i + 1]:
                        new_cells[i] = 1
                cells = new_cells
            break

        # Add the current state to the set
        states.add(state)

    return cells

# Read input
N, n = map(int, input().split())
cells = list(map(int, input().split()))

# Calculate the state of the prison after n days
result = prisonAfterNDays(cells, n)

# Print the result
print(*result)
