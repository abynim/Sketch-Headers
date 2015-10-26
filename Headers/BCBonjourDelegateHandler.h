#import "NSObject.h"

@interface BCBonjourDelegateHandler : NSObject
{
    id _delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 message:(id)arg2 receiver:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

