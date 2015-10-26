#import "NSTableView.h"

@class NSMutableDictionary;

@interface BCKeyEventActionTableView : NSTableView
{
    NSMutableDictionary *_keyEvents;
}

@property(retain, nonatomic) NSMutableDictionary *keyEvents; // @synthesize keyEvents=_keyEvents;
- (void).cxx_destruct;
- (void)keyDown:(id)arg1;
- (void)setTarget:(id)arg1 action:(SEL)arg2 forKeyDownEventWithCharacters:(id)arg3;

@end

