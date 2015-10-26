#import "MSPointArray.h"

@interface MSGradientPointArray : MSPointArray
{
    id _delegate;
}

@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)replacePointAtIndex:(unsigned long long)arg1 withPoint:(struct CGPoint)arg2;

@end

