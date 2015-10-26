#import "MSImmutableLayer.h"

@class MSImmutableColor;

@interface _MSImmutableSliceLayer : MSImmutableLayer
{
    BOOL _hasBackgroundColor;
    MSImmutableColor *_backgroundColor;
}

@property(retain, nonatomic) MSImmutableColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) BOOL hasBackgroundColor; // @synthesize hasBackgroundColor=_hasBackgroundColor;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

