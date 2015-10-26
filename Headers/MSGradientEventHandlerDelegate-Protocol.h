#import "NSObject.h"

@class MSGradientEventHandler;

@protocol MSGradientEventHandlerDelegate <NSObject>
- (void)gradientHandlerWillLoseFocus:(MSGradientEventHandler *)arg1;
- (void)gradientHandlerDidChangeGradient:(MSGradientEventHandler *)arg1;
- (void)gradientHandlerDidChangeCurrentPoint:(MSGradientEventHandler *)arg1;
@end

