#import "NSObject.h"

@class NSMutableDictionary;

@interface MSFrequentColorTracker : NSObject
{
    NSMutableDictionary *_colorDict;
}

@property(retain, nonatomic) NSMutableDictionary *colorDict; // @synthesize colorDict=_colorDict;
- (void).cxx_destruct;
- (id)frequentColors;
- (void)registerColors:(id)arg1 fromSource:(id)arg2;
- (void)registerColor:(id)arg1 fromSource:(id)arg2;
- (id)init;

@end

