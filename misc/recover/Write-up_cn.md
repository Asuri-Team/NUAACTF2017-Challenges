#recover 
## **【原理】**



## **【目的】**



## **【环境】**



## **【工具】**

pngcheck, 010 editor

## **【步骤】**

首先修复png头部，然后发现IHDR的crc校验未通过，直接修改crc为正确值可以看到图片，但是没有flag。

这时候有两种情况，图片高度或宽度，既然正常显示说明宽度没问题，调整图片高度或者爆破高度得到正确高度为1500，得到flag。

## **【总结】**


