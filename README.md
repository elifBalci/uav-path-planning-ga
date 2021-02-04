# uav-path-planning-ga
**UAV path planning using Genetic Algorithm**

uav-path-planning-ga project employees genetic algorithm to find shortest route for a UAV in a given matrix. 
Map is represented as a binary matrix. 1 means that are is not suitable for flight (restricted, got high buildings, etc.), 0 means that area is usable. UAV can move diagonal or orthogonally adjacent. This repository is not aimed to be used for a real life drone rather it is a PoC. 


**Representation & First Generation**

Position of the drone in matrix is represented by a struct (Coordination). Coordination consists of two integers denoting position of the object in x and y axes. Every coordination value is a gen. Gens are randomly  generated  starting from (0,0) coordination to goal coordination to create individuals in the first generation. 

**Mating Pool & Fitness Function**

**Crossover**

**Mutations**

**Stoping Conditions**

**Performance**
