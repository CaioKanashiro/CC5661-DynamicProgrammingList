def msc_dp(vetor):
	msc = [0 for k in range(len(vetor))]
	msc[0] = 1
	for i in range(1,len(vetor)):
		max_in_msc = 0
		for j in range(0,i):
			if msc[j] > max_in_msc:
				max_in_msc = msc[j]
			if vetor[j] < vetor[i]:
				msc[i] = max_in_msc + 1
	return max(msc)

vetor = [5,0,4,3,1,2,0]
print(msc_dp(vetor))
vetor = [8,5,6,1,7,3]
print(msc_dp(vetor))
