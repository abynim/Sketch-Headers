#import "NSObject.h"

#import "NSCopying.h"

@interface MSSelectionPath : NSObject <NSCopying>
{
    long long _pointIndex;
    unsigned long long _curveIndex;
}

+ (id)selectionWithPoint:(long long)arg1 curve:(long long)arg2;
+ (id)emptySelection;
@property(nonatomic) unsigned long long curveIndex; // @synthesize curveIndex=_curveIndex;
@property(nonatomic) long long pointIndex; // @synthesize pointIndex=_pointIndex;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isLike:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

