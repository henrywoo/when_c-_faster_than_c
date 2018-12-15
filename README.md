The c version is from linux kernel: https://github.com/torvalds/linux/blob/master/lib/bsearch.c

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

After enabling CPU performance counter:
```
12:45 $ sudo perf stat ./myc

 Performance counter stats for './myc':

      31838.507279      task-clock (msec)         #    0.993 CPUs utilized          
             1,690      context-switches          #    0.053 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,336      page-faults               #    0.016 M/sec                  
    57,887,483,187      cycles                    #    1.818 GHz                    
                 0      instructions              #    0.00  insn per cycle         
    23,116,070,605      branches                  #  726.041 M/sec                  
       852,498,911      branch-misses             #    3.69% of all branches        

      32.070148725 seconds time elapsed

12:46 $ sudo perf stat ./mycpp

 Performance counter stats for './mycpp':

      29187.526594      task-clock (msec)         #    0.991 CPUs utilized          
             1,658      context-switches          #    0.057 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,337      page-faults               #    0.018 M/sec                  
    53,010,083,529      cycles                    #    1.816 GHz                    
                 0      instructions              #    0.00  insn per cycle         
    19,352,723,709      branches                  #  663.048 M/sec                  
       801,554,164      branch-misses             #    4.14% of all branches        

      29.456519492 seconds time elapsed

12:46 $ sudo perf stat ./myc

 Performance counter stats for './myc':

      32028.389422      task-clock (msec)         #    0.993 CPUs utilized          
             1,731      context-switches          #    0.054 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,336      page-faults               #    0.016 M/sec                  
    58,121,663,145      cycles                    #    1.815 GHz                    
                 0      instructions              #    0.00  insn per cycle         
    23,111,447,724      branches                  #  721.593 M/sec                  
       855,706,796      branch-misses             #    3.70% of all branches        

      32.248217003 seconds time elapsed

12:47 $ sudo perf stat ./mycpp

 Performance counter stats for './mycpp':

      29145.242952      task-clock (msec)         #    0.988 CPUs utilized          
             1,816      context-switches          #    0.062 K/sec                  
                 0      cpu-migrations            #    0.000 K/sec                  
           524,334      page-faults               #    0.018 M/sec                  
    52,981,107,526      cycles                    #    1.818 GHz                    
                 0      instructions              #    0.00  insn per cycle         
    19,351,901,271      branches                  #  663.981 M/sec                  
       802,139,598      branch-misses             #    4.15% of all branches        

      29.488175891 seconds time elapsed
```

We can see cplusplus version is 8% faster than c version.

```
>>> (32.070148725 - 29.456519492)/ ((29.456519492+32.070148725)/ 2)
0.08495923178488794
```

