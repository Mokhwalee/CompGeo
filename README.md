# C++/Matlab 2D Rectangle Tile Packing
-Packing Anchored Rectangles

# Introduction

# Algorithm
1. GenPoint : Generate random n points in the unit square box U[0<=x<=1, 0<=y<=1] with X_n=(0,0)
2. OrderingS : Order the points in S as s1,s2,...,sn such that x(sj)+y(sj)<=x(si)+y(si) for 1<=i<=j<=n.  
(left-moving sweep-line with slope -1)
3. TilePacking : Compute tiling U by choosing rectangles independently with respect to each nodes i(1<=i<=n).  
Also compute maximum area.
4. 
