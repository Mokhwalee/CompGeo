# C++/Matlab 2D Rectangle Tile Packing
Title : Packing Anchored Rectangles

## Preview

## Algorithm
[function]
1. GenPoint : Generate random n points in the unit square box U[0<=x<=1, 0<=y<=1] with X_n=(0,0)
2. OrderingS : Order the points in the set S={s1,s2,...,sn} such that x(sj)+y(sj)<=x(si)+y(si) for 1<=i<=j<=n.  
(left-moving sweep-line with slope -1)
3. GreedyPacking : Algorithm chooses a rectangle of maximum area for each point in S of order s1, s2,..., sn.   
(We find the right and top most point rectangle box firstly)
4. TilePacking : Compute tiling unit square U by choosing rectangles independently with respect to each nodes i(1<=i<=n).  
Also compute maximum area.
