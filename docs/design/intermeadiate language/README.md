## Topics 2: Language for frontend and deployment

### 2.1 Frontend Language

``` bash
neurons {
    'neuron1' [100] with lif_dynamics[v_rest=23];
    'neuron2' [200] with lif_dynamics;
}

connections {
    'neuron1' --> 'neuron2' with IL.all_to_all_topology;
    'neuron1' --> 'neuron2' with t1;
}

neuron_dynamics lif_dynamics[v_rest=23, ..., ..] states {'t_last'} {
    load P;
    let V_rest P.v_rest;
    out states.V V_rest * x;
    out states.t_last {x[1] - x[1]};
}

topology fixed t1[100, 100] {
	load indexes;
	connect t1[2, :];
	connect from indexes(t1) select i, j where i + j = 3 or call_static_external(f, i, j); 
}

topology var t2[*, 100] {
	load indexes;
	load pre_neuron_count;
	load post_neuron_count; // 100
	connect from indexes select i, j where j == pre_neuron_count - 1; 
}


extern bool f(int i, int j){
    if(i % 2 == 0){
    	return true;
    }
    return false;
}
```

### 2.2 Intermediate Language

``` c++
loc neuron_pop_lif 1;
par 0 machineA;
par 1 machineB;


actor neuron_pop_possion : loc 0 {
    attrs {
        
    }
    buffers {
        buf1[2000];
    }
    code {
        /* For loops to evolve states. */
        
    }
}

actor neuron_pop_lif : loc 1 {
    attrs {
        
    }
    buffers {
        buf1[2000];
    }
    code {
        /* For loops to evolve states. */
    }
}
```

+ Tackle each neuron as an actor.
+ Actors can be distributed into different hardware.

``` bin
actor main loop {
	load t;
	
	while !should_processed_event_t() {}
	
	actor_event_proceeding();
	
	while !should_step_to_next_time_stamp() {}
	
	next_time_step();
}
```



What we must consider when design a intermediate language.

+ **Distributed deployment is needed.**
  + The same actor can has multiple copies, and be distributed into different partitions.
+ Matrix optimization is needed.

