#import "_MSArtisticStroke.h"

@interface MSArtisticStroke : _MSArtisticStroke
{
}

- (double)maximumStrength;
- (id)artisticBezierPathFromPath:(id)arg1 withStrokeWidth:(double)arg2;
- (id)artisticBezierPathFromPath:(id)arg1 atSide:(long long)arg2 withStrokeWidth:(double)arg3;
- (double)distanceOnSide:(long long)arg1 atPosition:(double)arg2;
- (id)pathBySubdividingAtHandles:(id)arg1;
- (id)addHandleAtPosition:(double)arg1;
- (void)addHandle:(id)arg1;
- (void)removeHandleAtIndex:(unsigned long long)arg1;
- (void)sortHandles;
- (void)removeHandle:(id)arg1;
- (BOOL)isActive;
- (void)simplify;
- (BOOL)hasDefaultValues;
- (id)defaultHandlesArray;
- (void)fillInEmptyObjects;

@end

