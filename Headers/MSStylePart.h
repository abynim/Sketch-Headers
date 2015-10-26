#import "_MSStylePart.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface MSStylePart : _MSStylePart <NSCoding, NSCopying>
{
}

- (void)refreshOfType:(unsigned long long)arg1 inBlock:(CDUnknownBlockType)arg2;
- (id)parentLayer;
- (id)parentStyle;
- (void)multiplyBy:(double)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)topViewForColorInspector:(id)arg1;
- (id)blendingViewForColorInspector:(id)arg1;

@end

