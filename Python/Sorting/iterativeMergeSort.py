# Iterative Merge sort (Bottom Up)

# Iterative mergesort function to
# sort arr[0...n-1]

# perform bottom up merge
def mergeSort(a):
	# start with least partition size of 2^0 = 1
	width = 1
	n = len(a)										
	# subarray size grows by powers of 2
	# since growth of loop condition is exponential,
	# time consumed is logarithmic (log2n)
	while (width < n):
		# always start from leftmost
		l=0;
		while (l < n):
			r = min(l+(width*2-1), n-1)
			m = (l+r)//2
			# final merge should consider
			# unmerged sublist if input arr
			# size is not power of 2
			if (width>n//2):	
				m = r-(n%width)
			merge(a, l, m, r)
			l += width*2
		# Increasing sub array size by powers of 2
		width *= 2
	return a

# Merge Function
def merge(a, l, m, r):
	n1 = m - l + 1
	n2 = r - m
	L = [0] * n1
	R = [0] * n2
	for i in range(0, n1):
		L[i] = a[l + i]
	for i in range(0, n2):
		R[i] = a[m + i + 1]

	i, j, k = 0, 0, l
	while i < n1 and j < n2:
		if L[i] > R[j]:
			a[k] = R[j]
			j += 1
		else:
			a[k] = L[i]
			i += 1
		k += 1

	while i < n1:
		a[k] = L[i]
		i += 1
		k += 1

	while j < n2:
		a[k] = R[j]
		j += 1
		k += 1


# Driver code
a = [12, 11, 13, 5, 6, 7]
print("Given array is ")
print(a)

mergeSort(a)

print("Sorted array is ")
print(a)
