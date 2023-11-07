class Math{
    public:
        bool isPrime(int n){
            if(n<2)
            {
                return false;
            }
            bool res{true};
            int cnt{2};
            while(cnt<n)
            {
                if(n % cnt == 0)
                {
                    res = false;
                }
                cnt++;
            }
            return res;
        }
};