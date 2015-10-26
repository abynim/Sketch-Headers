#import "NSObject.h"

@interface MSFastPathBuilder : NSObject
{
    unsigned long long mWidth;
    unsigned long long mHeight;
    char *mMaskData;
    unsigned long long mMaskRowBytes;
}

+ (id)pathForMaskImage:(id)arg1;
- (void)flushPath:(id)arg1 cachedPoint2:(struct CGPoint *)arg2;
- (void)addPoint:(struct CGPoint)arg1 toPath:(id)arg2 cachedPoint1:(struct CGPoint *)arg3 cachedPoint2:(struct CGPoint *)arg4;
- (void)removeSegment:(id)arg1 fromSegmentPath:(id)arg2;
- (void)unwindOneSegmentPath:(id)arg1 intoPath:(id)arg2;
- (id)convertSegmentsIntoPath:(id)arg1;
- (struct CGPoint)pointFromValue:(id)arg1;
- (id)valueFromPoint:(struct CGPoint)arg1;
- (void)insertLineStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 intoDictionary:(id)arg3;
- (id)buildLineSegments;
- (id)path;
- (void)dealloc;
- (id)initWithMask:(struct CGImage *)arg1;

@end

