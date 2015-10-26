#import "NSView.h"

@class NSString;

@interface CHPlainWhiteView : NSView
{
    NSString *_displayString;
}

@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end

