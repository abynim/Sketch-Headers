#import "NSButton.h"

@class BCFlexibleColor;

@interface BCBaseMagnifierButton : NSButton
{
    BCFlexibleColor *_chosenColor;
}

@property(retain, nonatomic) BCFlexibleColor *chosenColor; // @synthesize chosenColor=_chosenColor;
- (void).cxx_destruct;
- (id)color;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;

@end

