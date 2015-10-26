#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSBezierPath;

@interface NSBezierPathEnumerator : NSObject <NSFastEnumeration>
{
    BOOL _reverse;
    NSBezierPath *_bezierPath;
}

@property(nonatomic) BOOL reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (void).cxx_destruct;
- (id)pathItems;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

@end

