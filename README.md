# 简介
编写了一种静态前瞻式7段S型速度规划，实现边计算边运动，并在运动过程中可平稳减速暂停以及启动。
目前算法在运动过程中不支持修改位移、速度、加速度等条件，只是是在这些条件确定下实现的前瞻速度规划。