#import "MSImmutableModelBase.h"

@class MSImmutableArray;

@interface _MSImmutableRulerData : MSImmutableModelBase
{
    long long _base;
    MSImmutableArray *_guides;
}

@property(copy, nonatomic) MSImmutableArray *guides; // @synthesize guides=_guides;
@property(nonatomic) long long base; // @synthesize base=_base;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

