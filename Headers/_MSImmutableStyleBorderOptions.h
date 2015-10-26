#import "MSImmutableStylePart.h"

@class NSArray;

@interface _MSImmutableStyleBorderOptions : MSImmutableStylePart
{
    NSArray *_dashPattern;
    unsigned long long _lineCapStyle;
    unsigned long long _lineJoinStyle;
}

@property(nonatomic) unsigned long long lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(copy, nonatomic) NSArray *dashPattern; // @synthesize dashPattern=_dashPattern;
- (void).cxx_destruct;
- (BOOL)hasDefaultValues;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;
- (id)initWithMutableModelObject:(id)arg1;

@end

