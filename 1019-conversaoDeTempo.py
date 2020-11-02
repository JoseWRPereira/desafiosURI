n = int(input())
h = n//(60*60)
m = (n%(60*60))//60
s = n%60
print("{}:{}:{}".format(h,m,s))