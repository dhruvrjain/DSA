int makeBeautiful(string str) {
	// Write your code here
	int i,c=0,n=str.length();
	for(i=0;i<n;i++){
		if(to_string(i%2)!=to_string(str[i]-48))
		c++;
	}
	if(c<=n-c)
	return c;
	return n-c;
}