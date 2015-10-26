#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSArray, NSBezierPath;

@interface NSBezierPathEnumerator : NSObject <NSFastEnumeration>
{
    BOOL _reverse;
    NSArray *_pathItems;
    NSBezierPath *_bezierPath;
}

@property(nonatomic) BOOL reverse; // @synthesize reverse=_reverse;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
@property(copy, nonatomic) NSArray *pathItems; // @synthesize pathItems=_pathItems;
- (void).cxx_destruct;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

@end

