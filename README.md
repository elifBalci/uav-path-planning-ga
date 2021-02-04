# uav-path-planning-ga
**UAV path planning using Genetic Algorithm**

uav-path-planning-ga project employees genetic algorithm to find shortest route for a UAV in a given matrix. 
Map is represented as a binary matrix. 1 means that are is not suitable for flight (restricted, got high buildings, etc.), 0 means that area is usable. UAV can move diagonal or orthogonally adjacent. This repository is not aimed to be used for a real life drone rather it is a PoC. 


**Representation & First Generation**

Position of the drone in matrix is represented by a struct (Coordination). Coordination consists of two integers denoting position of the object in x and y axes. Every coordination value is a gen. Gens are randomly  generated  starting from (0,0) coordination to goal coordination to create individuals in the first generation. 

**Mating Pool & Fitness Function**
Fitness Method is used to select individuals for mating pool. Every individual receives a fitness value. Fitness value is determined by the path cost. Orthogonally adjacent steps cost 1 point and diagonal steps cost √2. After  cost of every route is computed, this values is divided by one, so best route has the greatest value.  Then cost of all paths are summed. Probability of being selected for mating pool is *cost of path/ total cost of all paths.*


**Crossover**

**Mutations**

**Stoping Conditions**

**Performance**
