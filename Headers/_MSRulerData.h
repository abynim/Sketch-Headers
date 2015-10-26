#import "MSModelObject.h"

@class MSArray;

@interface _MSRulerData : MSModelObject
{
    long long _base;
    MSArray *_guides;
}

@property(copy, nonatomic) MSArray *guides; // @synthesize guides=_guides;
@property(nonatomic) long long base; // @synthesize base=_base;
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
- (void)setPrimitiveGuides:(id)arg1;
- (id)primitiveGuides;
- (void)setPrimitiveBase:(long long)arg1;
- (long long)primitiveBase;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

