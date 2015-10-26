#import "MSStylePart.h"

@class NSArray;

@interface _MSStyleBorderOptions : MSStylePart
{
    BOOL _hasDashPattern;
    NSArray *_dashPattern;
    unsigned long long _lineCapStyle;
    unsigned long long _lineJoinStyle;
}

@property(nonatomic) unsigned long long lineJoinStyle; // @synthesize lineJoinStyle=_lineJoinStyle;
@property(nonatomic) unsigned long long lineCapStyle; // @synthesize lineCapStyle=_lineCapStyle;
@property(nonatomic) BOOL hasDashPattern; // @synthesize hasDashPattern=_hasDashPattern;
@property(copy, nonatomic) NSArray *dashPattern; // @synthesize dashPattern=_dashPattern;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveLineJoinStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineJoinStyle;
- (void)setPrimitiveLineCapStyle:(unsigned long long)arg1;
- (unsigned long long)primitiveLineCapStyle;
- (void)setPrimitiveHasDashPattern:(BOOL)arg1;
- (BOOL)primitiveHasDashPattern;
- (void)setPrimitiveDashPattern:(id)arg1;
- (id)primitiveDashPattern;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

