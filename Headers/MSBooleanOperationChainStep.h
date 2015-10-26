#import "NSObject.h"

@class NSBezierPath;

@interface MSBooleanOperationChainStep : NSObject
{
    NSBezierPath *_bezierPath;
    long long _operation;
}

+ (id)booleanOperationChainStepWithPath:(id)arg1 operation:(long long)arg2;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSBezierPath *bezierPath; // @synthesize bezierPath=_bezierPath;
- (void).cxx_destruct;

@end

