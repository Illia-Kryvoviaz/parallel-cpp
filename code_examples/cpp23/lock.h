void thread_operation(){
    std::scoped_lock l(mutex1,mutex2);
     ...
    complicated_task();
}                                                                                                                                                   
