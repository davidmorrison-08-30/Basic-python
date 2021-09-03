def mergesort(KHOI):
        if len(KHOI) > 1:
                center = len(KHOI)//2
                left_KHOI = KHOI[:center]
                right_KHOI = KHOI[center:]

                mergesort(left_KHOI)
                mergesort(right_KHOI)

                i = j = k = 0 #i is for the left, j is for the right, k is for the whole list
                while i < len(left_KHOI) and j < len(right_KHOI):
                        if left_KHOI[i] <= right_KHOI[j]:
                                KHOI[k] = left_KHOI[i]
                                i += 1
                        else:
                                KHOI[k] = right_KHOI[j]
                                j += 1
                        k += 1
                        
        #Usually, there were some remaining elements in either left_KHOI or right_KHOI
        #Check if any element in left_KHOI was left
                while i < len(left_KHOI):
                        KHOI[k] = left_KHOI[i]
                        i += 1
                        k += 1
                while j < len(right_KHOI):
                        KHOI[k] = right_KHOI[j]
                        j += 1
                        k += 1