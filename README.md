```
12:00 $ sudo perf stat ./mycpp

 Performance counter stats for './mycpp':

      28875.726678      task-clock (msec)         #    0.991 CPUs utilized          
             2,092      context-switches          #    0.072 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,334      page-faults               #    0.018 M/sec                  
   <not supported>      cycles                                                      
   <not supported>      instructions                                                
   <not supported>      branches                                                    
   <not supported>      branch-misses                                               

      29.134269690 seconds time elapsed

12:01 $ sudo perf stat ./myc

 Performance counter stats for './myc':

      31742.170788      task-clock (msec)         #    0.992 CPUs utilized          
             2,252      context-switches          #    0.071 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,336      page-faults               #    0.017 M/sec                  
   <not supported>      cycles                                                      
   <not supported>      instructions                                                
   <not supported>      branches                                                    
   <not supported>      branch-misses                                               

      31.995127999 seconds time elapsed

12:01 $ sudo perf stat ./myc

 Performance counter stats for './myc':

      31724.469016      task-clock (msec)         #    0.993 CPUs utilized          
             2,241      context-switches          #    0.071 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,337      page-faults               #    0.017 M/sec                  
   <not supported>      cycles                                                      
   <not supported>      instructions                                                
   <not supported>      branches                                                    
   <not supported>      branch-misses                                               

      31.958128739 seconds time elapsed

12:02 $ sudo perf stat ./mycpp

 Performance counter stats for './mycpp':

      29051.211357      task-clock (msec)         #    0.987 CPUs utilized          
             2,205      context-switches          #    0.076 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,336      page-faults               #    0.018 M/sec                  
   <not supported>      cycles                                                      
   <not supported>      instructions                                                
   <not supported>      branches                                                    
   <not supported>      branch-misses                                               

      29.419018163 seconds time elapsed


12:03 $ sudo perf stat ./myc

 Performance counter stats for './myc':

      31587.237453      task-clock (msec)         #    0.994 CPUs utilized          
             2,190      context-switches          #    0.069 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,335      page-faults               #    0.017 M/sec                  
   <not supported>      cycles                                                      
   <not supported>      instructions                                                
   <not supported>      branches                                                    
   <not supported>      branch-misses                                               

      31.783047536 seconds time elapsed

```