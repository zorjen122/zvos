待办:
    1、mtvec中Trap中断支持Vectored模式，改成Vectored模式（即支持用cause_code映射到trap中断处理函数）
    2、锁（）
    3、虚拟内存
    4、考虑添加简单的shell

优化：
    软件定时器方面：
        1、定时器按照超时时间排序，使得能够用二分法来timer_check
        2、软件定时器使用动态容器存储，跳表方式管理
    