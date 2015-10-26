#import "MSModelObject.h"

@interface _MSBaseGrid : MSModelObject
{
    BOOL _isEnabled;
}

@property(nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
- (BOOL)isEqualForSync:(id)arg1;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveIsEnabled:(BOOL)arg1;
- (BOOL)primitiveIsEnabled;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

