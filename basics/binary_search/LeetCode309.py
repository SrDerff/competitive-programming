class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        if not prices: return 0
        hd=-prices[0]
        sd=0
        cd=0
        for p in prices:
            phd=hd
            psd=sd
            pcd=cd

            hd=max(phd, pcd-p)
            sd=phd+p
            cd=max(pcd, psd)
        return max(sd, cd)