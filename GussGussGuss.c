///**
//@author shkstart
//@create 2020-02-21 5:25 下午
//*/
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main(){
//    srand(time(0));
//    int aiCount =(rand())%100; //计算机随机数
//    int guccs=0; //人类输入的数
//    int count=0; //计数
//    printf("你能猜1-100的数字吗\n");
//
//    do{
//        printf("请输入你要猜的数字\n");
//        scanf("%d", &guccs);
//        count++;
//        if(guccs>aiCount){
//            printf("omg，你输入的数字是：%d,比ai的数大了\n",guccs);
//        } else if (guccs<aiCount){
//            printf("holecreak，你输入的数字是：%d,比ai的数小了\n",guccs);
//        }
//    }while (
//            guccs !=aiCount
//            );
//     printf("\n恭喜你，你输入的数字是%d，是成功的,花费了%d次数",guccs,count);
//    return 0;
//}
//
