#import "NSObject.h"

@interface BCKeyEventTargetAction : NSObject
{
    id <NSObject> _target;
    SEL _action;
}

@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id <NSObject> target; // @synthesize target=_target;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

