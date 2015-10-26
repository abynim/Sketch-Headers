#import "MSImmutableLayer.h"

@class MSImmutableStyle;

@interface _MSImmutableStyledLayer : MSImmutableLayer
{
    MSImmutableStyle *_style;
}

@property(retain, nonatomic) MSImmutableStyle *style; // @synthesize style=_style;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

