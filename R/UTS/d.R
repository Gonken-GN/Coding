library (caret)
expected <- factor (c (1, 1, 0, 1, 0, 0, 1, 0, 0, 0))
predicted <- factor (c (1, 0, 0, 1, 0, 0, 1, 1, 1, 0))
results <- confusionMatrix (data = predicted, reference = expected)
print (results)