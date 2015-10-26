#import "_MSRulerData.h"

@interface MSRulerData : _MSRulerData
{
}

- (void)handleLightweightObjectChangeForKey:(id)arg1 sender:(id)arg2;
- (void)setValue:(double)arg1 forGuideAtIndex:(unsigned long long)arg2;
- (void)replaceGuideAtIndex:(unsigned long long)arg1 withGuide:(id)arg2;
- (double)guideAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfGuides;
- (void)removeGuide:(id)arg1;
- (void)removeGuideAtIndex:(unsigned long long)arg1;
- (void)addGuide:(id)arg1;
- (void)addGuideWithValue:(double)arg1;
- (void)addGuide;

@end

