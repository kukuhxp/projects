# ITERATION

## While Looping

Example:

```
while(condition) {
  statements;
  increment/decrement;
}

// You cannot declare variables inside a while condition.
```

## Do...While Looping

Example:

```
do {
  statements;
  increment/decrement;
} while(condition)

/**
 * Statements in the body of the do statement are executed only once,
 * even though the while condition evaluates to false.
 */
```

## For Looping

Example:

```
for(condition, increment/decrement) {
  statements;
}
```

## Looping Control Flow

Example:

```
// Skip the one of iteration
for(condition, increment/decrement) {
  if(a == b) continue;
  statements;
}

// Skip the more of iteration
for(condition, increment/decrement) {
  if(a > b && a < b) continue;
  statements;
}

// Stop the next of iteration
for(condition, increment/decrement) {
  if(a == b) break;
  statements;
}
```