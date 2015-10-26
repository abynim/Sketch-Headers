#import "NSObject.h"

@class NSMutableDictionary;

@interface BCBonjourBlockHandler : NSObject
{
    NSMutableDictionary *_handlers;
}

@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 message:(id)arg2 receiver:(id)arg3;
- (void)setCommand:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

