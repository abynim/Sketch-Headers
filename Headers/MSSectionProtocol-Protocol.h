#import "NSObject.h"

@class NSArray, NSView;

@protocol MSSectionProtocol <NSObject>
- (NSArray *)views;

@optional
- (BOOL)wantsSeparatorBetweenView:(NSView *)arg1 andView:(NSView *)arg2;
@end

