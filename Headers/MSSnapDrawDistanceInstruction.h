#import "MSSnapDrawInstruction.h"

@class NSArray;

@interface MSSnapDrawDistanceInstruction : MSSnapDrawInstruction
{
    NSArray *_items;
    unsigned long long _axis;
}

+ (id)distanceInstructionBetween:(id)arg1 axis:(unsigned long long)arg2;
@property(nonatomic) unsigned long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)drawWithZoom:(double)arg1 context:(id)arg2;
- (struct CGRect)rect;

@end

